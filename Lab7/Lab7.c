#include <stdio.h>

#define MAX = 5;

void readArray (int anArray []);
void reverseArray (int original [], int reversed []);
void printArray (int anArray []);

int main(){

   int anArray [5], newArray [5];
   
   printf ("Testing function anArray \n\n");
   readArray(anArray);

   printf ("Testing function reverseArray \n\n");
   reverseArray(anArray, newArray);

   return 0;
}

void readArray(int* anArray){
    /*Function takes in array as input*/
   printf("Enter 5 elements\n");
   scanf("%d%d%d%d%d",&anArray[0],&anArray[1],&anArray[2],&anArray[3],&anArray[4]);
   printf("\n");
   }

void reverseArray (int* original, int* reversed){
    /*Function takes reverses array*/
   int count = 4;

   printf("Original Array\n");
   printArray(original);

   for (int i = 0; i < 5; i++){
      reversed[i] = original[count];
      count --;
   }
   printf("Reversed Array\n");
   printArray(reversed);

}

void printArray (int* anArray) {
    /*Function prints array*/

   printf("%d %d %d %d %d\n",anArray[0],anArray[1],anArray[2],anArray[3],anArray[4]);

}


