#include <stdio.h>

int main()
{

    int A,B,C=0,i,t,n;
     scanf("%d%d",&A,&B);
     if(A>B){t=B;B=A;A=t;}
      if(A%2==0){
        n=A+1;
        for(i=n;i<B;i=i+2){
        C=C+i;
        }
      printf("%d\n",C);
      }
      else{
        for(i=A;i<B;i=i+2)
        {
        C=C+i;
        printf("%d\n",C);
      }

      }
    return 0;
}

