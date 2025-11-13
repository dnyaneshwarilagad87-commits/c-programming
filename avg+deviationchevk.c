#include <stdio.h>
float avg(float s[],int n){
    float sum=0;
    for(int i=0;i<n;i++) sum+=s[i];
    return sum/n;
}
int main(){
    float s[5]={10,12,9,11,13};
    float a=avg(s,5);
    for(int i=0;i<5;i++){
        if(s[i]>a) printf("Reading %d above avg\n",i+1);
    }
}
