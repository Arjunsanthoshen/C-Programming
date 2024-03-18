#include <stdio.h>
int main(){
    float a,b,c,average;
    printf("enter three numbers:");
    scanf("%f %f %f",&a,&b,&c);
    average=(a+b+c)/3;
    printf("average of the number:%8.3f\n",average);
    return 0;
}