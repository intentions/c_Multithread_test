// counts number of cpus

#include "functions.h"
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>


long cpu_count() {
        long nprocs = -1;
        long nprocs_max = -1;
        #ifdef _WIN32
        #ifndef _SC_NPROCESSORS_ONLN
        SYSTEM_INFO info;
        GetSystemInfo(&info);
        #define sysconf(a) info.dwNumberOfProcessors
        #define _SC_NPROCESSORS_ONLN
        #endif
        #endif
        #ifdef _SC_NPROCESSORS_ONLN
        nprocs = sysconf(_SC_NPROCESSORS_ONLN);
        if (nprocs < 1)
          {
            fprintf(stderr, "Could not determine number of CPUs online:\n%s\n", strerror (errno));
            exit (EXIT_FAILURE);
          }
        return (nprocs);
        #else
        fprintf(stderr, "Could not determine number of CPUs");
        exit (EXIT_FAILURE);
        #endif
}
