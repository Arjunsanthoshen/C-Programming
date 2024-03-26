#include  <stdio.h>
int main(){
    int P,T,R;
    float simpleInterest ;
    printf("enter the principal amount:");
    scanf("%d",&P);
    printf("enter the Time:");
    scanf("%d",&T);
    printf("enter the Interest rate:");
    scanf("%d",&R);
    simpleInterest= (float) (P*T*R)/100;
    printf("the simple interest is: %f",simpleInterest);
    return 0;}