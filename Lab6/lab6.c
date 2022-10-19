#include <stdio.h>

/*function prototypes required for this lab*/

char readOperator (void);
int isOperatorValid (char operator);
double readANumber (void);
double compute (double aNumber, double anotherNumber, char operator);

int main(){

	char operator;
	double aNumber, anotherNumber;
	double result;

	printf("****************************************\n");	
	printf("Welcome to a basic calculator \n");
   
   operator = readOperator ();
   
   if (isOperatorValid (operator)) {
      
      aNumber = readANumber ();
      anotherNumber = readANumber ();
      
      result = compute (aNumber, anotherNumber, operator);

      if (result == -1) {
         printf ("When dividing, denominator cannot be 0 \n");
      }

      else {
         printf ("%.2lf %c %.2lf = %.2lf\n", aNumber, operator, anotherNumber, result);
      }
   }
   
   else {
      printf("%c is an invalid operator \n", operator);
   }
   
    return 0;
}

char readOperator (void) {
   /* This function reads a character and returns it
   */

   char operator;

   printf("Enter a operator ('+' '-' '*' '/' ): ");
   scanf("%c", &operator);
   return operator;
}

int isOperatorValid (char operator) {
   /* This function takes a character as input and 
   returns 1 if the character is a valid operator; 0 otherwise

   43 is the ascii of +
   45 is the ascii of -
   42 is the ascii of *
   47 is the ascii of /

   */

    // validates operator
    if ((operator == 43) || (operator == 45) || (operator == 42) || (operator == 47)) return 1;

    else return 0;
        
}


double readANumber (void) {
   /* This function reads a number as double 
   and returns it
   */

   double number;

   printf("Enter a number: ");
   scanf("%lf", &number);
   return number;
    
}


double compute (double aNumber, double anotherNumber, char operator) {
   /* This function applies the given operator to two given numbers 
   and returns the computed value.

   */

   // computes calculation based on the selected operator 

   if (operator == 43) return aNumber + anotherNumber;

   else if (operator == 45) return aNumber - anotherNumber;

   else if (operator == 42) return aNumber*anotherNumber;

   else{
      if (anotherNumber == 0) return -1;
      else return aNumber/anotherNumber;
   } 
    
   
}

