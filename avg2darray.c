#include <stdio.h>
float avg(float s[][3],int row){
    float total=0; int count=0;
    for(int i=0;i<row;i++)
        for(int j=0;j<3;j++){
            total+=s[i][j];
            count++;
        }
    return total/count;
}
int main(){
    float s[3][3]={{1.2,1.3,1.4},{2.1,2.3,2.5},{3.0,3.2,3.4}};
    printf("Overall Average=%.2f",avg(s,3));
}
