/*Wrte a programm to reverse the array elemnt using pointer */
#include <stdio.h>
int main()
{
    int n;
    printf("\n Enter the  Size of array  :\n");
    scanf("%d", &n);
    int a[n];
    int *ptr, *p;
    ptr = a;
    printf("\n Enter the array element \n ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", ptr);
        ptr++;
    }
    p = a;
    ptr--;

    while (ptr >= p)
    {
        int temp = *ptr;
        *ptr = *p;
        *p = temp;
        ptr--, p++;
    }

    for (int i = 0; i < n; i++)
    {
        printf(" %d ", a[i]);
    }

    return 0;
}