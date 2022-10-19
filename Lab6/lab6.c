#include <stdio.h>
#include <stdbool.h>

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

/* This function reads a character and returns it
 
 Function name: readOperator
 Inputs: None
 Returns: char
 */
char readOperator (void) {

   char operator;

   printf("Enter a operator:");
   scanf("%c", &operator);
   return operator;

}

/* This function takes a character as input and returns 1 if the character is a valid operator; 0 otherwise

   Function name: isOperatorValid
   Inputs: char
   Returns: int
*/
int isOperatorValid (char operator) {
    
    if ((operator == 43) || (operator == 45) || (operator == 42) || (operator == 47)) return true;
    else return false;
        
}

/* This function reads a number as double and returns it
 
 Function name: readANumber
 Inputs: None
 Returns: double
 */
double readANumber (void) {

   double number;
   printf("Enter a Number:");
   scanf("%lf", &number);
   return number;
    
}

/* This function applies the given operator to 2 given numbers and returns the computed value.
 
 Function name: compute
 Inputs: double, double, char
 Returns: double
 */
double compute (double aNumber, double anotherNumber, char operator) {

   // hello
   if (operator == 43) return aNumber + anotherNumber;
   else if (operator == 45) return aNumber - anotherNumber;
   else if (operator == 42) return aNumber*anotherNumber;
   else{
      if (anotherNumber == 0) return -1;
      else return aNumber/anotherNumber;
   } 
    
   
}

