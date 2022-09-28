#include <stdio.h>

int main(){
    
    // declare variables
    char operator;
    float num1;
    float num2;

    printf("****************************************\nWelcome to a basic calculator\nEnter an operator ('+' '-' '*' '/'): ");
    
    // take operator as input
    scanf(" %c", &operator);

    // check if operator is valid
    if (operator == 43 || operator == 45 || operator == 42 || operator == 47){

        // take input of first and second number 
        printf("Enter the 1st number: ");
        scanf("%f", &num1);
        printf("Enter 2nd number: ");
        scanf("%f",&num2);

        // if operator is equal to +
        if (operator == 43){
            printf("%.2f + %.2f = %.2f \n", num1, num2, num1+num2);
        }
        // if operator is equal to -
        else if (operator == 45){
            printf("%.2f - %.2f = %.2f \n", num1, num2, num1-num2);
        }
        // if operator is equal to *
        else if (operator == 42){
            printf("%.2f * %.2f = %.2f \n", num1, num2, num1*num2);
        }
        // if operator is equal to /
        else if (operator == 47){

            // check if denominator is valid
            if(num2 != 0){
                printf("%.2f / %.2f = %.2f \n", num1, num2, num1/num2);
            } else {
                printf("Denominator cannot be 0 \n");
        }
    } 
    else {
        printf("%c is not a valid operator \n", operator);
    }
    return 0;
    }
}

