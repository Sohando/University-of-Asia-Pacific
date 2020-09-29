yacc -d test_code_generation.y
g++ lex.yy.c y.tab.c
./a.out < in
