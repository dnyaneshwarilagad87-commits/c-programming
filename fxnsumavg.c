#include <stdio.h>
void calc(float s[],int n,float *sum,float *avg){
    *sum=0;
    for(int i=0;i<n;i++) *sum+=s[i];
    *avg=*sum/n;
}
int main(){
    float s[3]={2,3,4},sum,avgv;
    calc(s,3,&sum,&avgv);
    printf("Sum=%.2f Avg=%.2f",sum,avgv);
}
