#include <stdio.h>
#include "kadai1.h"
#include <stdlib.h>

void printtable(Kamoku* array)
{
    char table[8][7][10] = {0};
    Kamoku* p;

    

    for(int i = 0;i<7;i++)
    {
        sprintf(table[0][i],"%s",youbi[i]);
        sprintf(table[i+1][0],"%d",i+1);
    }

    for(p=array; p->day != -1; p++)
    {
        
        snprintf(table[p->period][p->day], sizeof(table[p->period][p->day]), "%.10s", p->name);
    }

    for(int i = 0;i<8;i++)
    {
        for(int j = 0;j<7;j++)
        {
            printf("%.12s\t",table[i][j] == NULL?"　　　　　　　　":table[i][j]);
        }
        printf("\n");
    }
}