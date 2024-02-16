#include <stdio.h>

int main()
{   int marks;
    char grade;
    scanf("%d",&marks);
    if(marks>=80){
       printf("the grade is A+\n");
    }
    else if(marks>=75&&marks<80){
        printf("The grade is A\n",grade);
    }
    else if(marks>=70&&marks<75){
        printf("The grade is A-\n",grade);
    }
    else if(marks>=65&&marks<70){
        printf("The grade is B+\n",grade);
    }

    else if(marks>=60&&marks<65){

        printf("The grade is B\n",grade);
    }
    else if(marks>=55&&marks<60){
        printf("The grade is B-\n",grade);
    }
    else if(marks>=50&&marks<55){
        printf("The grade is C+\n",grade);
    }
    else if(marks>=45&&marks<50){
        printf("The grade is C\n",grade);
    }
    else if(marks>=40&&marks<45){
        printf("The grade is D\n",grade);
    }

     else{
        printf("The grade is F\n",grade);
     }


    return 0;

}
