#include <stdio.h>

int main()
{
    FILE * inpute_file,*output_file;
    inpute_file = fopen("c.txt","r");
    output_file = fopen("d.txt","w");
    int a,b,sum;

    fscanf(inpute_file,"%d%d",&a,&b);
    sum=a+b;
    fprintf(output_file,"THE SUM IS %d\n",sum);

    return 0;
}

