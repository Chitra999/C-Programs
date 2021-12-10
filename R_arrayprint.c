#include <stdio.h>
#include <stdlib.h>
 void main()
 {
     int a[5]={1,2,3,4,5};
     Print(a,4);

 }
 void Print(int i[],int s)
 {
     if(s==0)
        printf("%d\t", i[s]);
     else{
         Print(i,s-1);
         printf("%d\t",i[s]);

     }

 }
