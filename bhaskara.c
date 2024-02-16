#include <stdio.h>
#include <math.h>
int main()
{
    double A,B,C,D,R,S,M;


    scanf("%lf %lf %lf",&A,&B,&C);
    M=(B*B)-(4*A*C);
    D= sqrt(M);
    R=(-B+D)/(2*A);
    S=(-B-D)/(2*A);
    if(D>0&&A!=0&&B!=0){
    printf("R1 = %.5lf\n",R);
    printf("R2 = %.5lf\n",S);
    }
    else {
    printf("Impossivel calcular\n");
    }
    return 0;
}
