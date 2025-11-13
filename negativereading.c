#include <stdio.h>
float avg(float s[],int n){
    float sum=0; for(int i=0;i<n;i++) sum+=s[i];
    return sum/n;
}
int main(){
    float s[100]; int n=0; float val;
    printf("Enter readings (negative to stop):\n");
    while(1){
        scanf("%f",&val);
        if(val<0) break;
        s[n++]=val;
    }
    printf("Average=%.2f",avg(s,n));
}
