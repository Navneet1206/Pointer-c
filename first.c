#include<stdio.h>
int main()
{
    int *p , x=10;
    p=&x;

    printf("\nValue of p = %u",p);
    printf("\nValue of pointer p = %d",*p);
    printf("\naddress of x = %u",&x);
    printf("\nvalue of x = %d",x);

    return 0;
}