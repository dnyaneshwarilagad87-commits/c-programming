#include<stdio.h> 
int main() 
{ 
    float sensortemp,threshold=80,criticaltemp=100; 
 
 printf("Enter the body temperature : ", sensortemp); 
scanf("%f", &sensortemp); 
 if (sensortemp<=threshold) 
{ 
 printf("Patient status : Normal "); 
} 
else if (sensortemp>threshold && criticaltemp>sensortemp) 
{ 
 printf("Patient status : Warning "); 
} 
 else 
{ 
printf("Patient status : Critical "); 
 } 
 return 0; 
} 
