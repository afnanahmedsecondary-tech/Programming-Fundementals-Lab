    #include <stdio.h>

    int main() {
        int obstacle, person, percentage;

        printf("Enter Obstacle");
        scanf("%i", &obstacle);

        printf("Enter person");
        scanf("%i", &person);

        printf("Enter Battery Percentage");
        scanf("%i", &percentage);

        if (person != 0 && person != 1 || obstacle != 1 && obstacle != 0 || percentage > 100 ||  percentage < 0) {
            printf("Invalid Data");
        }

        else if  (obstacle == 1) {
            if (person == 1) {
                printf("Emergency Stop");
            }

            else 
                printf("Change Direction");
        }

        else {
            if (percentage < 20) {
                printf("Return to Charging Station");
            }

            else 
                printf("Continue Moving");
        }
    }