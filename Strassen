#include<stdio.h>




void Strassen(int r1,int c1,int r2,int c2,int X[][2],int Y[][2])
{  //assuming 4 x 4 matrix
       int i,j;
      
      
       int a=X[0][0];
       int b=X[0][1];
       int c=X[1][0];
       int d=X[1][1]; 
        
        
       int e=Y[0][0];
       int f=Y[0][1];
       int g=Y[1][0];
       int h=Y[1][1];
       
       int ans[r1][c2];
       
       int p1=a*(f-h);
       int p2=(a+b)*h;
       int p3=(c+d)*e;
       int p4=d*(g-e);
       int p5=(a+d)*(e+h);
       int p6=(b-d)*(g+h);
       int p7=(a-c)*(e+f);
       
       ans[0][0]=p6+p5+p4-p7;
       ans[0][1]=p1+p2;
       ans[1][0]=p3+p4;
       ans[1][1]=p1-p3+p5-p7;
       
       printf("MATRIX X\n");
       
      for(i=0;i<2;i++)
      {for(j=0;j<2;j++)
       { printf("%d\t",X[i][j]);
             
       }printf("\n");   
      
      }
      
      printf("MATRIX Y\n");
      
      for(i=0;i<2;i++)
      {for(j=0;j<2;j++)
       { printf("%d\t",Y[i][j]);
             
       }printf("\n");   
      
      }
      
      printf("MATRIX ANS\n");
       
      for(i=0;i<2;i++)
      {for(j=0;j<2;j++)
       { printf("%d\t",ans[i][j]);
             
       }printf("\n");   
      
      }
     
    

}
int main()
{
    int i,j;
    
 int a[2][2]={{1,2},{3,4}};
 int b[2][2]={{5,6},{7,8}};
Strassen(2,2,2,2,a,b);

}

int p(int m)
{
 int k=1;
  while(k<m)
  {k=k*2;}
 return k;
}

int** padded(int r, int c, int a[][c])
{

for(i=0


}
