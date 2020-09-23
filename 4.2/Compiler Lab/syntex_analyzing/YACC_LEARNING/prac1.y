// definations
%{
    #include <bits/stdc++.h>
    using namespace std;
    int yylex(void);
    void yyerror(char *);
%}
%token INTEGER
%%
// rules
program
        : program expr '\n' {
            cout << $2 << endl;
        }
        |
        ;
expr     
        : INTEGER {$$ = $1;} 
        | expr '+' expr {$$ = $1 + $3;}
        | expr '-' expr {$$ = $1 - $3;}
        ;
%%
// subroutines
void yyerror(char *s) {
    fprintf(stderr, "%s\n", s);
}
int main() {
    yyparse();
    return 0;
}   

