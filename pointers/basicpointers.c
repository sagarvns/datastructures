#include<stdio.h>
int main()
{
int x=10,y=20;
int* p1=&x,*p2=&y;
printf("X=%d, *p1=%d\n",x,*p1);
printf("Address X=%u, p1=%u\n",&x,p1);
*p1=30;
printf("X=%d, *p1=%d\n",x,*p1);
printf("Address X=%u, p1=%u\n",&x,p1);
    return 0;
}