#include<stdio.h>
int main(){
    int p;
    float r, n, si;
    printf("Enter the Principal amount (P): ");
    scanf("%d",&p);
    printf("Enter the Interest rate (R): ");
    scanf("%f",&r);
    printf("Enter the Number of years (n): ");
    scanf("%f",&n);
    si=(p*r*n)/100;
    printf("Simple Interest(SI) = %f\n",si);
}