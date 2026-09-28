#include <stdio.h>

int main() {

    int confidence; printf("Enter Confidence"); scanf(" %d", &confidence);
    char user_type; printf("Enter User Type A / NA"); scanf(" %c", &user_type);

    if (confidence >= 80) {
        user_type == 'A' ? printf("Access Granted") : printf("Access Denied");
    }
    else if (confidence >= 50) {
        printf("Manual Verification");
    }

    else if ( confidence < 50 || user_type != 'A') {
        printf("Access Denied");
    }

}