bison -d -y test.y
g++ -w -c -o y.o y.tab.c
flex 1305115.l
g++ -fpermissive -w -c -o l.o lex.yy.c
g++ -o a.out y.o l.o -lfl -ly
./a.out input.txt
