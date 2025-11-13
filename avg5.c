#include <stdio.h>
float avg(float s[], int n){
    float sum=0;
    for(int i=0;i<n;i++) sum+=s[i];
    return sum/n;
}
int main(){
    float s[5]={10,20,30,40,50};
    printf("Average=%.2f", avg(s,5));
}
