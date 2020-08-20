%option noyywrap
%{
    #include <bits/stdc++.h>
    #include "16201134_SymbolTable.h"
    using namespace std;
    
    int line=1;
    int error=0;
    int cnt = 0;
    symbolTable s(31);
    FILE *logout;
    FILE *token;

%}
DIGIT [0-9]
DIGITS {DIGIT}+
LETTER [a-zA-Z]
LETTERS {LETTER}+
NEWLINE [\n]
WHITESPACE [ ]

foo [+-]?[0-9]+(\.?)[0-9]*[eE]+[0-9]*(\.?)[0-9]+(\.?)[eE]+(\.?)[eE0-9\.?]*

FLOAT [\-\+]?[0-9]*\.?[0-9]+([eE][\-\+]?[0-9]+)?
INT [\-\+]?[0-9]+ 
EXCEPTIONALS '\\[atfvn0rb(\\)"]'
CHAR ['].[']|{EXCEPTIONALS}
STRING ["][^\"]*["]
ALPHANUM [0-9a-zA-Z]+
ID [a-zA-Z_]+[_0-9a-zA-Z]*


INCOP (\+\+)|(\-\-)
ADDOP (\+)|(\-) 
MULOP (\*)|(\/)|%
RELOP <|(<=)|>|(>=)|(==)|(!=)
ASSIGNOP =
LOGICOP (&&)|(\|\|)|!

PAREN \(|\)
CURL \{|\}
BRACKET \[|\]

MUL_EROOR [0-9\.0-9]+
ILL_FORMED {FLOAT}{FLOAT}+
MULTI_CHAR [']..+[']
UNRCG_CHAR .
INVAL_ID {DIGITS}{ID}

