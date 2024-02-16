#include <stdio.h>

int main()
{
    char ch;
    scanf("%c",&ch);
    if(ch>='A'&&ch<='Z'){
       printf("%c is an Alphabet\n",ch);
    }
    else if(ch>='a'&&ch<='z'){
       printf("%c is an Alphabet\n",ch);
    }

    else if(ch>='1' && ch<='9'){
        printf("%c is a Digit\n",ch);
    }
    else{
        printf("%c is a special character\n",ch);
    }
    return 0;

}

