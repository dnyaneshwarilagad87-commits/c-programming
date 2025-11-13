#include <stdio.h>
float avg(float s[],int n){
    float sum=0;
    for(int i=0;i<n;i++) sum+=s[i];
    return sum/n;
}
int main(){
    float s[5]={4.9,5.0,5.1,5.0,4.8};
    printf("Avg Voltage=%.2fV",avg(s,5));
}
