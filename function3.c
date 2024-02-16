#include <stdio.h>

 int minimum (m,k)
 {
   int n;
   if (m<k){
     n=m;
    }
   else {
     n=k;
   }
   return n;
 }
 int main()
{
   int a,b,c,smaller,smallest;

   scanf("%d%d%d",&a,&b,&c);
   smaller=minimum(a,b);
   smallest=minimum(smaller,c);
   printf("the smaller number is:%d\n",smallest);
    return 0;
}
