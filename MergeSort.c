#include<stdlib.h>

void merge(int a[],int low,int high,int mid)//high an dlow are the indices
{

int i=low;
int j=mid+1;

//mid, high+1 are the two indices where the two subraays end
int c[high-low+1];
while(i<=mid&&j<=high)
{
  if(a[i]>a[j])
 {
   printf("%d %d \n",a[i],a[j])
   c[k++]=a[j++]; 
 }
 
 else if(a[i]<a[j])
 { c[k++]=a[i++];
  }
  
 else
 {c[k++]=a[i++];
  c[k++]=a[j++];
 }
 
}//while

while(i<=mid)
{c[k++]=a[i++];}

while(j<=mid)
{c[k++]=a[j++]; 
 }
 
 }

}//merge
