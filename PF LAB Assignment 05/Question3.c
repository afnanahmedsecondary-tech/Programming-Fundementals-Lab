#include <stdio.h>

int main() {
    int category, sub_category;
    printf("Enter Category \n 1 for Animal \n 2 for Vehicle \n 3 for Food \n 4 for Human");
    scanf(" %d", &category);


    switch (category) {

        case 1 :
            printf("Enter Subcategory \n");
            printf("1 for Cat \n 2 for Dog \n 3 for Bird");
            scanf(" %d", &sub_category);

            switch (sub_category) {
                    case 1:
                        printf("Chose Animal Cat");
                        break;
                    
                    case 2:
                        printf("Chose Animal Dog");
                        break;
                    
                    case 3:
                        printf("Chose Animal Bird");
                        break;
            } 

            break;
        
        case 2:
            printf("Enter Subcategory \n");
            printf("1 for Car \n 2 For Bus \n 3 for Bike");
            scanf(" %d", &sub_category);

            switch (sub_category) {
                case 1:
                    printf("Chose Vehicle Car");
                    break;
                
                case 2:
                    printf("Chose Vehicle Bus");
                    break;

                case 3:
                    printf("Chose Vehicle Bike");
                    break;
            }
            break;

        case 3:
            printf("Enter Subcategory");
            printf("1 for Pizza \n 2 for Burger \n 3 for Biryani");
            scanf(" %d", &sub_category);

            switch(sub_category) {
                case 1:
                    printf("Chose Food Pizza");
                    break;

                case 2:
                    printf("Choose food Burger");
                    break;

                case 3:
                    printf("Choose Food Biryani");
                    break;
            }
            break;


        case 4:
            printf("Enter Subcategory");
            printf("1 For Male \n 2 for Female \n 3 for Child");    
            scanf(" %d", &sub_category);

            switch(sub_category) {
                case 1:
                    printf("Chose Human Man");
                    break;
                
                case 2:
                    printf("Choose Human Female");
                    break;
                
                case 3:
                    printf("Choose Human Child");
                    break;
            }   

            break;

        default:
            printf("Invalid Category");

    }
}