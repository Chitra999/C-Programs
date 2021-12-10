#include <stdio.h>
#include <stdlib.h>
void main()
{
    int h, m,s;
    h=m=s=0;
    int d=1000;//delay
    printf("set time in HH:MM:SS\n");
    scanf("%d%d%d",&h,&m,&s);
    start:
    if(h>23 || m>60|| s>60)
    {
        printf("error");
        exit(0);
    }
    while(1)//infinite loop
    {
        s++;
        if(s>59)
        {
            m++;
            s=0;
        }
        if(m>59)
        {
            h++;
            m=0;
        }
        if(h>23)
        {
            h=1;
        }

        printf("\n clock:");
        printf("\n %02d:%02d:%02d",h,m,s);//printing time
        if(h>23)
        {
            printf("am");
        }
        if(h>12 && h<=23)
        {
            printf("pm");
        }
        Sleep(d);//slows down while loop to make it look like a real clock
        system("cls");//it clears the screen
    }
}
