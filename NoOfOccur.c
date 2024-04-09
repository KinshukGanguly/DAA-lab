#include<stdio.h>
#include<stdlib.h>

int fst=-1;
int lst=-1;



void first(int*a,int l,int h,int k)
{
	if(l>h)
	 return;
	 
	else
	{int mid=(l+h)/2;
		if(a[mid]==k)
		 {fst=mid;
		  first(a,l,mid-1,k);//seacrhes the half before occurence at mid index
		 }
		else if(a[mid]<k)
		 first(a,mid+1,h,k);
		else if(a[mid]<k)
		 first(a,l,mid-1,k);
		
		
	}
}

void last(int*a,int l,int h,int k)
{
	if(l>h)
	 return;
	 
	else
	{int mid=(l+h)/2;
		if(a[mid]==k)
		 {lst=mid;
		  last(a,mid+1,h,k);//seacrhes the half after occurence at mid index
		 }
		else if(a[mid]<k)
		 last(a,mid+1,h,k);
		else if(a[mid]<k)
		 last(a,l,mid-1,k);
		
		
	}
}


int main()
{
	int a[]={1,2,4,4,4,4,5,5,5,5,5,5,5,5,6};
	int n=sizeof(a)/sizeof(a[0]);
	first(a,0,n-1,5);
	last(a,0,n-1,5);
	
	printf("%d",lst-fst+1);
	
	
}
