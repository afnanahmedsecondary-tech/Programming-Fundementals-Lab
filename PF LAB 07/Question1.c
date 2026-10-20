#include <stdio.h>

int main() {
    char student_names[3][50];
    int marks[3][3];

    printf("Enter 3 Names \n");
    for (int i = 0; i < 3; i++) scanf(" %49[^\n]", student_names[i]);

    for (int i = 0; i < 3; i++) {
        printf("Enter Three marks for student  %d \n", i+1);
        for (int j = 0; j < 3; j++) scanf("%d", &marks[i][j]);
    }

    for (int i = 0; i < 3; i++) {
        printf("\n Student Name: %s \n", student_names[i]);
        float avg = 0.0; int total = 0;
        for (int j = 0; j < 3; j++) total += marks[i][j];
        avg = total / 3.0;

        printf("Student Avg Marks %.2f \n", avg);
        printf(" \n");
    }

}
