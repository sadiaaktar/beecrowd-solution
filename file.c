
#include <stdio.h>

int main()
{
    FILE * inpute_file;
    inpute_file = fopen("a.txt","r");
    char inpute[80];
    fgets(inpute,80,inpute_file);
    puts(inpute);

    return 0;
}
