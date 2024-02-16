#include <stdio.h>

int main()
{
    int NUM,H;
    float AMOUNT,SAL;

    scanf("%d %d %f",&NUM,&H,&AMOUNT);
    SAL=H*AMOUNT;
    printf("NUMBER = %d\n",NUM);
    printf("SALARY = U$ %.2f\n",SAL);


    return 0;
}
