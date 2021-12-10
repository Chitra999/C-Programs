#include <stdio.h>
#include <stdlib.h>
int nat(int i);
 void main()
 {
     int n;
     printf("enter n\n");
     scanf("%d",&n);
     printf("The sum of first n natural nos.\n");
     int sum = nat(n);
     printf("%d",sum);

 }
 int nat(int i)
 {
     if(i==1)
        return(1);
     else{
         return(i+ nat(i-1));

     }

 }
