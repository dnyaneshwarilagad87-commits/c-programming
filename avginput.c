#include <stdio.h>
float average(float a[],int n){
    float sum=0;
    for(int i=0;i<n;i++) sum+=a[i];
    return sum/n;
}
int main(){
    int n=5; float a[5];
    for(int i=0;i<n;i++){ printf("Sensor %d: ",i+1); scanf("%f",&a[i]); }
    printf("Average=%.2f", average(a,n));
}
