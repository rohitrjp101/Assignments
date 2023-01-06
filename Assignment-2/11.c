#include<stdio.h>
                   
int main()
{
    int num, digit;
    printf("Enter the number and a digit ");
    scanf("%d%d", &num, &digit);

    num = num*10 + digit;

    printf("The number is %d", num);
    return 0;
}