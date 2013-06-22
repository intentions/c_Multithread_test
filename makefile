all: M_stress_test 

M_stress_test: main.o cpu_count-f.o
	gcc -o M_stress_test -lpthread main.o cpu_count-f.o

main: main.o
	gcc -c main.c

cpu_count-f.o: cpu_count-f.c
	gcc -c cpu_count-f.c

mthread.o:
	gcc -c mthread-f.c

clean:
	rm -rf *.o M_stress_test
