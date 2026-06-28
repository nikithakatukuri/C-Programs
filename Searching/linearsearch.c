#include<stdio.h>
int main()
{
    int i,element=0,flag=0,a[50],n;
    printf("Enter number of elements of array: ");
    scanf("%d",&n);
    printf("Enter array elemnts\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter an element to search: ");
        scanf("%d",&element);
    for(i=0;i<n;i++){
        if(element==a[i])
        {
            flag++;
            break;
        }
    }
    if(flag==1)
    {
        printf("The element is found at %dnd position",i+1);

    }
    else
    {
             printf("The element is not found");
   
    }


}
