%{
#include<iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "1305115_table.h"
#define YYSTYPE symbolInfo*
using namespace std;

FILE *output;
string cmp;
symbolInfo* notget;
symbolInfo* idcheck;
symbolInfo* ix;
symbolInfo* idprint;
symbolTable* table=new symbolTable(31);
extern int line;
extern int error;
void yyerror(const char *s){
	printf("%s\n",s);
	fprintf(output,"Error at line %d : %s \n",line,s);
	error++;
}

int yylex(void);

%}
%error-verbose
%token  INT MAIN LPAREN RPAREN LCURL RCURL SEMICOLON FLOAT CHAR COMMA ID LTHIRD RTHIRD CONST_INT CONST_FLOAT CONST_CHAR FOR IF WHILE PRINTLN RETURN LOGICOP RELOP ASSIGNOP ADDOP NOT MULOP INCOP DECOP STRING ELSE DO BREAK DOUBLE VOID CASE SWITCH CONTINUE DEFAULT
%nonassoc LOWER_THAN_ELSE
%nonassoc ELSE


%%

Program : INT MAIN LPAREN RPAREN compound_statement { fprintf(output,"program : INT MAIN LPAREN RPAREN compound_statement\n\n");}
	;


compound_statement : LCURL var_declaration statements RCURL {fprintf(output,"compound_statement : LCURL var_declaration statements RCURL\n\n");}
		   | LCURL statements RCURL  {fprintf(output,"compound_statement : LCUR  statements RCURL\n\n");}  
		   | LCURL RCURL  {fprintf(output,"compound_statement : LCURL RCURL\n\n");}
		   ;

			 
var_declaration	: type_specifier declaration_list SEMICOLON 
		|  var_declaration type_specifier declaration_list SEMICOLON 
		;

type_specifier	: INT { fprintf(output,"type_specifier  : INT \n\n"); {cmp="int";}}
		| FLOAT { fprintf(output,"type_specifier  : FLOAT \n\n"); {cmp="float";}}
		| CHAR 
		| VOID 
		;
			
declaration_list : declaration_list COMMA ID { 
		fprintf(output,"declaration_list  : declaration_list COMMA ID\n%s\n\n",$3->name.c_str()); 
		idcheck=table->lookOut($3->name);
		if(idcheck==Null){
				
					if(strcmp(cmp.c_str(),"int")==0)
					{
					$3->data=integer;
					$3->val.i=-99999;
					$3->position=0;
					table->insertItem($3);
					}
					//Add code for float and character
					
				}
		else{
				char errorarr[30]="Multiple Declaration";
				strcat(errorarr,$3->name.c_str());							
				yyerror(errorarr);
		    } }
		 | declaration_list COMMA ID LTHIRD CONST_INT RTHIRD 
			{fprintf(output,"declaration_list  : declaration_list COMMA ID LTHIRD CONST_INT RTHIRD\n %s\n\n",
				$3->name.c_str());
		idcheck=table->lookOut($3->name);
		if(idcheck==Null){
				
				if(strcmp(cmp.c_str(),"int")==0)
				{
				$3->data=integer; 
				//$3->arraysz=what will be added???
				$3->val.arrayi=(int*)malloc(($3->arraysz)*sizeof(int));
				for(int k=0;k<$3->arraysz;k++){$3->val.arrayi[k]=-1;}
				}
				else if(strcmp(cmp.c_str(),"float")==0)
				{
				//add codes
				}
				else if(strcmp(cmp.c_str(),"char")==0)
				{	
				//add codes
				}
				table->insertItem($3);	
			}
	else{
		// add error here
		
	}	
		}
		 | ID 
		 | ID LTHIRD CONST_INT RTHIRD 
		 ;

statements : statement 
	   | statements statement 
	   ;


