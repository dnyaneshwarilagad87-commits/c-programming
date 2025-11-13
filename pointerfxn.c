#include <stdio.h>
float avg(float *p,int n){
    float sum=0; for(int i=0;i<n;i++) sum+=*(p+i);
    return sum/n;
}
int main(){
    float s[4]={2.1,2.4,2.6,2.5};
    printf("Average=%.2f",avg(s,4));
}
