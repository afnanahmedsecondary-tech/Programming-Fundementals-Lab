#include <stdio.h>

int main() {
    int user_role, status, security_level;

    printf("Enter User Role");
    scanf("%i", &user_role);

    printf("Enter Status");
    scanf("%i", &status);

    printf("Enter Security Level");
    scanf("%i", &security_level);



    if (status == 0) {
        printf("Access Denied");
    }
    else if (user_role == 1 && security_level >= 3) {   
        printf("Admin Given Access");
    }

    else if (user_role == 2 && security_level >= 2) {
        printf("Researcher Given Access");
    }

    else if (user_role == 3 && security_level >=1 ) {
        printf("Student Given Access");
    }

    else 
        printf("Access Denied");
}