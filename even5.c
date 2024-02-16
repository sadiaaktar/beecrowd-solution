#include <stdio.h>

int main()
{
    int i,X,sum=0;
    for(i=1;i<=5;i++){
      scanf("%d",&X);
      if(X%2==1 || X<=0)
      sum=sum+1;

    }

    printf("%d valores pares\n",sum);
    return 0;
}


