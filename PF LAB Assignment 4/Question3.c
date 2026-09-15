#include <stdio.h>

int main() {
    int total_rec, missing_rec, duplicate_rec;
    float missing_per, duplicate_per;   

    printf("Enter Total Records");
    scanf("%i", &total_rec);

    printf("Enter Missing Records");
    scanf("%i", &missing_rec);

    printf("Enter Duplicate Records");
    scanf("%i", &duplicate_rec);

missing_per = ((float)missing_rec / total_rec) * 100;
duplicate_per = ((float)duplicate_rec / total_rec) * 100;

    if (total_rec <=0) 
        printf("Invalid Dataset");

    else if (missing_per > 30)
        printf("Poor Quality Dataset");

    else if (missing_per <= 30 && duplicate_per > 20)
        printf("Requires Cleaning");
    
    else 
        printf("Dataset ready for training");
    
}