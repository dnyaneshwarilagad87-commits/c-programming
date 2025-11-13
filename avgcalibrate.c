#include <stdio.h>
float avg(float s[],int n){
    float sum=0; for(int i=0;i<n;i++) sum+=s[i];
    return sum/n;
}
int main(){
    float raw[5]={1.2,1.3,1.1,1.4,1.2};
    float gain=2.5;
    for(int i=0;i<5;i++) raw[i]*=gain;
    printf("Avg Calibrated=%.2f",avg(raw,5));
}
