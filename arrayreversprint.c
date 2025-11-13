#include <stdio.h>
float avg(float s[],int n){
    float sum=0; for(int i=0;i<n;i++) sum+=s[i];
    return sum/n;
}
int main(){
    float s[5]={1,2,3,4,5};
    printf("Avg=%.2f\nReverse:",avg(s,5));
    for(int i=4;i>=0;i--) printf("%.1f ",s[i]);
}
