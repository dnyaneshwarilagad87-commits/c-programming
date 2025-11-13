#include <stdio.h>
void sort(float s[],int n){
    for(int i=0;i<n-1;i++)
        for(int j=i+1;j<n;j++)
            if(s[i]>s[j]){
                float t=s[i]; s[i]=s[j]; s[j]=t;
            }
}
float avg(float s[],int n){
    float sum=0; for(int i=0;i<n;i++) sum+=s[i]; return sum/n;
}
int main(){
    float s[5]={5,2,4,1,3};
    sort(s,5);
    printf("Sorted Avg=%.2f",avg(s,5));
}
