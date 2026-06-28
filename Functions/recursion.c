#include<stdio.h>
int factorial(int n);  //function declaration
int main(){
    int n;
    printf("Enter  a number: ");
    scanf("%d",&n);
    printf("The factorial of %d is %d\n",n,factorial(n));
}
int factorial( int n){
    if(n==0){
        return 1;
    }
    else if(n==1){
        return 1;
    }
    else{
        return n*factorial(n-1);
    }
}
