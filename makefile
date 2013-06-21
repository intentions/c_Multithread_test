all: M_stress_test cpu_count mthread

M_stress_test: main.o cpu_count.o
	gcc -o M_stress_test -lpthread main.o cpu_count.o

main: main.o
	gcc -c main.c

cpu_count.o: cpu_count.c
	gcc -c cpu_count-f.c

mthread.o:
	gcc -c mthread-f.c

clean:
	rm -rf *.o M_stress_test
