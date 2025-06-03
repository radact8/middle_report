#include "kadai1.h"
#include <stdio.h>
int compkamoku(Kamoku *p, Kamoku *q)
{
    int result;
    if(p->day > q->day)
    {
        result = 1;
    }
    else if (p->day == q->day)
    {
        if(p->period > q->period)
        {
            result = 1;
        }
        else if(p->period == q->period)
        {
            result = 0;
        }
        else
        {
            result = -1;
        }
    }
    else
    {
        result = -1;
    }
    return result;
}