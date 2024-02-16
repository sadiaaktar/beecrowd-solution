#include <stdio.h>

int main()
{
    char ch;
    scanf("%c", &ch);
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
       printf("vowel\n");
    }


    else if(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='u'){
       printf("vowel\n");
    }
    else {
        printf("consonant\n");
    }
    return 0;

}
