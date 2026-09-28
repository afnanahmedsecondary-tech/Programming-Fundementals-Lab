#include <stdio.h>
#include <math.h>

int main() {

    int accuracy; printf("Enter Accuracy \n"); scanf(" %d", &accuracy);

    int confidence_score; printf("Enter Confidence Score \n"); scanf(" %d", &confidence_score);

    int dataset_size; printf("Enter Data Set Size \n"); scanf(" %d", &dataset_size);

    int permission; printf("Enter a Permission Value \n"); scanf(" %d", &permission);
    
    float model_score = (accuracy + confidence_score) / 2.0;
    
    
    int user_role; printf("Enter User Role \n");
    printf("1 for Admin \n 2 for Developer \n 3 for Reasearcher \n");
    scanf(" %d", &user_role);


    int model_status; printf("Enter Model Status \n");
    printf("1 for Ready \n 2 for Testing \n 3 for Training \n");
    scanf(" %d", &model_status);


    switch (user_role) {

        case 1: 
            printf("User Role : Admin \n");
            break;

        case 2:
            printf("User Role : Developer \n");
            break;

        case 3:
            printf("User Role : Researcher \n");
            break;

        default:
            printf("Invalid Choice \n");
    }


    switch (model_status) {
        case 1:
            printf("Model Status : Ready \n");
            break;

        case 2:
            printf("Model Status: Testing \n");
            break;
        
        case 3:
            printf(" Model Status : Training \n");
            break;
    }

    if (permission & 1) {
        printf("User Permission: View \n");
    }

    if (permission & 2) {
        printf("User Permission : Train \n");
    }

    if (permission & 4) {
        printf("User Permisison : Test \n");
    }

    if (permission & 8) {
        printf("User Permission : Deploy \n");
    }

    printf(" %.2f", model_score);

   if ((accuracy >= 80) && (confidence_score >=75) && (dataset_size >= 1000) && (model_status == 1) && (permission & 8)) {
        printf("Model Ready for Deployment \n");
    }






}