statement  : expression_statement 
	   | compound_statement 
	   | IF error LPAREN error RPAREN statement %prec LOWER_THAN_ELSE 
	   | IF LPAREN error RPAREN statement ELSE statement 
	   | WHILE LPAREN error RPAREN statement 
	   | RETURN error SEMICOLON 
	   | FOR LPAREN expression_statement expression_statement error RPAREN statement 
	   | FOR LPAREN expression_statement expression_statement expression RPAREN statement  
	   | IF LPAREN expression RPAREN statement{ //add precedence at the end of action
	     } %prec LOWER_THAN_ELSE
	   | IF LPAREN expression RPAREN statement ELSE statement 
	   | WHILE LPAREN expression RPAREN statement
	   | PRINTLN LPAREN ID RPAREN SEMICOLON { 
		fprintf(output,"statement  : PRINTLN LPAREN ID RPAREN SEMICOLON \n\n");
		idprint=table->lookOut($3->name);
		if(idprint!=Null)
		{	
			if(idprint->data==integer)
				printf("\n\n\nPRINTLN LPAREN ID RPAREN SEMICOLON  %d\n\n\n",idprint->val.i);
			//can you add additional code here??
		}
		else {
			//add the error code! can you tell what would be the error here?? 
		}
		}
	   | RETURN expression SEMICOLON
	   ;

		
expression_statement	: SEMICOLON 		
			| expression SEMICOLON 
			| error SEMICOLON 
			;

expression : logic_expression 	
	   | variable ASSIGNOP logic_expression { fprintf(output,"expression : variable ASSIGNOP logic_expression\n\n"); 
		if($3->data==invalid){}
		else if(($1->data==integer||$1->data==character)&&$3->data==floating)
 		{yyerror("Type mismatch");}
		else{
			if($1->arraysz==0){

				if($3->data==integer)
				{
					//$1->val.i=What will be here??
					$1->data=$3->data;
				}
				// add codes for others
				table->print(output);
					}
			else if($1->arraysz>0)
			{
				if($3->data==integer)
				{
					//$1->val.arrayi[ix->val.i]=what will be here?;
					$1->data=$3->data;
				}
				
			table->print(output);	
			}
		}
		};
						
variable : ID 	{ fprintf(output,"variable  : ID \n\n"); 
			notget=table->lookOut($1->name);
			if(notget!=Null)
			{
			//$$=notget;
			$$=$1;
			if($$->arraysz!=0){yyerror("Identifier to an array");}
			}
			else
			{
			//add the error!
			}
}
	 | ID LTHIRD error RTHIRD 
	 | ID error LTHIRD expression RTHIRD 	
	| ID LTHIRD expression RTHIRD 
		{ fprintf(output,"variable  : ID LTHIRD expression RTHIRD\n\n");//printf("Arraytype: %d\n",$1->data); 
			notget=table->lookOut($1->name);
			
			if(notget!=Null)
			{
				
				if(notget->arraysz>0) 
				{
					printf("declared before1: %s\n",notget->name.c_str());
					ix=$3;
					printf("here is in assign %d %d\n",ix->val.i,$3->val.i);
					$$=notget;
					if($3->data==floating){yyerror("invalid index");}
					else if($3->val.i>=$$->arraysz || $3->val.i<0){yyerror("Array Index out of bound");}
				}
				else if(notget->arraysz==0)
					{
					char errorarr[30]="Not an array : ";
					strcat(errorarr,$1->name.c_str());							
					yyerror(errorarr);
					}
			}
			else
			{
			//add code
			}
		};
			

