#include <stdio.h>
#include <string.h>
int main(void)
{
    char mail[100]; char domain[100];

    char *ptr;

    printf("input your email address: \n "); scanf("%99[^\n]", mail);


    ptr = strchr(mail, '@');  

    if (ptr == NULL)  printf("Invalid email format\n");


    else {
        printf("@ exists ptr index: %d\n", (int)(ptr-mail));
        strcpy(domain, ptr + 1);  
        printf("Domain: %s", domain);
    }

    return 0;
}