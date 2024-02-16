#include <stdio.h>

int main()
{
    double marks[2] [5];
    int c,r;
    for(c=0;c<2;c++)
    {
       for(r=0;r<5;r++)
       {
         scanf("%lf",&marks[c][r]);

       }


    }

    for(c=0;c<2;c++)
    {
       for(r=0;r<5;r++)
       {
         printf("CLASS:%d,ROLL:%d,MARK:%lf\n",c+6,r+1,marks[c][r]);

       }


    }



    return 0;
}
