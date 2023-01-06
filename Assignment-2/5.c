#include<stdio.h>
                   
int main()
{
    int n, a, b, c;
    printf("Enter a three digit number ");
    scanf("%d", &n);

    a = n%10;
    n = n/10;
    b = n%10;
    n = n/10;

    printf("Sum of the digits is %d", a+b+n);

    // a = n/100;
    // b = ((n%100)/10);
    // c = n%10;
    
    // int sum = a+b+c;
    // printf("Sum of the digits is %d", sum);

    return 0;
}