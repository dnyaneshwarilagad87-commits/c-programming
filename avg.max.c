#include <stdio.h>
float avg(float s[],int n){
    float sum=0;
    for(int i=0;i<n;i++) sum+=s[i];
    return sum/n;
}
float max(float s[],int n){
    float m=s[0];
    for(int i=1;i<n;i++) if(s[i]>m) m=s[i];
    return m;
}
int main(){
    float s[5]={2.3,4.1,5.0,3.9,4.8};
    printf("Average=%.2f, Max=%.2f",avg(s,5),max(s,5));
}
