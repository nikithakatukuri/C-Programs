#include<stdio.h>
int main()
{
    int a,b,*p1,*p2;
    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);
    p1=&a;
    p2=&b;
    printf("The sum is %d",*p1 + *p2);
}
