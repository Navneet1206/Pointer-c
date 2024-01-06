#include<stdio.h>
int swap(int *x ,int *y)
{
        int t;
        t = *x;
        *x = *y;
        *y = t;

    printf("\na = %d b = %d",*x,*y);

    return 0;

}
int main()
{
    int a,b;

    printf("Enter number in variable a : ");
    scanf("%d",&a);
    printf("Enter number in variable b : ");
    scanf("%d",&b);

    printf("\na = %d b = %d \n",a,b);

    printf("\nAfter Swapping\n");

    swap(&a,&b);

    return 0;
}