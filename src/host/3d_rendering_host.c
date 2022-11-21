//
// Created by 23503 on 2022/11/14.
//


/*===============================================================*/
/*                                                               */
/*                       3d_rendering.c                          */
/*                                                               */
/*      Main host function for the 3D Rendering application.     */
/*                                                               */
/*===============================================================*/

// standard C/C++ headers
#include <stdio.h>
#include <stdlib.h>
#include <getopt.h>
//#include <string>
#include <time.h>
#include <sys/time.h>
#ifdef SW
# include "../sw/rendering_sw.h"
#endif

// other headers
#include "utils.h"
#include "typedefs.h"
#include "check_result.h"

// data
#include "input_data.h"

int main(int argc, char ** argv)
{
    printf("3D Rendering Application\n");

    // for this benchmark, data is included in array triangle_3ds

    // timers
    struct timeval start, end;

#ifdef SW
    // output
    bit8 output[MAX_X][MAX_Y];
    // run and time sw function
    gettimeofday(&start, 0);
    rendering_sw(triangle_3ds, output);
    gettimeofday(&end, 0);
#endif

    // check results
    printf("Checking results:\n");
    check_results(output);

    // print time
    long long elapsed = (end.tv_sec - start.tv_sec) * 1000000LL + end.tv_usec - start.tv_usec;
    printf("elapsed time: %lld us\n", elapsed);
    return EXIT_SUCCESS;

}