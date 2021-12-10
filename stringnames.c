#include <stdio.h>
#include <stdlib.h>
 struct student{
    int roll_no;
    char name[20];
 };
 int main()
 {
    struct student stu;

    stu.roll_no =64;
    strcpy(stu.name, "Saurabh");
    printf("Structure Data\n");
    printf("Roll No:%d\n", stu.roll_no);
    printf("Name: %s\n",stu.name);

    int size= sizeof(stu);
    printf("Size of structure student ");
    printf("is %d", size);

    struct cpu{
    char name[20];
    };
    printf("Hello World\n");
    struct cpu names[10];
    printf("Enter 10 names:\n");
    for(int i=0;i<10;i++)
    {
        scanf("%s",&names[i].name);
    }
    printf("the names entered are as follows:\n");
    for(int i=0;i<10;i++)
    {
        printf("%s\n",names[i].name);
    }

}
