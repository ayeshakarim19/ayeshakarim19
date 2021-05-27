/******************************************

*******************************************/

#include<stdio.h>
void main()
{
int arr[3][4];
int i,j,sum=0;
clrscr();
for(i=0;i<3;i++)
{
for(j=0;j<4;j++)
{
printf("\nEnter values in [%d][%d] position",i,j);
scanf("%d",&arr[i][j]);
}
}
printf("\nMATRIX ARE\n");
for(i=0;i<3;i++)
{
for(j=0;j<4;j++)
{
printf("%d\t",arr[i][j]);
}
printf("\n");
}
for(i=0;i<3;i++)
{
for(j=0;j<4;j++)
{
sum=sum+arr[i][j];
}
printf("\nSum of each row is %d",sum);
sum=0;
}
}
