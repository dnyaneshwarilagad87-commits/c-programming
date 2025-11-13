#include <stdio.h>
float sum(float s[],int n){
    if(n==0) return 0;
    return s[n-1]+sum(s,n-1);
}
int main(){
    float s[4]={2,4,6,8};
    printf("Average=%.2f",sum(s,4)/4);
}
