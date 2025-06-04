#include "kadai1.h"
#include <stdio.h>
int compkamoku(Kamoku *p, Kamoku *q)
{
    int result;
    result = p->day-q->day;
    if(result == 0)
    {
        result = p->period-q->period;
    }
    return result;
}