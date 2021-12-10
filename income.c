 #include <stdio.h>
#include <stdlib.h>
 float tax(float t);
 float income;

 void main()
 {
     printf("Hello World:");
     scanf("%f",&income);
     float T=(income>=250000 && income<=500000)?tax(5.0):(income>500000 && income<=100000)?tax(20):(income>100000)?tax(30):tax(0);
     printf("%.3f",T);

 }
  float tax(float t)
    {
        return(income*(t/100));
    }
