#include <stdio.h>
float avgEven(float s[],int n){
    float sum=0; int c=0;
    for(int i=0;i<n;i+=2){ sum+=s[i]; c++; }
    return sum/c;
}
int main(){
    float s[6]={1,2,3,4,5,6};
    printf("Avg of even index readings = %.2f", avgEven(s,6));
}
