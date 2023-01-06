#include<stdio.h>
#include<math.h>
                   
int main()
{
    /* (n&~(n-1)) always return the binary number containing the rightmost set bit as 1. if N = 12 (1100) then it will return 4 (100). Here log2 will return, the number of times we can express that number in a power of two. For all binary numbers containing only the rightmost set bit as 1 like 2, 4, 8, 16, 32…. Find that position of rightmost set bit is always equal to log2(Number) + 1.

    Follow the steps to solve the given problem:

    Let input be 12 (1100)
    Take two’s complement of the given no as all bits are reverted except the first ‘1’ from right to left (0100)
    Do a bit-wise & with original no, this will return no with the required one only (0100)
    Take the log2 of the no, you will get (position – 1) (2)
    Add 1 (3) */

    int n;
    printf("Enter your number ");
    scanf("%d", &n);
    
    //2's complement of n
    int num = n & (~n + 1);
    int ans = log2(num) + 1;
    
    printf("The set bit in LSB(rightmost) is at position - %d", ans);


    return 0;
}