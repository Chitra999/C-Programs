#include <stdio.h>
#include <math.h>
void dec_bin(int x,int* b, int n)
{

    int j=0;

    while(x>0)
    {
        b[j]=x%2;
        x=x/2;
        j++;
    }
    while(j<=(n-1)){
        b[j]=0;
        j++;
        }

}
void main()
{
    int i,j,size;
    printf("Enter size of set:\n");
    scanf("%d",&size);
    int a[100];
    printf("Enter %d elements into the array:\n",size);
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\n");
    //power set
    int ptr[size];
    double per=pow(2,size);
    printf("THE POWER SET: {");
    for(i=0;i<per;i++)
    {
        int c=0;
        dec_bin(i,ptr,size);
        printf("{");
        for(j=0;j<size;j++)
        {
            if(ptr[j]==1)
            {
                if(c>=1){
                printf(",");}
                c++;
                printf("%d",a[j]);
            }

        }
        printf("}\t");
    }
    printf("}\n");
}
