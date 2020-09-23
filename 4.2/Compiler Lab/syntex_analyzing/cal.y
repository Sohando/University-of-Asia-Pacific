%{
    /* #include<bits/stdc++.h> */
    #include<stdio.h>
    #include<stdlib.h>
    #include <ctype.h>   
    #define sz 52
    /*using namespace std;*/
    int symbols[sz];
    int symbolVal(char symbol);
    void updateSymbolVal(char symbol, int val);
    void yyerror(char *s);
    int yylex();        
    
%}
%union {int num; char id;}
%start line
%token print
%token exit_command
%token <num> number
%token <id> identifier
%type <num> line exp term
%type <id> assignment
%%
line            :   assignment ';'          {;}
                |   exit_command ';'        {exit(EXIT_SUCCESS);}
                |   print exp ';'           {printf("val = %d\n", $2);}
                |   line assignment ';'     {;}
                |   line print exp ';'      {printf("val = %d\n", $3);}
                |   line exit_command ';'   {exit(EXIT_SUCCESS);}                
                ;
assignment      :   identifier '=' exp      {updateSymbolVal($1, $3);}
                ;
exp             :   term                    {$$ = $1;}
                |   exp '+' term            {$$ = $1 + $3;}
                |   exp '-' term            {$$ = $1 - $3;}
                ;
term            :   number                  {$$ = $1;}
                |   identifier              {$$ = symbolVal($1);}
                ;
%%
int main() {
    for (int i = 0; i < sz; ++i) {
        symbols[i] = 0;
    }
    return yyparse();
}
void yyerror(char *s) {
    fprintf(stderr, "%s\n", s);
}
int computeSymbolindex(char symbol) {
    int idx = -1; 
    if (islower(symbol)) {
        idx = symbol - 'a' + 26;
    } else {
        idx = symbol - 'A';
    }
    return idx;
}
int symbolVal(char symbol) {
    int bucket = computeSymbolindex(symbol);
    return symbols[bucket];
}
void updateSymbolVal(char symbol, int val) {
    int bucket = computeSymbolindex(symbol);
    symbols[bucket] = val;
}
