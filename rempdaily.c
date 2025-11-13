#include <stdio.h>
float avg(float s[],int n){
    float sum=0; for(int i=0;i<n;i++) sum+=s[i];
    return sum/n;
}
int main(){
    float temp[24];
    for(int i=0;i<24;i++) temp[i]=25+i%3;
    printf("Daily Avg Temp=%.2f°C",avg(temp,24));
}
