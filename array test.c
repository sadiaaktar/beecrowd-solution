#include <stdio.h>

int main()
    {
    int Table[10][10];
    int i,j;
    for (int i = 1; i <= 10; i++) {
        for (int j = 1; j <= 10; j++) {
            Table[i - 1][j - 1] = i * j;
        }
    }
    printf("Multiplication Table from 1 to 10:\n");
    for (int i = 1; i <= 10; i++) {
        for (int j = 1; j <= 10; j++) {
            printf("%4d ",Table[i - 1][j - 1]);
        }
        printf("\n");
    }
    return 0;
    }


