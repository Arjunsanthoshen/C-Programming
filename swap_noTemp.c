#include <stdio.h>
int main(){
    int a, b;
    printf("enter two numbers:");
    scanf("%d %d", &a, &b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("%d is interchanged with %d\n", a, b);
}