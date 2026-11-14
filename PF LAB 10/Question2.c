#include <stdio.h>
#include <string.h>
int main() 
{
    char name[10][50];  char temp[50];

    printf("input students name:\n");

    for(int i=0;i<10;i++)

    fgets(name[i],48,stdin);


    for(int i=0;i<10;i++) {
        
        for(int j=0;j<9;j++) {
        
        if(strcmp(name[j],name[j+1])>0) {

            strcpy(temp, name[j]);
            strcpy(name[j], name[j+1]);
            strcpy(name[j+1], temp);

        }
    }

    }

    printf("In alphabatical order:\n");

    for(int i=0;i<10;i++) printf("%s",name[i]);
    
return 0;
}