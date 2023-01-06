#include<stdio.h>
                   
int main()
{
    float usd = 76.23, inr = 1;

    printf("Enter the amount in INR ");
    scanf("%f", &inr);

    usd = inr/usd;

    printf("The amount in USD is %f", usd);

    return 0;
}