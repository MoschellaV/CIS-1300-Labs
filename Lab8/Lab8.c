#include <stdio.h>
# include <string.h>

#define N 4

void print2D (int arr[N][N]) ;
int isLeftdEqualToRightd (int arr [N][N], int *, int *);

/////////////////////////////////
int main () {

   int arr [N][N];
   int i, j;
   int result, sumLeftD, sumRightD;
   
   for (i = 0; i < N; i++) {
      for (j = 0; j < N; j++) {
          scanf ("%d", &arr [i][j]);
      }
    }
    
    result = isLeftdEqualToRightd (arr, &sumLeftD, &sumRightD);
    
    print2D(arr);
    
    printf ("Sum of left diagonal = %d\n", sumLeftD);
    printf ("Sum of right diagonal = %d\n", sumRightD);
    
    if (result) {
       printf ("Sum of left diagonal is equal to sum of right diagonal\n");
    }
    else {
        printf ("Sum of left diagonal is not equal to sum of right diagonal\n");
    }
    
   return 0;
}
/////////////////////////////////

void print2D(int arr[N][N]){

    int i,j;
    for ( i = 0; i < N; i++) { 
        printf("Row %d: ",i+1);
        for ( j = 0; j < N; j++) { 
            printf("%d ",arr[i][j]);
        } 
        printf("\n");
    } 
}

int isLeftdEqualToRightd(int arr[N][N],int* left,int* right){

    int count = 0;
    int count2 = N-1;
    int sum1 = 0;
    int sum2 = 0;

    // left to right diagonal
    for(int k = 0; k < N; k++){
        sum1 += arr[k][count];
        count++;
    }
    *left = sum1;
    
    // right to left diagonal
    for(int k = 0; k < N; k++){
        sum2 += arr[k][count2];
        count2--;
    }
    *right = sum2;
    
    if (*left == *right) return 1;
    else return 0;
}
