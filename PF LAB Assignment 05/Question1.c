#include <stdio.h>

int main() {
    int programming, maths, ai, attendance;
    float avg;

    printf("Enter Programming Marks \n"); scanf(" %d", &programming);
    printf("Enter Mathamatics Marks \n"); scanf(" %d", &maths);
    printf("Enter AI Marks \n"); scanf(" %d", &ai);
    printf("Enter Attendance  \n"); scanf(" %d", &attendance);

    if (programming >= 50 && ai >= 50 && attendance >= 75 && maths >= 50) {


                    avg = (ai + maths + programming) / 3.0;

                    if ( avg >= 80) {
                        printf("Excellent");
                    }
                    else if ( avg >= 70) {
                        printf("Very Good");
                    }
                    else if ( avg >= 60) {
                        printf("Good");
                    }

                    else if ( avg >= 50) {
                        printf("Satisfactory");
                    }
                    else  
                        printf("Poor");
    }
    else printf("Student Not Eligible");
}
                
    