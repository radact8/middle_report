#include <stdio.h>
#include "kadai1.h"

int main(void) {
    Kamoku* p;
    Kamoku* q;
    int result;
    for (p = list; (q=p+1)->day != -1; p++) {
        printkamoku(p);
        printf("は");
        printkamoku(q);
        result = compkamoku(p, q);
        if (result < 0) {
            printf("の前");
        }
        else if (result == 0) {
            printf("と同じ");
        }
        else {
            printf("の後ろ");
        }
        printf("\n");
    }
    return 0;
}

