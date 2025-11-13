#include <stdio.h>
float avg(float s[],int n);
int main(){
    float s[3]={10,20,30};
    printf("Average=%.2f",avg(s,3));
}
float avg(float s[],int n){
    float sum=0; for(int i=0;i<n;i++) sum+=s[i];
    return sum/n;
}
