main: main.o lexer.o
	gcc -o main main.o lexer.o
lexer.o: lexer.c lexer.h
	gcc -c lexer.c lexer.h
main.o: main.c lexer.h
	gcc -c main.c
clean:
	rm -rf *.o
	rm -rf *.h.gch