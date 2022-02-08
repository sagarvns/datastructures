#include<stdio.h>
void valueSwap(int x,int y);
void ptrSwap(int* x,int* y);
int main()
{
int a=2,b=3;
printf("Address of a =%u\n",&a);
printf("Before swap a=%d, b=%d\n",a,b);
//valueSwap(a,b);
ptrSwap(&a,&b);
printf("After swap a=%d, b=%d\n",a,b);
    return 0;
}
void valueSwap(int x,int y)
{
    printf("Address of x =%u\n",&x);
    printf("Entering function x=%d, y=%d\n",x,y);
    int t=x;
    x=y;
    y=t;
    printf("Leaving function x=%d, y=%d\n",x,y);

}

void ptrSwap(int* x,int* y)
{
    printf("Address of x =%u\n",x);
    printf("Entering function x=%d, y=%d\n",*x,*y);
    int t=*x;
    *x=*y;
    *y=t;
    printf("Leaving function x=%d, y=%d\n",*x,*y);
}