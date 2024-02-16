#include <stdio.h>

int main()
{
    double A,B;
    scanf("%lf%lf",&A,&B);
    if(A+B==0){
       printf("Origem\n");
    }
    else if(A==0){
       printf("Eixo Y\n");
    }
    else if(B==0){
       printf("Eixo X\n");
    }
    else if(A>0&&B>0){
       printf("Q1\n");
    }
    else if(A<0&&B>0){
       printf("Q2\n");
    }
    else if(A<0&&B<0){
       printf("Q3\n");
    }
    else if(A>0&&B<0){
       printf("Q4\n");
    }




    return 0;
}

