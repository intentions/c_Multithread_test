// function header for multithread stress test program
// written by kurt.j.strosahl
// 2013jun21

#ifndef FUNCTIONS_H_INCLUDED
#define FUNCTIONS_H_INCLUDED

// count the number of CPUs
int cpu_count();

// spawn cpu - 1 number of processes
int mthread(int nprocs);

#endif
