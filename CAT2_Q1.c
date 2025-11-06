//simple c programming (hello world)single line comment
/*
Name:Samuel Muthama
Reg No:CT101/G/26523/25
Date:6/11/2025
Description:CAT2_2D_nestedif
*/

#include <stdio.h>

int main() {
    int scores1[2][2] = {
        {65, 92},
        {84, 72}
    };

    int scores2[2][2] = {
        {35, 70},
        {59, 67}
    };

    printf("scores\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", scores1[i][j]);
        }
        printf("\n");
    }
        printf("scores\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", scores2[i][j]);
        }
        printf("\n");
    }

    return 0;
}