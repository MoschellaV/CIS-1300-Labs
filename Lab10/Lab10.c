#include <stdio.h>
#include <string.h>

#define SIZE 100

int howManyZeros(char  [SIZE]);
void replaceZeros(char [SIZE], char [SIZE]);
void stars();

int main(){

    // variable declaration
    char aString[SIZE];
    char newString [SIZE];
    char currentChar = '\0';
    int i = 0;

    /* TAKE USER INPUT */
    printf("Enter a string (may have spaces): ");

    // loop iterates until a new line character is entered (i.e. user presses enter)
    for (i = 0; currentChar != '\n'; i++) {
        scanf("%c", &currentChar);
        if (currentChar != '\n') aString[i] = currentChar;
    }
    aString[i-1] = '\0';

    /* CALLING FUNCTIONS */
    stars();
    printf("Number of zeros in %s = %d \n", aString, howManyZeros(aString));

    replaceZeros(aString, newString);
   
    printf("Original String = %s \nNew String = %s \n", aString, newString);
    stars();
   
	return 0;
}

void stars(){
    /*
    function is a loop that prints 40 starts on one line 
    */

    for (int i = 0; i < 40; i++) printf("*");
    printf("\n");
}


void replaceZeros(char *aString, char *bString) {
    /*
    function takes in a string as a parameter and iterates through it,
    creating a new string with all the 0's being replaced by Z's
    */
   
    int i;
    for (i = 0; i < strlen(aString); i++) {
      
      if (aString[i] == '0') bString[i] = 'Z';
    
      else  bString[i] = aString[i];
    
    }
    bString[i] = '\0';

 }

int howManyZeros (char *aString) {
    /*
    function takes in a string, iteraties through it counting
    prints the number of times '0' appears, this value is returned
    */
    
    int i = 0;
    int aVar = 0;
    
    while (i < strlen(aString)) {
      if (aString[i] == '0') aVar++;
      i++;
    }
    
    return aVar;
}
