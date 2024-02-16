
#include <stdio.h>
#include <string.h>
   struct record{
     char name[10];
     char phone[15];
     char email[25];

   };

int main()
    { struct record a;
    printf("enter name-");
    scanf("%s",&a.name);
    printf("enter phone-");
    scanf("%s",&a.phone);
    printf("enter email-");
    scanf("%s",&a.email);

    printf("%s:%s:%s\n",a.name,a.phone,a.email);

    return 0;
    }


