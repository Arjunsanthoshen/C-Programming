#include  <stdio.h>
#include <math.h>
int main(){
    double finalAmount,P,T,R,n ;
    printf("enter the principal amount:");
    scanf("%lf",&P);
    printf("enter the Time:");
    scanf("%lf",&T);
    printf("enter the Interest rate:");
    scanf("%lf",&R);
    R/=100;
    printf("no. of times interest applied:");
    scanf("%lf",&n);
    finalAmount=  P*pow((1+R/n),n*T);
    printf("the simple interest is: %lf",finalAmount);
    return 0;
    }