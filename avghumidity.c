#include <stdio.h>
float avg(float h[],int n){
    float sum=0; for(int i=0;i<n;i++) sum+=h[i];
    return sum/n;
}
int main(){
    float h[4]={65.2,66.5,64.8,67.0};
    printf("Avg Humidity=%.2f%%",avg(h,4));
}
