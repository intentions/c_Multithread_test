// function header for multithread stress test program
// written by Kurt J. Strosahl (strosahl@jlab.org)
// 2013jun21

#ifndef FUNCTIONS_H_INCLUDED
#define FUNCTIONS_H_INCLUDED

//counts the number of cpus
long cpu_count();

//spawns processes = nprocs -1
int mthread(long nprocs);

#endif
