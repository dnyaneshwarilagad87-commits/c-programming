#include <stdio.h>
#include <stdlib.h>
float avg(int s[],int n){
    int sum=0;
    for(int i=0;i<n;i++) sum+=s[i];
    return (float)sum/n;
}
int main(){
    int s[10];
    for(int i=0;i<10;i++) s[i]=rand()%100;
    printf("Average=%0.2f",avg(s,10));
}
