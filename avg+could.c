#include <stdio.h>
float avg(float s[],int n){
    float sum=0; for(int i=0;i<n;i++) sum+=s[i];
    return sum/n;
}
int countAbove(float s[],int n,float t){
    int c=0; for(int i=0;i<n;i++) if(s[i]>t) c++;
    return c;
}
int main(){
    float s[5]={2.5,3.1,4.0,3.8,2.9};
    printf("Average=%.2f, Above3= %d",avg(s,5),countAbove(s,5,3));
}
