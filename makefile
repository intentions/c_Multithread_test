all: test

test: test.o
	gcc -o test -lpthread test.o

test.o: test.c
	gcc -c test.c

clean:
	rm -rf *.0 test
