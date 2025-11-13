#include <stdio.h>
float avg(float s[],int n){
    float sum=0; for(int i=0;i<n;i++) sum+=s[i]; return sum/n;
}
int main(){
    float cycle1[3]={1,2,3},cycle2[3]={4,5,6};
    float total[6];
    for(int i=0;i<3;i++){ total[i]=cycle1[i]; total[i+3]=cycle2[i]; }
    printf("Overall Avg=%.2f",avg(total,6));
}
