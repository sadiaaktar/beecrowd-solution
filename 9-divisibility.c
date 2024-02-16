#include <stdio.h>

int main()
{
    int A;
    scanf("%d", &A);
    if(A%5==0){
       printf("%d is divisible by 5\n",A);
    }


    else {
        printf("%d is not divisible by 5\n",A);
    }
    return 0;

}
