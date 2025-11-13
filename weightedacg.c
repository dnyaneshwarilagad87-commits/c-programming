#include <stdio.h>
float weightedAvg(float s[],float w[],int n){
    float sum=0,wsum=0;
    for(int i=0;i<n;i++){ sum+=s[i]*w[i]; wsum+=w[i]; }
    return sum/wsum;
}
int main(){
    float s[3]={10,20,30}, w[3]={1,2,3};
    printf("Weighted Avg=%.2f",weightedAvg(s,w,3));
}
