#include <stdio.h>

 int main()
 {
     int A,B,C,X;

     scanf("%d%d%d",&A,&B,&C);
     if(A<B&&A<C&&B<C)
     {
        printf("%d\n%d\n%d\n",A,B,C);
        printf("\n");
        printf("%d\n%d\n%d\n",A,B,C);
     }
     if(A<B&&A<C&&C<B)
        {
        printf("%d\n%d\n%d\n",A,C,B);
        printf("\n");
        printf("%d\n%d\n%d\n",A,B,C);
     }
      if(B<A&&B<C&&A<C)
        {
        printf("%d\n%d\n%d\n",B,A,C);
        printf("\n");
        printf("%d\n%d\n%d\n",A,B,C);
     }
      if(B<A&&B<C&&C<A)
        {
        printf("%d\n%d\n%d\n",B,C,A);
        printf("\n");
        printf("%d\n%d\n%d\n",A,B,C);
     }

      if(C<A&&C<B&&A<B)
        {
        printf("%d\n%d\n%d\n",C,A,B);
        printf("\n");
        printf("%d\n%d\n%d\n",A,B,C);
     }
     if(C<A&&C<B&&B<A)
        {
        printf("%d\n%d\n%d\n",C,B,A);
        printf("\n");
        printf("%d\n%d\n%d\n",A,B,C);
     }
    return 0;
}



