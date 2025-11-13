#include <stdio.h>
float avgAbove(float s[],int n,float t){
    float sum=0; int c=0;
    for(int i=0;i<n;i++) if(s[i]>t){sum+=s[i]; c++;}
    return (c>0)?sum/c:0;
}
int main(){
    float s[6]={5,15,25,10,30,20};
    printf("Avg above 15=%.2f",avgAbove(s,6,15));
}
