#include<stdio.h>
                   
int main()
{
    int a;
    float f;
    char ch;
    double d;

    printf("Int - %d\nFloat - %d\nChar - %d\nDouble - %d", sizeof(a), sizeof(f), sizeof(ch), sizeof(d));

    return 0;
}