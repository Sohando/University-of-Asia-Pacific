yacc -d test.y
flex 1305115.l
#g++ -Wall lex.yy.c y.tab.c -fpermissive
g++ lex.yy.c y.tab.c -fpermissive
./a.out input.txt
