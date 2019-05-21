#include <stdio.h>
int main()
{
    int n,c, remainder, r = 0;
    scanf("%d", &n);

    c= n;

    while (c!= 0)
    {
        remainder = c%10;
        r+= remainder*remainder*remainder;
        c /= 10;
    }

    if(r== n)
        printf("%d is an Armstrong number.",n);
    else
        printf("%d is not an Armstrong number.",n);

    return 0;
}