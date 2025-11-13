#include <stdio.h>
#define SIZE 4
float avg(float s[],int n){
    float sum=0; for(int i=0;i<n;i++) sum+=s[i];
    return sum/n;
}
int main(){
    float s[SIZE]={2,4,6,8};
    printf("Average=%.2f",avg(s,SIZE));
}
