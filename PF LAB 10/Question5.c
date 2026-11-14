#include <stdio.h>
int main() {


    FILE *fptr;

    int rollNO; int marks;

    char name[50];

    fptr = fopen("marks.txt","r");

    if (fptr == NULL) printf("Error: File Not Found!");

    else
    {
        while (fscanf(fptr, "%d %s %d", &rollNO, name, &marks) != EOF)
        {
            printf("%d %s %d\n", rollNO, name, marks);
        }
        fclose(fptr);
    }

    return 0;
}