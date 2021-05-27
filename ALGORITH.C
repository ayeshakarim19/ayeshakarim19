#include<stdio.h>
#include<conio.h>
void main()
{
int a,b;
int add,sub,mult,div,rem;
printf("\nMain Menu\n");
printf("-------------");
printf("\n1.Addition\n");
printf("\n2.Substraction\n");
printf("\n3.Multiplication\n");
printf("\n4.Division\n");
printf("\n5.Remainder\n");
printf("--------------");
printf("\nEnter first number:");
scanf("%d",&a);
printf("\nEnter second number:");
scanf("%d",&b);
add=a+=b;
printf("\nAddition:%d",add);
sub=a-=b;
printf("\nSubtract:%d",sub);
mult=a*=b;
printf("\nMultiply:%d",mult);
div=a/=b;
printf("\nDivide:%d",div);
rem=a%=b;
printf("\nRemainder:%d",rem);
getch();
}