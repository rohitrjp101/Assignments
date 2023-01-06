#include<stdio.h>
#define pi 3.14
                   
int main()
{
    int r;
    printf("Enter the radius of the circle ");
    scanf("%d", &r);

    int area = pi*r*r;
    printf("Area of circle is %d having the radius %d", area, r);

    return 0;
}