#include <stdio.h>
int main()
{
    int a,b,sum,diff,multi,div,rem;
    printf("Enter Two Number:\n");
    scanf("%d %d",&a,&b);
    sum=a+b;
    diff=a-b;
    multi=a*b;
    div=a/b;
    rem=a%b;
    printf("Sum=%d\n",sum);
    printf("Difference=%d\n",diff);
    printf("Multiplication=%d\n",multi);
    printf("Division=%d and Reminder=%d",div,rem);
    return 0;
}