SNGL_COMMENT [/][/][^\n]*
MLTY_COMMENT [/][*][^*]*[*]+([^*/][^*]*[*]+)*[/]  
%%
"\\\\\\\"///" {
    cout << "hello" << endl;
}
{WHITESPACE} {
    cnt++;
}
{NEWLINE} {
	line++;
    printf("\n");
}
int|float|string|char|for|while|if|else|cout|cin|endl|return|do|break|double|void|switch|case|default|continue|printf {
    for (int i = 0; i < strlen(yytext); ++i) {
        yytext[i] = toupper(yytext[i]);
    }
    printf("Line %d: %10s <%s>\n", line,"", yytext);
    fprintf(token,"<%s>\n", yytext);
    fprintf(logout,"Line no %d:Token <KEYWORD> lexeme %s is found\n",line,yytext);
}
{INT} {
    printf("Line %d: %10s <CONST_INT, %s>\n", line, "", yytext);
    fprintf(token,"<CONST_INT, %s>\n", yytext);
    fprintf(logout,"Line no %d:Token <CONST_INT> lexeme %s is found\n",line,yytext);
    s.insertItem(logout,yytext, "CONST_INT");
}
{FLOAT} {
    printf("Line %d: %10s <CONST_FLOAT, %s>\n", line, "", yytext);
    fprintf(token,"<CONST_FLOAT, %s>\n", yytext);
    fprintf(logout,"Line no %d:Token <CONST_FLOAT> lexeme %s is found\n",line,yytext);
    s.insertItem(logout,yytext, "CONST_FLOAT");
}
{STRING} {
    printf("Line %d: %10s <STRING, %s>\n", line, "", yytext);
    fprintf(token,"<STRING, %s>\n", yytext);
    fprintf(logout,"Line no %d:Token <STRING> lexeme %s is found\n",line,yytext);
}
{CHAR}|{EXCEPTIONALS} { 
    printf("Line %d: %10s <CONST_CHAR, %s>\n", line, "", yytext);
    fprintf(token,"<CONST_CHAR, %s>\n", yytext);
    fprintf(logout,"Line no %d:Token <CONST_CHAR> lexeme %s is found\n",line,yytext);
    s.insertItem(logout, yytext, "CONST_CHAR");
}
{INCOP} {
    printf("Line %d: %10s <INCOP, %s>\n", line, "", yytext);
    fprintf(token,"<INCOP, %s>\n", yytext);
    fprintf(logout,"Line no %d:Token <INCOP> lexeme %s is found\n",line,yytext);
    s.insertItem(logout, yytext, "INCOP");
}
{ADDOP} {
    printf("Line %d: %10s <ADDOP, %s>\n", line, "", yytext);
    fprintf(token,"<ADDOP, %s>\n", yytext);
    fprintf(logout,"Line no %d:Token <ADDOP> lexeme %s is found\n",line,yytext);
    s.insertItem(logout, yytext, "ADDOP");
}
{MULOP} {
    printf("Line %d: %10s <MULOP, %s>\n", line, "", yytext);
    fprintf(token,"<MULOP, %s>\n", yytext);
    fprintf(logout,"Line no %d:Token <MULOP> lexeme %s is found\n",line,yytext);
    s.insertItem(logout, yytext, "MULOP");
}
{RELOP} { 
    printf("Line %d: %10s <RELOP, %s>\n", line, "", yytext);
    fprintf(token,"<RELOP, %s>\n", yytext);
    fprintf(logout,"Line no %d:Token <RELOP> lexeme %s is found\n",line,yytext);
    s.insertItem(logout, yytext, "RELOP");
}
{ASSIGNOP} { 
    printf("Line %d: %10s <ASSIGNOP, %s>\n", line, "", yytext);
    fprintf(token,"<ASSIGNOP, %s>\n", yytext);
    fprintf(logout,"Line no %d:Token <ASSIGNOP> lexeme %s is found\n",line,yytext);
    s.insertItem(logout, yytext, "ASSIGNOP");
}
{LOGICOP} { 
    printf("Line %d: %10s <LOGICOP, %s>\n", line, "", yytext);
    fprintf(token,"<LOGICOP, %s>\n", yytext);
    fprintf(logout,"Line no %d:Token <LOGICOP> lexeme %s is found\n",line,yytext);
    s.insertItem(logout, yytext, "LOGICOP");
}
{PAREN} {
    printf("Line %d: %10s <PAREN, %s>\n", line, "", yytext);
    fprintf(token,"<PAREN, %s>\n", yytext);
    fprintf(logout,"Line no %d:Token <PAREN> lexeme %s is found\n",line,yytext);
    s.insertItem(logout, yytext, "PAREN");
}
{CURL} {
    printf("Line %d: %10s <CURL, %s>\n", line, "", yytext);
    fprintf(token,"<CURL, %s>\n", yytext);
    fprintf(logout,"Line no %d:Token <CURL> lexeme %s is found\n",line,yytext);
    s.insertItem(logout, yytext, "CURL");
}
{BRACKET} {
    printf("Line %d: %10s <BRACKET, %s>\n", line, "", yytext);
    fprintf(token,"<BRACKET, %s>\n", yytext);
    fprintf(logout,"Line no %d:Token <BRACKET> lexeme %s is found\n",line,yytext);
    s.insertItem(logout, yytext, "BRACKET");
}
"," {
    printf("Line %d: %10s <COMMA, %s>\n", line, "", yytext);
    fprintf(token,"<COMMA, %s>\n", yytext);
    fprintf(logout,"Line no %d:Token <COMMA> lexeme %s is found\n",line,yytext);
    s.insertItem(logout, yytext, "COMMA");
}
";" {
    printf("Line %d: %10s <SEMICOLON, %s>\n", line, "", yytext);
    fprintf(token,"<SEMICOLON, %s>\n", yytext);
    fprintf(logout,"Line no %d:Token <SEMICOLON> lexeme %s is found\n",line,yytext);
    s.insertItem(logout,yytext, "SEMICOLON");
}
{ID} {
    printf("Line %d: %10s <ID, %s>\n", line, "", yytext);
    fprintf(token,"<ID, %s>\n", yytext);
    fprintf(logout,"Line no %d:Token <%s> lexeme %s is found\n",line,yytext, yytext);
    s.insertItem(logout, yytext, "ID");
}
{MUL_EROOR}|{ILL_FORMED}|{MULTI_CHAR}|{INVAL_ID}|{UNRCG_CHAR} {
    printf("Line %d: %10s L E X I C A L ERROR %s\n", line, "", yytext);
    fprintf(logout,"Line no %d:Token <%s> error %s is found\n",line,yytext, yytext);
    error++;
}
{SNGL_COMMENT}|{MLTY_COMMENT} {
    printf("Line %d: %10s COMMENT %s\n", line, "", yytext);
    fprintf(logout, "line on %d:Token <%s> comment is found\n", line, yytext);
}
%%
int main(int argc,char *argv[]) {
    argc--; ++argv;
    if (argc > 0) {        
        FILE *input = fopen(argv[0], "r");
        yyin  = input;

	    if(input==NULL){
	    	printf("cannot open the file\n");
	    	return 0;
	    }
    } else {
        yyin = stdin;
    }
	logout= fopen("16201134_log.txt","w");
	token= fopen("16201134_token.txt","w");
	yylex();
    cout << "TOTAL ERROR: " << error << endl;
    cout << "TOTAL WS: " << cnt << endl;
	fprintf(logout,"\nline number is %d\n",line-1);
	fprintf(logout,"error number is %d\n",error);
	fclose(yyin);
	fclose(token);
	fclose(logout);
	return 0;	
}


