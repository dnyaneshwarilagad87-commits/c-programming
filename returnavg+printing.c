#include <stdio.h>
float avg(float s[],int n){
    float sum=0;
    for(int i=0;i<n;i++) sum+=s[i];
    return sum/n;
}
int main(){
    float s[4]={1.1,2.2,3.3,4.4};
    printf("Sensor Readings: ");
    for(int i=0;i<4;i++) printf("%.1f ",s[i]);
    printf("\nAverage=%.2f",avg(s,4));
}
