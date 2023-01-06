#include<stdio.h>
                   
int main()
{
    char a; 
    printf("Enter a character ");
    scanf("%c", &a);

    int ascii = a;
    printf("ASCII character is %d", ascii);

    return 0;
}