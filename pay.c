#include <stdio.h>

int main()
{
    int A1,B1,A2,B2;
    float C1,C2,X;

    scanf("%d %d %f",&A1,&B1,&C1);
    scanf("%d %d %f",&A2,&B2,&C2);
    X=(B1*C1)+(B2*C2);
    printf("VALOR A PAGAR: R$ %.2f\n",X);

    return 0;
}
