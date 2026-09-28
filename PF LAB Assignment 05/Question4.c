#include <stdio.h>

int main() {
    int category, sub_category;
    printf("Enter A Category \n");
    printf("1 for Greeting \n 2 for Study \n 3 for Weather \n 4 for Help \n");
    scanf(" %d", &category);

    switch (category) {

        case 1:
            printf("Enter Subcategory \n");
            printf("1 for Hello \n 2 for How are You \n 3 for Good Bye \n");
            scanf(" %d", &sub_category);

            switch (sub_category) {
            case 1:
                printf("Hello");
                break;

            case 2:
                printf("How Are you");
                break;

            case 3:
                printf("Good Bye");
                break;

            }
            break;

        case 2:
            printf("Enter Subcategory \n");
            printf("1 for Programming \n 2 for Maths \n 3 for Ai \n");
            scanf(" %d", &sub_category);

            switch (sub_category) {
                case 1:
                    printf("Programming");
                    break;

                case 2:
                    printf("Maths");
                    break;
                
                case 3:
                    printf("Ai");
                    break;
            }
            break;

        
        case 3:
            printf("Enter Subcategory \n");
            printf("1 for Today \n 2 for Tommorrow \n 3 for forecast \n");
            scanf(" %d", &sub_category);

            switch (sub_category) {
                case 1:
                    printf("Today");
                    break;

                case 2:
                    printf("Tomorrow");
                    break;

                case 3:
                    printf("Forecast");
                    break;
            }
            break;

        case 4:
            printf("Enter Subcategory \n");
            printf("1 for About Chatbot \n 2 for Commands \n 3 for Exit \n");
            scanf(" %d", &sub_category);

            switch (sub_category) {
                case 1:
                    printf("About Chatbot");
                    break;

                case 2:
                    printf("Commands");
                    break;

                case 3:
                    printf("Exit");
                    break;
            }

           break;

        default:
            printf("Invalid Category");
    }
}