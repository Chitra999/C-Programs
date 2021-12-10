#include <stdio.h>
#include <stdlib.h>
 void main()
 {
     int a[5]={1,2,3,4,5};
     int i,j=0;
     int rev[5];
     for(i=4;i>=0;i--)
     {
         rev[j]=a[i];
         j++;
     }
     for(i=0;i<5;i++)
     {
         printf("%d\t",rev[i]);
     }
 }
