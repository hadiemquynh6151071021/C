#include<stdio.h>
#include<math.h> 
void Nhap(int x[100][100],int &m,int &n)
{
	do{
		printf("\nNap vao m va n: ");
		scanf("%d%d",&m,&n); 
	} while(m<=0||n<=0); 
	for(int i=0;i<m;i++)
		{
			for(int j=0;j<n;j++)
			{
			printf("\nx[%d][%d]= ",i,j);
			scanf("%d",&x[i][j]); 
			}
		 } 
 } 
 void Xuat(int x[100][100],int m,int n)
 {
 	printf("\nMa Tran Vua Nhap la:\n");
	 for(int i=0;i<m;i++)
	 {
	 	for(int j=0;j<n;j++)
		 printf("%d\t", x[i][j]); 
		 printf("\n"); 
	  } 
}
void MaTrixorthogonal(int x[100][100],int m,int n,int b[100][100],int c[100][100])
{
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			b[i][j]=x[i][j]; 
		}
	}
	for(int i=0;i<m;i++)
	{
		int sum=0; 
		for(int j=0;j<n;j++)
		{
			for(int k=0;k<n;k++)
			 {
			 	sum=sum+x[i][k]*b[k][j]; 
			 }
			 c[i][j]=sum; 
			 sum=0; 
		 } 
	 } 
	 int i,j; 
	 for( i=0;i<m;i++)
	 {
	 	for( j=0;j<n;j++)
		 {
		 	if(i==j)
			 {
			 	if(c[i][j]!=1)
				 break; 
			  } 
			  else
			  {
			  	if(c[i][j]!=0)
				  break; 
			   } 
		  }
		  if(j!=m)
		  break; 
	  } 
	  if(i!=m)
	  printf("\nLa ma tran othoronal");
	  else
	  printf("\nKhong phai la ma tran orthoronal"); 
 } 
int main()
{
	int a[100][100],b[100][100],c[100][100];
	int m,n ;
	Nhap(a,m,n);
	Xuat(a,m,n); 
	MaTrixorthogonal(a,m,n,b,c);
	
 } 
