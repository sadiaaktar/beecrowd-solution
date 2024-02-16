#include <stdio.h>
#include <math.h>
int main()
{
    double X1,X2,Y1,Y2,R,D;


    scanf("%lf %lf %lf %lf",&X1,&Y1,&X2,&Y2);
    R=(X2-X1)*(X2-X1)+(Y2-Y1)*(Y2-Y1);
    D= sqrt(R);
    printf("%.4lf\n",D);

    return 0;
}
