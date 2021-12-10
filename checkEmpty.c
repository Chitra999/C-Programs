#include <stdio.h>
#include <stdlib.h>

 void main()
 {
     int a[10],n;
     printf("Enter size of the array:");
     scanf("%d",&n);
     int c=0;
     if(n>0)
     {
         printf("Enter %d elements in the array:",n);
         for(int i=0;i<n;i++)
         {
             scanf("%d",&a[i]);
             if(a[i]==NULL)
                c++;
         }
         if(c==n)
         printf("Array is empty");

     }
     else if(n==0){
        printf("Array is empty");
     }


 }
