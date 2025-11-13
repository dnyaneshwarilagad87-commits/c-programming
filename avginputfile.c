#include <stdio.h>
float avg(float s[],int n){
    float sum=0; for(int i=0;i<n;i++) sum+=s[i];
    return sum/n;
}
int main(){
    FILE *f=fopen("data.txt","r");
    float s[10]; int n=0;
    while(fscanf(f,"%f",&s[n])!=EOF) n++;
    printf("File Avg=%.2f",avg(s,n));
    fclose(f);
}
