/******************************************************************************
Program to find sume of two numbers

Made it for practice purpose.
*******************************************************************************/
#include<stdio.h>
int main()
{
    int num1,num2,sum;
    printf("Enter two numbers:");
    scanf("%d\n%d",&num1,&num2);
    sum=num1+num2;
    printf("\nSum of two numbers is %d",sum);
    return 0;
}