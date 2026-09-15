#include <stdio.h>

int main() {
    int score;
    printf("Enter score \n");
    scanf("%i", &score);

    if (score > 100 || score < 0)
        printf("Invalid Score");
    
    else if (score > 79) 
        printf("High Confidence");
    
    else if (score > 49) 
        printf("Moderate Confidence");
    
    else
        printf("Low Confidence");


}