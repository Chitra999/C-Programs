#include <stdio.h>

void filling_shape(int n)
{
    int f[n+1];
    f[1]=0;
    f[0]=1;
    for(int i=2;i<=n;i++)
        f[i]=2*f[i-2];
    printf("%d",f[n]);
}
void main()
{

    int a;
    scanf("%d",&a);
    filling_shape(a);
}
