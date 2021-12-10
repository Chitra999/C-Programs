#include <stdio.h>
#include <stdlib.h>
 void main()
 {
     printf("The first 50 natural nos.\n");
     nat(50);

 }
 void nat(int i)
 {
     if(i==1)
        printf("\t1\t");
     else{
         nat(i-1);
         printf("%d\t",i);

     }

 }
