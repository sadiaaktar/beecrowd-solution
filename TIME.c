#include <stdio.h>

int main()
{
    int N,B,R,D,C;

    scanf("%d",&N);
    B=N/3600;
    R=N%3600;
    C=R/60;
    D=R%60;
    printf("%d:%d:%d\n",B,C,D);


    return 0;
}
