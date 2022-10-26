#include <stdio.h>

// max can be changed to any number and this code will still reverse the array
#define MAX 5

void readArray (int anArray [MAX]);
void reverseArray (int original [MAX], int reversed [MAX]);
void printArray (int anArray [MAX]);

int main(){

   int anArray [MAX], newArray [MAX];
   
   printf ("Testing function anArray \n\n");
   readArray(anArray);

   printf ("Testing function reverseArray \n\n");
   reverseArray(anArray, newArray);

   return 0;
}

void readArray(int *anArray){
    /*Function takes in array as input*/
   printf("Enter %d elements\n", MAX);
   for(int i = 0; i < MAX; i++) scanf("%d", &anArray[i]);

   printf("\n");
   }

void reverseArray (int *original, int *reversed){
    /*Function takes reverses array*/
   int count = MAX;

   printf("Original Array\n");
   printArray(original);

   for (int i = 0; i < MAX; i++){
      count--;
      reversed[i] = original[count];
   
   }
   printf("Reversed Array\n");
   printArray(reversed);
}

void printArray (int* anArray) {
    /*Function prints array*/

    for(int i = 0; i < MAX; i++) printf("%d ", anArray[i]);
    printf("\n");
   
}


