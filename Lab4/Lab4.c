#include <stdio.h>
#include <stdbool.h>

#define PI 3.142857

int circumferenceAndArea(float radius) {
    /*
    takes the radius as an argument
    calculates both area and circumference
    prints refults
    */

    float circumference = 2 * PI * radius;
    float area = PI * radius * radius;
    
    printf("Area: %.2f\nCircumferance %.2f\n\n", area, circumference);
    return 0;
}

int main(){

    /* DECLARING VARIABLE */
    int userChoice;
    float radius;
    bool run = true;
    char userContinue;

    printf("\nWhat loop do you want to use - enter 1, 2, or 3: ");
    scanf("%d", &userChoice);

    /* LOOP 1 */
    if (userChoice == 1){
        printf("\nThis loop runs 3 times\n\n");
        // loop iteates 3 times
        for(int i = 0; i < 3; i++){
            printf("Enter radius: ");
            scanf("%f", &radius);
            circumferenceAndArea(radius);
        }
    }
    
    /* LOOP 2 */
    if (userChoice == 2){
        printf("\nThis loop runs until the radius entered is -1\n\n");
        // while loop runs until user enters -1 as the radius
        while (run) 
        {
            printf("Enter radius: ");
            scanf("%f", &radius);
            if (radius == -1) run = false; 
            else circumferenceAndArea(radius);
        }
        
    }

    /* LOOP 3 */
    if (userChoice == 3){
        printf("\nThis Loop runs until the user does not wish to continue\n\n");
        // do while loop runs until user does not enter 'y' to continue
        do{   
            printf("Enter radius: ");
            scanf("%f", &radius);
            circumferenceAndArea(radius);
            printf("Do you wish to continue (enter y or n): ");
            scanf(" %c", &userContinue);

            if (userContinue != 121) run = false;

        }while (run);
    }   

    return 0;
}