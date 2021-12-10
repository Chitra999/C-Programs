//Given a no. n find if it is odd/even
#include <stdio.h>
#include <stdbool.h>
static int ans(int arr[]);
void main()
{
    int a[]={2,3,4,1,2,1,3,6,4};
    printf("%d", ans(a));
}
static int ans(int arr[])
{
    int unique=0;
    for(int n=0;n<9;n++)
        unique^=arr[n];
    return unique;
}
