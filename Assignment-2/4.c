#include<stdio.h>
                   
int main()
{
    int a = 5, b = 3;

    a = a+b;
    b = a-b;
    a = a-b;

    printf("a is %d and b is %d", a, b);
    
    return 0;
}