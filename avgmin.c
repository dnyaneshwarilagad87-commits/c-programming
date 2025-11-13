#include <stdio.h>
float avg(float s[],int n){
    float sum=0; for(int i=0;i<n;i++) sum+=s[i];
    return sum/n;
}
float min(float s[],int n){
    float m=s[0];
    for(int i=1;i<n;i++) if(s[i]<m) m=s[i];
    return m;
}
int main(){
    float s[4]={7.5,8.1,6.9,7.8};
    printf("Avg=%.2f, Min=%.2f",avg(s,4),min(s,4));
}
