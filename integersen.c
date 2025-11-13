#include <stdio.h>
float avg(int s[],int n){
    int sum=0; for(int i=0;i<n;i++) sum+=s[i];
    return (float)sum/n;
}
int main(){
    int s[4]={10,20,30,40};
    printf("Average=%0.2f",avg(s,4));
}
