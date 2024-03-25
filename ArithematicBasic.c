#include <stdio.h>
int main(){
    int a,b,c,d;
    printf("enter four numbers:");
    scanf("%d %d %d %d",&a,&b,&c,&d);
    printf("%d+%d-%d+%d=%d",a,b,c,d,a+b-c+d);
    printf("\n%d*%d/%d+%d=%d",a,b,c,d,a*b/c+d);
    printf("\n 1+%d*%d%%%d=%d",a,b,c,1+a*b%c);
    printf("\n %d+%d%%%d-%d=%d",a,d,b,c,a+d%b-c);
    return 0;
}