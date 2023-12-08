#include<stdio.h>
int main()
{
    printf("\nsixe of int data type=%d\n\n",sizeof(int));
    int *p;
    int x;

    printf("Enter the value of x : ");
    scanf("%d",&x);

    p=&x;

    int **p1;
    p1=&p;

    printf("\nx=%d",x);
    printf("\np=%u",p);
    printf("\n*p=%d",*p);
    printf("\n**p1=%u",**p1);
    printf("\np1=%u",p1);
    
    return 0;
}