logic_expression : rel_expression 	
		 | rel_expression LOGICOP rel_expression 
			{ fprintf(output,"logic_expression : rel_expression LOGICOP rel_expression\n\n");
				if((strcmp($2->name.c_str(),"&&"))==0)
				{
					if ($1->data==integer&&$3->data==integer)//int&&int
					{
							printf("%d",$1->val.i);
							//hint: 1&&0=0 0&&0=0 1&&1=1 $$ value will be changed
							printf("&&%d=%d\n",$3->val.i,$$->val.i);
					}
					else if ($1->data==integer&&$3->data==floating)//int&&float
					{
						printf("%d",$1->val.i);
						//static_cast<float>($1->val.i) just convert the int to float type and then compare simply
						printf("&&%f=%d\n",$3->val.f,$$->val.i);
					}
					else if ($1->data==floating&&$3->data==integer)//float&&int
					{
						printf("%f",$1->val.f);
						//same as int&&int
						printf("&&%d=%d\n",$3->val.i,$$->val.i);
					}
					else if ($1->data==floating&&$3->data==floating)//float&&float
					{
						printf("%f",$1->val.f);
						//same as int && int
						printf("&&%f=%d\n",$3->val.f,$$->val.i);
					}
						
				}
				else if((strcmp($2->name.c_str(),"||"))==0)
				{
					
					//add codes for || take help from &&
											
				} };
			
rel_expression	: simple_expression 
		| simple_expression RELOP simple_expression
			{ fprintf(output,"rel_expression : simple_expression RELOP simple_expression\n\n"); 
				if((strcmp($2->name.c_str(),"<"))==0)
				{					
					if ($1->data==integer&&$3->data==floating)//int<float
					{
						printf("%d",$1->val.i);
						//convert int to float using static_cast<float>
						printf("<%f=%d\n",$3->val.f,$$->val.i);
					}
					else if ($1->data==floating&&$3->data==integer)//float<int
					{
						printf("%f",$1->val.f);
						//convert int to float using static_cast<float>
						printf("<%d=%d\n",$3->val.i,$$->val.i);
					}
					else if ($1->data==integer&&$3->data==integer)//int<int
					{
						printf("%d",$1->val.i);
						//add code here
						printf("<%d=%d\n",$3->val.i,$$->val.i);
					}
					else if ($1->data==floating&&$3->data==floating)//float<float
					{
						printf("%f",$1->val.f);
						//add code here
						printf("<%f=%d\n",$3->val.f,$$->val.i);
					}				
											
				}
				else if((strcmp($2->name.c_str(),">")==0))
				{
					//take help from <
				}
				else if((strcmp($2->name.c_str(),"<="))==0)
				{
					//take help from <
				}
				else if((strcmp($2->name.c_str(),">="))==0)
				{
					//take help from <
				}
				else if((strcmp($2->name.c_str(),"!="))==0)
				{
					//take help from <
				
				}};

				
simple_expression : term 
		  | simple_expression ADDOP term 
	{ fprintf(output,"simple_expression : simple_expression ADDOP term  \n\n"); 
		if((strcmp($2->name.c_str(),"+"))==0)
		{
			if($1->data==integer&&$3->data==integer)//integer+integer
			{printf("%d",$1->val.i);
			//add codes here
			$$->data==$1->data;
			printf("+%d:%d\n",$3->val.i,$$->val.i);
			}
			else if ($1->data==floating&&$3->data==floating)//float+float
			{
			printf("%f",$1->val.f);
			//add codes here
			$$->data==$1->data;
			printf("+%f:%f\n",$3->val.f,$$->val.f);
			}
			else if ($1->data==integer&&$3->data==floating)//int+float=float
			{
			printf("%f",static_cast<float>($1->val.i));
			//add after converting int to float
			//$$->data==what data type?
			printf("+%f:%f\n",$3->val.f,$$->val.f);
			}
			else if ($1->data==floating&&$3->data==integer)//int+float=float
			{
			printf("%f",$1->val.f);
			//add after converting int to float 
			//$$->data==what data  type??
			printf("+%f:%f\n",static_cast<float>($3->val.i),$$->val.f);
			}
				
		} 
		else if((strcmp($2->name.c_str(),"-"))==0)
		{
			//add codes for minus; similar to +
 
		} } ;
					
