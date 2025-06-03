#include <stdlib.h>
#include <stdio.h>
#include "kadai1.h"
Kamoku* find(int day, int period, Kamoku* array)
{
    int i;
    int* num;
    for(i = 0;day!= -1;i++)
    {
        num = &i;
        if(day == array[*(num)].day && period == array[*(num)].period)
        {
            return &array[*(num)];
        }
        if(array[*num].day == -1)
        {
            return NULL;
        }
    }
    return 0;
}