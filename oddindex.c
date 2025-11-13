#include <stdio.h>
float avgOdd(float s[],int n){
    float sum=0; int c=0;
    for(int i=1;i<n;i+=2){ sum+=s[i]; c++; }
    return sum/c;
}
int main(){
    float s[6]={10,20,30,40,50,60};
    printf("Avg of odd index=%.2f",avgOdd(s,6));
}
