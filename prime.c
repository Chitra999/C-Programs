 #include <stdio.h>
#include <stdbool.h>
static void prime(bool arr[50], int s);

 void main()
 {
     printf("Hello World:");
     int n=40;
     int i;
     bool a[100];
     prime(a,n);

 }
  static void prime(bool arr[100], int s)
    {
        for(int i=2;i*i<=s;i++){
            if(!arr[i])
            {
                for(int j=i*2;j<=s;j+=i)
                    arr[j]=true;
            }
        }
        for(int i=2;i<=s;i++)
            if(!arr[i])
                printf("%d, ",i);

    }
