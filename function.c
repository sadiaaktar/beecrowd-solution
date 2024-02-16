#include <stdio.h>

 int minimum (a,b)
 {
   int n;
   if (a<b){
     n=a;
    }
   else {
     n=b;
   }
   return n;
 }
 int main()
{
   int a,b,smaller;

   scanf("%d%d",&a,&b);
   smaller=minimum(a,b);
   printf("the smaller number is:%d\n",smaller);
    return 0;
}
