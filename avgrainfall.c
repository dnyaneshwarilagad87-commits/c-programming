#include <stdio.h>
float avg(float d[], int n){
    float sum=0;
    for(int i=0;i<n;i++) sum+=d[i];
    return sum/n;
}
int main(){
    float rain[5]={20.5,22.1,25.0,21.8,24.2};
    printf("Average Rainfall=%.2f mm",avg(rain,5));
}
