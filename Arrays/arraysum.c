#include<stdio.h>
int main(){
    int a[50],i,n,sum=0;
    printf("Enter the number of elements : ");
    scanf("%d",&n);
    printf("Enter %d elements:\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    printf("The sum of the array elemnts is %d",sum);

}
