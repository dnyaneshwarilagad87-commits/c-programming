#include <stdio.h>
float avg(int adc[],int n){
    int sum=0;
    for(int i=0;i<n;i++) sum+=adc[i];
    return (float)sum/n;
}
int main(){
    int adc[4]={512,520,518,515};
    printf("Average ADC=%.2f",avg(adc,4));
}
