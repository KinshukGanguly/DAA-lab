#include<stdio.h>
#include<stdlib.h>

int max(int a,int b)
{ return a>b?a:b;
}

int main()
{
	int W=10;
	//weight of knapsack
	int n=4;
	//no of items

	int B[n+1][W+1];

	int items[5]={0,1,2,3,4};
	int p[5]={0,10,42,9,5};
	int w[5]={0,4,19,12,5};
        int i,j;
	for(i=0;i<=n;i++)
	{ for(j=0;j<=W;j++)
	  {  if(i==0||j==0)
	       B[i][j]=0;
	     else
	       { if(w[i]<=j)
	        B[i][j]=max(B[i-1][j] , B[i-1][j-w[i]]+p[i]);      
	         else 
	         B[i][j]=B[i-1][j]; 
	       } 
	  }  
	  //for j
     }//for i	
     
     for(i=0;i<=n;i++)
	{ for(j=0;j<=W;j++)
	   { printf("%d \t",B[i][j]);}
	   printf("\n");
	}
       
	printf("max profit-%d",B[n][W]);  
	
}//end of main
