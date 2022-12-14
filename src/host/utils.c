//
// Created by 23503 on 2022/11/21.
//

/*===============================================================*/
/*                                                               */
/*                          utils.c                              */
/*                                                               */
/*                       Utility functions                       */
/*                                                               */
/*===============================================================*/

//#include <string>
#include <stdio.h>
#include <stdlib.h>
#include <getopt.h>

#include "utils.h"

void print_usage(char* filename)
{
    printf("usage: %s <options>\n", filename);
    printf("  -f [kernel file]\n");
}


void parse_sdaccel_command_line_args(
        int argc,
        char** argv,
//        std::string& kernelFile
        char kernelFile[])
{

    int c = 0;

    while ((c = getopt(argc, argv, "f:")) != -1)
    {
        switch (c)
        {
            case 'f':
                kernelFile = optarg;
                break;
            default:
                {
                print_usage(argv[0]);
                exit(-1);
                }
        } // matching on arguments
    } // while args present
}


