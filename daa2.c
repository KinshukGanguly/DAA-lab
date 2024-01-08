#include <stdio.h>
#include <stdlib.h>

int main()
{

int n;
printf("Enter the length of array\n");
scanf("%d",&n);
int* a=(int*)malloc(n*4);

printf("Enter elements in ascending order:\n");

int i=0,x,j,flag=0;
for(;i<n;i++)
{

scanf("%d",&a[i]);

}

printf("Enter search value-\n");
scanf("%d",&x);

i=0;j=n-1;

while(i<=j)
{
 mid=(i+j)/2;
 
 if(a[mid]==x)
   {printf("INDEX-%d",mid);
   flag=1;
   break;}
 else if(a[mid]>x)
 {j=mid-1}
 else
 {i=mid+1;}
}//while

if(flag==0)
printf("not found");

}//main
