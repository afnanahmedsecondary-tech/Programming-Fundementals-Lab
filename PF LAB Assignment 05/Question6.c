#include <stdio.h>

int main() {
    int ML_Type, sub_ml; 
    printf("Enter ML Type \n");
    printf("1 for Classification \n 2 for Regression \n 3 for Clustering \n 4 for Computer Vision \n");
    scanf(" %d", &ML_Type);

    switch (ML_Type) {
        case 1:
        printf("Enter Sub ML Type for Classification \n");
        printf("1 for Logistic Regression \n 2 for Desicion Tree \n 3 for KNN \n");
        scanf(" %d", &sub_ml);
        

        switch (sub_ml) {
            case 1:
                printf("Logisitic Regression");
                break;

            case 2:
                printf("Desicion Tree");
                break;
            
            case 3:
                printf("KNN");
                break;
        }

        break;

        case 2:
            printf("Enter Sub ML Type for Regression \n");
            printf("1 for Linear Regression \n 2 for Polynomial Regression \n 3 for SVR");
            scanf(" %d", &sub_ml);

            switch (sub_ml) {

                case 1:
                    printf("Linear Regression");
                    break;

                case 2:
                    printf("Polynomial Regression");
                    break;

                case 3:
                    printf("SVR");
                    break;
            }

            break;

        case 3:
            printf("Enter Sub ML Type for Clustering \n");
            printf("1 for KMEANS \n 2 for Hierarchical Clustering  \n 3 for DBSCAN");
            scanf(" %d", &sub_ml);

            switch (sub_ml) {
                case 1:
                    printf("KMEANS");
                    break;

                case 2:
                    printf("Hierarchical Clustering");
                    break;

                case 3:
                    printf("DBSCAN");
                    break;
            }

            break;

        case 4:
            printf("Enter Sub ML Type for Computer Vision \n");
            printf("1 for CNN \n 2 for YOLO  \n 3 for R-CNN");
            scanf(" %d", &sub_ml);
            
            switch (sub_ml) {

            case 1:
                printf("CNN");
                break;

            case 2:
                printf("YOLO");
                break;

            case 3:
                printf("R -CNN");
                break;
            }

        break;

        default:
            printf("Invalid");
    }
}