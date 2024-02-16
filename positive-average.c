#include <stdio.h>

int main()
{
    int i,sum=0;
    float A,ave,add=0;
    for(i=1;i<=6;i++){
     scanf("%f",&A);

    if(A>0){
     sum=sum+1;
     add=add+A;
    }
    }
    ave=add/sum;
    printf("%d valores positivos\n",sum);
    printf("%.1f\n",ave);
    return 0;
}
