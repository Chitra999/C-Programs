//Given a no. n find if it is odd/even
#include <stdio.h>
#include <stdbool.h>
static bool isOdd(int n);
void main()
{
    int n;
    printf("Enter no.\n");
    scanf("%d",&n);
    printf("%d  %s",(n), isOdd(n) ? "is an odd no." : "is an even no.");
}
static bool isOdd(int n)
{
    return((n&1)==1);
}
