#include<stdio.h>
void valueSwap(int x, int y, int z);
void Swap(int* x, int* y, int* z);

int main()
{
    int a=1,b=2,c=3;
    /*
    printf("Address of a=%u\n",&a);
    printf("Address of b=%u\n",&b);
    printf("Address of c=%u\n",&c);
    x   y   z   t
    1   2   3
    3   1   2
    
    x   y   z   t
    1   2   3
    t=x
    1   2   3   1
    x=z
    3   2   3   1
    z=y
    3   2   2   1
    y=t
    3   1   2   1
    */
Swap(&a,&b,&c);
printf("a=%d, b=%d, c=%d",a,b,c);
return 0;
}
void valueSwap(int x, int y, int z)
{
    printf("Address of x=%u\n",&x);
    printf("Address of y=%u\n",&y);
    printf("Address of z=%u\n",&z);
    printf("Entering Function x=%d,b=%d,c=%d",x,y,z);
    int t=x;
    x=y;
    x=z;
    z=y;
    y=t;
    printf("Leaving Function x=%d, y=%d\n, x=%d\n",x,y,z);
}
void Swap(int* x, int* y, int* z)
{
    printf("Address of X=%u",x);
    printf("Address of y=%u",y);
    printf("Address of z=%u",z);
     int t=*x;
    *x=*y;
    *x=*z;
    *z=*y;
    *y=t;
    printf("Leaving Function x=%d, y=%d\n, x=%d\n",*x,*y,*z);

}