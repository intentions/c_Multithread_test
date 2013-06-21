/* multi thread stress test program
 * generates threads equal to the number of cores -1
 * and then runs a computationally intensive task on each core
 */

#include <stdio.h>
#include "functions.h"

int main()
{
        //initialize number of cores
        long numb_cores = -1;

        numb_cores =  cpu_count();
        printf("%ld processors present\n",numb_cores);

//        if ( mthread(numb_cores) )

};
