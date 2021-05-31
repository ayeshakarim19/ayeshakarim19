#include<stdio.h>
void main()
{
int arr[5];
int i,j,temp;
clrscr();
printf("\nEnter five elements in an array:");
for(i=0;i<5;i++)
{
scanf("%d",&arr[i]);
}
printf("\nEntered values in an array are:");
for(i=0;i<5;i++)
{
printf("%d\n",arr[i]);
}
for(i=0;i<5;i++)
{
 for(j=0;j<5-i-1;j++)
 {
  if(arr[j]>arr[j+1])
{
temp=arr[j];
arr[j]=arr[j+1];
arr[j+1]=temp;
}
}
}
printf("\nSorted data:\n");
for(i=0;i<5;i++)
{
printf("%d\n",arr[i]);
}
}
