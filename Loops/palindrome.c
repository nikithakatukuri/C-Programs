#include<stdio.h>
int main()
{
    int i,n,sum=0,r,t;
    printf("Enter a number: ");
    scanf("%d",&n);
    t=n;
    while(n!=0)
    {
        r=n%10;
        sum=sum*10+r;
        n=n/10;
    }
    if(t==sum)
    {
        printf("%d is a palindrome number",t);
    }
    else
    {
         printf("%d is not palindrome number",t);

    }
}
