#include <stdio.h>
#include <stdlib.h>
float avg(float s[],int n){
    float sum=0;
    for(int i=0;i<n;i++) sum+=s[i];
    return sum/n;
}
int main(){
    float s[10];
    for(int i=0;i<10;i++){
        s[i]=20+(rand()%100)/10.0;
    }
    printf("Avg Random Sensor=%.2f",avg(s,10));
}
