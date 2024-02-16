#include <stdio.h>

int main()
{
    double marks[5]={90.2,80.5,85,95.5,84};
    int roll;
    for(roll=1;roll<=5;roll++)
    {

    printf("ROLL:%d MARK:%.2lf\n",roll,marks[roll-1]);


    }


    return 0;
}
