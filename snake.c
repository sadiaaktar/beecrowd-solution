#include <stdio.h>
int main()
 {
     int X,Y;
     float C;
     scanf("%d%d",&X,&Y);
     if(X==1)
     {
        C=Y*4.00;
        printf("Total: R$ %.2f\n",C);
     }
     if(X==2)
        {
        C=Y*4.50;
        printf("Total: R$ %.2f\n",C);
        }

      if(X==3)
        {
       C=Y*5.00;
        printf("Total: R$ %.2f\n",C);

        }
      if(X==4)
        {
        C=Y*2.00;
        printf("Total: R$ %.2f\n",C);

        }

      if(X==5)
        {
      C=Y*1.50;
        printf("Total: R$ %.2f\n",C);

        }

    return 0;
}




