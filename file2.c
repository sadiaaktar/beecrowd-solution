#include <stdio.h>

int main()
{
    FILE * outpute_file;
    outpute_file = fopen("b.txt","w");
    char inpute[80];
    gets(inpute);
    fputs(inpute,outpute_file);

    return 0;
}

