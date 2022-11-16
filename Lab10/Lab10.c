#include <stdio.h>
#include <string.h>
#define SIZE 100

int howManyZeros (char  [SIZE]);
void replaceZeros (char [SIZE], char [SIZE]);

int main()
{
     char aString[SIZE], newString [SIZE];

   printf("Enter a string (may have spaces): ");
   fgets (aString, SIZE, stdin);
  
   printf ("Length of inout string = %d \n", strlen (aString));
   
       howManyZeros (aString);
        
        printf("Number of zeros in %s = %d \n", aString, num);
   
   replaceZeros (aString, newString);
   
   printf ("Original String = %s, New String = %s\n", aString, newString);
   
	 return 0;
}

void replaceZeroes (char aString [SIZE], char bString [SIZE]) {
   
   
   for (int i = 0; i < SIZE; i++) {
      
      if (aString [i] == 0) {
         
         bString [i] = 'Z';
      }
      else {
         bString [i] = aString [i];
      }
   }
}

int howManyZeros (char aString [SIZE]) {
    
    int i  ;
    int aVar  ;
    
    while (i < strlen(aString)) {
        
        if (aString[i] == 0) {
            aVar = aVar + 1;
        }
        
        i++;
    }
    
    return aVar;
}
