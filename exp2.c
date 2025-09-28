#include<stdio.h> 
int main() 
{ 
    float A, B, Sum; 
    printf("Enter reading of sensor 1: ",A); 
    scanf("%f", &A); 
     printf("Enter reading of sensor 2: ",B); 
    scanf("%f", &B); 
    Sum=A+B; 
    printf("Sum of two Temperature:%.2f\n",A+B); 
    return 0;
}