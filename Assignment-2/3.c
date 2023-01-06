#include<stdio.h>
                   
int main()
{
    int a=5, b=3;
    int c=0;

    c = a;
    a = b;
    b = c;

    printf("a is %d and b is %d", a,b);

    return 0;
}