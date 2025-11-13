#include <stdio.h>
float avg(float s[], int n){
    float sum=0;
    for(int i=0;i<n;i++) sum+=s[i];
    return sum/n;
}
int main(){
    float s[3]={10.25,10.75,10.50};
    printf("Average=%.1f", avg(s,3));
}
