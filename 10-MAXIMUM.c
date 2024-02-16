
#include <stdio.h>

int main()
{
    int A,B,C;
    scanf("%d%d%d",&A,&B,&C);
    if(A>B&&A>C){
       printf("A=%d is maximum\n",A);
    }
    else if(B>C&&B>A){
       printf("B=%d is maximum\n",B);
    }

    else {
        printf("C=%d is maximum\n",C);
    }
    return 0;

}
