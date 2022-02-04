#include <stdio.h>
#include <stdio.h>
//without memoization
int fw(int x)
{
    if(x<2)
        return x;
    return (fw(x-1)+fw(x-2));
}
//METHOD ONE
long long int f[50];

int f1(int n)
{
    if(n<2)
        return n;
    if(f[n]!=-1)
        return f[n];

    f[n]=f1(n-1)+f1(n-2);
    return f[n];

}
void solve1(int x)
{
    for(int i=0;i<=x;i++)
        f[i]=-1;
}
//METHOD TWO
void solve2(int n)
{
    f[0]=0;
    f[1]=1;
    for(int i=2;i<=n;i++)
        f[i]=f[i-1]+f[i-2];
    printf("%d",f[n]);
}
//METHOD THREE
void solve3(int x)
{
    f[0]=0;
    f[1]=1;
    for(int i=1;i<x;i++)
    {
        f[i+1]+=f[i];
        f[i+2]+=f[i];
    }
    printf("%lld",f[x]);
}
void main()
{
    int a;
    scanf("%d",&a);
    solve3(a);
    //printf("%d",fw(a));
}
