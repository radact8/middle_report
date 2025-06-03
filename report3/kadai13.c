#include <stdio.h>
#include "kadai1.h"
typedef struct jigen {
    int day;
    int period;
}Jigen;


int main(void) {

    Jigen item[] = { {4,6},{2,7},{3,6}, { 6,3 },{-1} };
    Kamoku* p;
    int i;

    for (i = 0; item[i].day!= -1; i++) {
        p = find(item[i].day, item[i].period, list);
        if (p == NULL) {
            printf("無し");
        }
        else {
            printkamoku(p);
        }
        printf("\n");
    }
    return 0;
}

