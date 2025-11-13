#include <stdio.h>
float avg(float a[],int n){
    float sum=0; for(int i=0;i<n;i++) sum+=a[i];
    return sum/n;
}
void minmax(float a[],int n,float *min,float *max){
    *min=*max=a[0];
    for(int i=1;i<n;i++){
        if(a[i]<*min) *min=a[i];
        if(a[i]>*max) *max=a[i];
    }
}
int main(){
    float s[5]={12.1,15.5,10.8,13.0,14.6};
    float mn,mx;
    minmax(s,5,&mn,&mx);
    printf("Average=%.2f\nMin=%.2f\nMax=%.2f",avg(s,5),mn,mx);
}
