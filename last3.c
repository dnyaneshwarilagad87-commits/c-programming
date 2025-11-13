#include <stdio.h>
float avgLast3(float s[],int n){
    float sum=0;
    for(int i=n-3;i<n;i++) sum+=s[i];
    return sum/3;
}
int main(){
    float s[5]={10,20,30,40,50};
    printf("Avg of last 3=%.2f",avgLast3(s,5));
}