term :	unary_expression 
     |  term MULOP unary_expression { fprintf(output,"term : term MULOP unary_expression\n\n");
		if((strcmp($2->name.c_str(),"*")==0))
			{
				if($1->data==integer&&$3->data==integer)//integer is multipllied by integer
				{
				printf("%d",$1->val.i);
				$$->val.i=$1->val.i*$3->val.i;$$->data=$1->data;
				printf("*%d=%d\n",$3->val.i,$$->val.i);
				}
				else if($1->data==floating&&$3->data==floating)//float is multipllied by float
				{
				printf("%f",$1->val.f);
				//add code
				printf("*%f=%f\n",$3->val.f,$$->val.f);
				}
				else if($1->data==integer&&$3->data==floating)//integer is multiplied by float
				{
				printf("%d",$1->val.i);
				//add code
				printf("*%f=%f\n",$3->val.f,$$->val.i);
				}
				else if($1->data==floating&&$3->data==integer)//float*float
				{
				printf("%f",$1->val.f);
				//add code
				printf("*%d=%f\n",$3->val.i,$$->val.f);
				}
				
					
			} 
		else if (strcmp($2->name.c_str(),"%")==0)
			{
				if ($1->data!=integer||$3->data!=integer){$$->data=invalid;yyerror("invalid operands for modulo");}
				else if ($1->data==integer&&$3->data==integer)//other cases are not acceptable
				{
				printf("%d",$1->val.i);
				//add code
				printf(" %d=%d\n",$3->val.i,$$->val.i);
				};
			}
		else {
				//consider cases like multiplication *
		      }	};

unary_expression : ADDOP unary_expression 
		{ fprintf(output,"unary_expression : ADDOP unary_expression \n\n"); 
		if((strcmp($1->name.c_str(),"+")==0))
			{
				if($2->data==integer)
				{
				//add code
				}
				else if ($2->data==floating)
				{
				//add code
				}
				
			} 
		else {
				//for - sign add code like +
				
		     }
		} 
		 | NOT unary_expression 
			{ fprintf(output,"unary_expression : NOT unary_expression \n\n");
				$$->data==$2->data;
				if($2->data==integer)//!5=0 !0=1
				{
					//add code
				}
				else if ($2->data==floating)
				{
					//add code
				}
			}
		 | factor { fprintf(output,"unary_expression : factor\n\n");
				$$=new symbolInfo($1->name,$1->type,$1->position);
				$$->data=$1->data;
				$$->arraysz=$1->arraysz;
				if($$->arraysz==0)
				{
					printf("normal factor\n ");
					if($1->data==integer)
					{
					$$->val.i=$1->val.i;
					}
					
				}
				else
				{
					if($1->data==integer)
					{
					$$->val.i=$1->val.arrayi[ix->val.i];
					}
					else if($1->data==floating)
					{
					//add code
					}
					else if($1->data==character)
					{
					//add code
					}
			} };
	
factor	: variable 
	| LPAREN expression RPAREN 
	| CONST_INT {//what will be added here??!!
	}
	| CONST_FLOAT	
	| CONST_CHAR	
	| factor INCOP { fprintf(output,"factor : factor INCOP\n\n\n"); 
	if($1->arraysz==0){
		if($1->data==integer)
			{
			$1->val.i++;
			$$=$1;
			printf("\nfartor++ %d\n",$$->val.i);
			}
	}

	else
		{
				if($1->data==integer)
					{
					$1->val.arrayi[ix->val.i]++;
					$$=$1;
					printf("\nfactor-- %d\n",$$->val.i);
					}
				
		}			
 			}
	| factor DECOP {//add codes like incop
	}
	;

%%

int main(int argc,char *argv[])
{

	extern FILE* yyin;	
	if(argc!=2)
		{
		printf("Please provide input file name and try again\n");
		return 0;
		}
	FILE *input=fopen(argv[1],"r");
	if(input==NULL){
		printf("cannot open the file\n");
		return 0;
		}
	output= fopen("1305115_output.txt","w");
	yyin= input;
    	yyparse();
	printf("\nline   %d\n",line);
	fprintf(output,"\nLine   : %d\n\n",line);
	fprintf(output,"\nError   : %d\n\n",error);
	fprintf(output,"\n\nSymbol Table\n\n");
	table->print(output);
	fclose(yyin);
	fclose(output);
    exit(0);
return 0;
}
