#include <stdio.h>
int main()
{
    int x1 = 17, x2 = 6;
    int *p1 = &x1, *p2 = &x2;
    float i;
    i = 4 * -*p2 / *p1 + 10;

    printf("\nvalue of i = %f", i);

    return 0;
}