#include <stdio.h>
double avg(double s[],int n){
    double sum=0; for(int i=0;i<n;i++) sum+=s[i];
    return sum/n;
}
int main(){
    double s[3]={2.5,3.6,4.2};
    printf("Average=%.3lf",avg(s,3));
}
