#include <stdio.h>
#include <stdlib.h>
void Input(int* arr, int s);

 void main()
 {
     printf("Hello World:");
     int i;
     int arr[10];
     Input(arr,10);

     for(int i=0;i<10;i++)
        printf("%d ",arr[i]);

 }
  void Input(int* arr, int s)
    {
        int a[s];
        printf("\n Enter 10 elements:");
        for(int i=0;i<s;i++){
            scanf("%d",&a[i]);
            arr[i]=a[i]+1;
        }
    }
