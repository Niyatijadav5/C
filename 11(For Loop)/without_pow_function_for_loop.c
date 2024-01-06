// Calculate x^y without using power function.
#include <stdio.h>
int main()
{
    int x, y, pow = 1, i;
    
    printf("Enter Number: ");
    scanf("%d",&x);
    printf("Enter power: ");
    scanf("%d",&y);

    for (i = 1; i <= y; i++)
    {
        pow *= x;
    }
    
    printf("power=%d", pow);
    return 0;
}

