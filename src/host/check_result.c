//
// Created by 23503 on 2022/11/14.
//

/*===============================================================*/
/*                                                               */
/*                       check_result.c                          */
/*                                                               */
/*      Software evaluation of training and test error rate      */
/*                                                               */
/*===============================================================*/

#include <stdio.h>
#include <stdlib.h>
#include "typedefs.h"

void check_results(bit8 output[MAX_X][MAX_Y])
{
    FILE *ofile=NULL;
    ofile=fopen("outputs.txt","w");

    if(ofile!=NULL)
    {
        fprintf(ofile,"Image After Rendering: \n");
        for (int j = MAX_X - 1; j >= 0; j -- )
        {
            for (int i = 0; i < MAX_Y; i ++ )
            {
                int pix;
                pix = output[i][j];
                if (pix)
                fprintf(ofile,"1");
                else
                fprintf(ofile,"0");
            }
//            ofile << std::endl;  //需要刷新缓冲区？
            fprintf(ofile,"\n");
        }
    }
    else
    {
        printf("Failed to create output file!\n");
    }
}
