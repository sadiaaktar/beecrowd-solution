#include <stdio.h>
#include <string.h>
   struct record{
     char name[10];
     char phone[15];
     char email[25];

   };

int main()
    { struct record a[2];
    int i;
    for(i=0;i<2;i++){
    printf("enter name-");
    scanf("%s",a[i].name);
    printf("enter phone-");
    scanf("%s",a[i].phone);
    printf("enter email-");
    scanf("%s",a[i].email);
    }
    for(i=0;i<2;i++){
    printf("%s:%s:%s\n",a[i].name,a[i].phone,a[i].email);
    }

    return 0;
    }



