#include <stdio.h>
#include <stdlib.h>
struct node
{
    int x;
    struct node *next;
};
struct node * start= NULL;

create()
{
    struct node * temp=(struct node*)malloc(sizeof(struct node*));
    printf("Enter node data:\n");
    scanf("%d",&temp->x);

    temp->next=NULL;//for single node
    start=temp;
    char c;
    do{

        struct node * temp1=(struct node*)malloc(sizeof(struct node*));
        printf("Enter next node data:");
        scanf("%d",&temp1->x);

        temp->next=temp1;
        temp=temp1;
        printf("if you want to insert more enter y:\n");
        scanf("%s",&c);
    }while(c=='y');
    temp->next=NULL;
}
traverse()
{
    struct node*q;
    printf("\nThe data are\n");
    if(start==NULL)
        printf("Empty list");
    else
    {
        q=start;
        while(q->next!=NULL)
        {
            printf("%d ",q->x);
            q=q->next;
        }
        printf("%d",q->x);
    }
}
 void main()
 {
     create();
     traverse();
 }
