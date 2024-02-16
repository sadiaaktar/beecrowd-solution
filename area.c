#include <stdio.h>

int main()
{
    double A,B,C,P,X,Y,Z,W,Q;

    scanf("%lf %lf %lf",&A,&B,&C);
    P=3.14159;
    X=(1.0/2)*A*C;
    Y=(P*C*C);
    Z=(1.0/2)*(A+B)*C;
    W=B*B;
    Q=A*B;

    printf("TRIANGULO: %.3lf\n",X);
    printf("CIRCULO: %.3lf\n",Y);
    printf("TRAPEZIO: %.3lf\n",Z);
    printf("QUADRADO: %.3lf\n",W);
    printf("RETANGULO: %.3lf\n",Q);

    return 0;
}
