#include <stdio.h>
float avg(float t[],int n){
    float sum=0; for(int i=0;i<n;i++) sum+=t[i];
    return sum/n;
}
int main(){
    float temp[4]={28.5,30.2,29.8,31.0};
    printf("Average Temperature=%.2f°C",avg(temp,4));
}
