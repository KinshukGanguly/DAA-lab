#include <stdio.h>
#include <stdlib.h>

int main()
{

int n;
printf("Enter the length of array\n");
scanf("%d",&n);
int* a=(int*)malloc(n*4);

printf("Enter elements\n");

int i=0,x,j;
for(;i<n;i++)
{
scanf("%d",&a[i]);
}

printf("Enter sum value-\n");
scanf("%d",&x);


i=0;j=n-1;
while(i<j)
{
 if(a[i]+a[j]==x)
    {
    printf("%d+%d=%d\n",a[i],a[j],x);
    i++;
    j--;
    }
 else if(a[i]+a[j]<x)
    i++;
  else
    j--;
}//while

}//main
