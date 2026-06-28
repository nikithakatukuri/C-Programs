#include<stdio.h>
int main()
{
    int j,i,search,flag=0,a[50],n,temp,mid;
    printf("Enter number of elements of array: ");
    scanf("%d",&n);
    printf("Enter array elemnts\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
        for(i=0;i<n-1;i++)
        {
                for(j=0;j<n-i-1;j++){
                    if(a[j]>a[j+1])
                    {
                        temp=a[j];
                        a[j]=a[j+1];
                        a[j+1]=temp;
                    }
                }

        }
        mid=n/2;
        printf("Enter an elemnt to search:");
        scanf("%d",&search);
        if(search<a[mid]){
                for(i=0;i<mid;i++){
                    if(a[i]==search){
                        flag++;
                        break;
                    }
                }
                if(flag==1)
                {
                    printf("The element is found at a[%d] position",i);
                }
                else
                {
                    printf("The element is not found");
                }
            }
                else{
                    for(i=mid;i<n;i++){
                        if(a[i]==search){
                            flag++;
                            break;
                        }
                    }
                    if(flag==1)
                    {
                        printf("The search element is found at a[%d] position\n",i);
                    }
                    else
                    {
                    printf("The search element is not found");
                    }
                }

        }    

    
