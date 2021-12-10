#include <stdio.h>
int arrPrint(int arr[100],int s)
{
    for(int i=0;i<s;i++)
        printf("%d\t",arr[i]);
    printf("\n");
}
int subt(int a[50],int b[50],int s1,int s2,int* result)
{

    int k=0;
    for(int i=0;i<s1;i++)
    {
        int ctr=0;
        for(int j=0;j<s2;j++)
        {
            if(a[i]==b[j])
            {
                ctr++;
            }
        }
            if(ctr==0)
            {
                result[k]=a[i];
                k++;
            }
    }
    arrPrint(result,k);
    return k;
}
 void main()
 {
     int a[50],b[50];
     int size1,size2;
     printf("Enter size of the 1st array");
     scanf("%d",&size1);
     printf("Enter size of the 2nd array");
     scanf("%d",&size2);

     printf("Enter %d elements in the 1st array",size1);
     for(int i=0;i<size1;i++)
     {
         scanf("%d",&a[i]);
     }
      printf("Enter %d elements in the 2nd array",size2);
     for(int i=0;i<size2;i++)
     {
         scanf("%d",&b[i]);
     }
     int ab[50],ba[50];
     size1=subt(a,b,size1,size2,ab);
     size2=subt(b,a,size2,size1,ba);


     //now making union of a and b in u
     int u[100];
     //first, taking the elements of a in u
     u[0]=ab[0];
     int i,j,k=1;

     for(i=1;i<size1;i++)
     {
         int c=0;
         for(j=0;j<k;j++)
            {
            if(u[j]==ab[i])
                c++;
            }
         if(c==0)
            {
                u[k]=ab[i];
                k++;
            }

     }
     //Now inserting elements of b in u
     for(i=0;i<size2;i++)
     {
         int c=0;
         for(j=0;j<k;j++)
         {
             if(u[j]==ba[i])
                c++;
         }
         if(c==0)
         {
             u[k]=ba[i];
             k++;
         }
     }
     printf("\n the union is:");
     //printing the new array
     for(int i=0;i<k;i++)
     {
         printf("%d\t",u[i]);
     }
 }
