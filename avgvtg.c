#include <stdio.h>
float avg(float v[], int n){
    float sum=0;
    for(int i=0;i<n;i++) sum+=v[i];
    return sum/n;
}
int main(){
    float v[3]={5.0,4.8,5.2};
    printf("Avg Voltage=%.2fV", avg(v,3));
}
