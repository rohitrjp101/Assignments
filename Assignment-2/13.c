#include<stdio.h>
                   
int main()
{
    int num;
    printf("Enter a three digit number ");
    scanf("%d", &num);

    int x = num%10;
    num = num/10;
    num = x*100+num;

    printf("The rotated number is %d", num);
    
    return 0;
}