#include <stdio.h>
int main() {
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a<=b && a<=c)
        printf("%d is Smallest\n",a);
    else if(b<=a && b<=c)
        printf("%d is Smallest\n",b);
    else
        printf("%d is Smallest\n",c);
    return 0;
}
s