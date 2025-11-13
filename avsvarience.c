#include <stdio.h>
#include <math.h>
float avg(float s[],int n){
    float sum=0; for(int i=0;i<n;i++) sum+=s[i]; return sum/n;
}
float var(float s[],int n){
    float a=avg(s,n),sum=0;
    for(int i=0;i<n;i++) sum+=(s[i]-a)*(s[i]-a);
    return sum/n;
}
int main(){
    float s[5]={2,4,6,8,10};
    printf("Avg=%.2f Var=%.2f",avg(s,5),var(s,5));
}
