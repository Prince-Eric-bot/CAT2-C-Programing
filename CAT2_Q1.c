/*

Name: Erick Mburu

Reg no: PA106/G/28729/25

Desc : question 1

*/

#include <stdio.h>

int main() {
    int scores[2][2] = {
        {65, 84},
        {92, 72}
    };

    int i, j;
    printf("Elements of the 2D array are:\n");

    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            printf("%d ", scores[i][j]);
        }
        printf("\n");
    }

    return 0;
}
