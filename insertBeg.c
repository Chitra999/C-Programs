#include <stdio.h>

int arrPrint(int arr[100],int s)
{
    for(int i=0;i<s;i++)
        printf("%d\t",arr[i]);
}

 void main()
 {
     int a[100];
     int size;
     printf("Enter size of the array");
     scanf("%d",&size);
     printf("Enter %d elements in the array",size);
     for(int i=0;i<size;i++)
     {
         scanf("%d",&a[i]);
     }
     int insert;
     printf("Enter the element that needs to be inserted:\n");
     scanf("%d",&insert);

     //inserting the element in the array
     //first we will take the last element and shift it in the next index
     int k=0;

     for(int i=size-1;i>=0;i--,k++)
     {
         a[size-k]=a[i];

     }
     a[0]=insert;
     //printing the new array
     for(int i=0;i<=size;i++)
     {
         printf("%d\t",a[i]);
     }

 }
