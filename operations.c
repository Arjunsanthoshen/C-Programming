#include <stdio.h>
int main(){
    int a,b;
    printf("enter two numbers:");
    scanf("%d %d",&a,&b);
    printf("\n %d+%d= %d",a,b,a+b);
    printf("\n %d-%d= %d",a,b,a-b);
    printf("\n %d*%d=%d",a,b,a*b);
    printf("\n %d/%d=%f",a,b,(float)a/b);
    printf("\n %d%%%d= %d", a, b, a % b);
    return 0;
    }