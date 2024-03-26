#include <stdio.h>
#include <math.h>

int main() {
double a,b,c,d,discriminant,root1,root2;
printf(" Enter the values of a, b and c: ");
scanf("%lf %lf %lf", &a, &b, &c);
discriminant=b*b-4*a*c;
if(discriminant>0){
    root1=(-b+sqrt(discriminant))/2*a;
    root2 = (-b - sqrt(discriminant)) / (2 * a);
    printf("Roots are real and distinct.\n");
    printf("Root 1 = %.2lf\n", root1);
    printf("Root 2 = %.2lf\n", root2);}
else if(discriminant==0){
    root1 = root2 = -b / (2 * a);
    printf("Roots are real and equal.\n");
    printf("Root 1 = Root 2 = %.2lf\n", root1);
}
else{
        double realPart = -b / (2 * a);
        double imagPart = sqrt(-discriminant) / (2 * a);
        printf("Roots are complex and imaginary.\n");
        printf("Root 1 = %.2lf + %.2lfi\n", realPart, imagPart);
        printf("Root 2 = %.2lf - %.2lfi\n", realPart, imagPart);
}
return 0;
}