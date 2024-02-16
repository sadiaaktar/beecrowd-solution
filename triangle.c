#include <stdio.h>

 int main()
 {
     float a,b,c,p,A;
     scanf("%f%f%f",&a,&b,&c);
     p=a+b+c;
     A=a+b;
     A=A/2;
     A=A*c;
     if(a+b>c&&a+c>b&&b+c>a){
        printf("Perimetro = %.1f\n",p);
     }
     else{
        printf("Area = %.1f\n",A);
     }

    return 0;
}
