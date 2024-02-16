#include <stdio.h>

int main()
{
    int A,B,R,D,C;

    scanf("%d",&A);
    B=A/365;
    R=A%365;
    C=R/30;
    D=R%30;
    printf("%d ano(s)\n",B);
    printf("%d mes(es)\n",C);
    printf("%d dia(s)\n",D);

    return 0;
}
