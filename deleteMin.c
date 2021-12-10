#include <stdio.h>
#include <stdlib.h>
int arrPrint(int arr[50],int n)
{
    for(int i=0;i<n;i++)
     {
         printf("%d,",arr[i]);
     }
}
 void main()
 {
     int a[50];
     int n;
     printf("Enter size of the array\n:");
     scanf("%d",&n);
     printf("enter %d elements:",n);
     for(int i=0;i<n;i++)
     {
         scanf("%d",&a[i]);
     }
     int i;
     int min=a[0];
     int pos;
     for(i=1;i<n;i++)
     {
         if(min>a[i])
            {
                min=a[i];
                pos=i;
            }
     }
     printf("minimum value is %d\n", min);
     for(int j=pos;j<n;j++)
     {
         if(j==(n-1)){
            n=n-1;
            break;}
         a[j]=a[j+1];
     }
     printf("The array after deleting the minimum value:\n");
     for(int i=0;i<n;i++)
     {
         printf("%d,",a[i]);
     }
     arrPrint(a ,n);
 }
