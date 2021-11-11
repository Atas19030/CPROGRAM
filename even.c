#include <stdio.h>
int main()
{
    int a;
    printf("Enter a number:\n");
    scanf("%d",&a);
    if (a % 2 == 0)
    {
        printf("It is a Even Number");
    }
    else
    {
        printf("It is a Odd Number");
    }
    
    return 0;
}