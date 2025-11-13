#include <stdio.h>
struct Sensor{float reading;};
float avg(struct Sensor s[],int n){
    float sum=0;
    for(int i=0;i<n;i++) sum+=s[i].reading;
    return sum/n;
}
int main(){
    struct Sensor s[3]={{10.2},{11.3},{12.1}};
    printf("Average=%.2f",avg(s,3));
}
