//
// Created by Sk Naser Hussain on 02-10-2023.
//
#include <stdio.h>

int main() {
    int i, j;

    for (i = 1; i <= 5; i++) {
        for (j = 1; j <= i; j++) {
            printf("%d", i);
        }
        printf("\n");
    }

    return 0;
}

/***
* output:
 * 1
 * 22
 * 333
 * 4444
 * 55555
*/