#include <stdio.h>
 struct emp{
    char ch;
    int id;
    float s;
 } ;
 void main()
 {
     printf("Hello World\n");
     int a,b;
     scanf("%d %d",&a,&b);
     struct emp detail={'r',101,(a*b)};
     printf("%d %f", detail.id,detail.s);
 }
