#include <stdio.h>
#include <math.h>
#define PI 3.14159;

int main() {
    double inputRadius, volumeValue;
    printf("Please, enter the sphere's radius: ");
    scanf("%lf", &inputRadius);
    inputRadius = pow(inputRadius, 3);
    volumeValue = (4.0/3.0)*PI;
    volumeValue = inputRadius*volumeValue;
    
    printf("\nVOLUME = %.3lf", volumeValue);
}
