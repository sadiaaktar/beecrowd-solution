#include <stdio.h>

 int sq (a)
 {
   int y;

    y=a*a;

   return y;
 }

 int main()

{
   int a,s;

   scanf("%d",&a);
   s=sq(a);
   printf("the square of %d is:%d\n",a,s);
    return 0;
}
