#include <stdio.h>

#define PI 3.142857

float circumference(float radius) {
    // computation
    float circumference = 2 * PI * radius;

    return circumference;
}
    
float area(float rad){
    // computation
    float area = PI * rad * rad;
    
    return area;
}

int main(){
    float rad;
    
    // take input from user
    printf("Enter radius of circle: ");
    scanf("%f", &rad);    
    
    //output solution
    printf("Area: %f\nCircumference: %f\n", area(rad), circumference(rad));

    return 0;
}


