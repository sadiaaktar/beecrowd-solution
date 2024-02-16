#include <stdio.h>

int main()
{
    int X,a,b,c,d,e,f;
    int A,B,C,D,E;
    scanf("%d",&X);
    a=X+1;
    b=X+3;
    c=X+5;
    d=X+7;
    e=X+9;
    f=X+11;
    A=X+2;
    B=X+4;
    C=X+6;
    D=X+8;
    E=X+10;
    if(X%2==0){
        printf("%d\n%d\n%d\n%d\n%d\n%d\n",a,b,c,d,e,f);
    }
    else if(X%2==1){
        printf("%d\n%d\n%d\n%d\n%d\n%d\n",X,A,B,C,D,E);
    }
    return 0;
}
