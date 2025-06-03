#include <stdio.h>
#include "kadai1.h"

void printkamoku(Kamoku *p)
{
    printf("%s %d %s",youbi[p->day],p->period,p->name);
}