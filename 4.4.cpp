#include<stdio.h>
#include<math.h> 
void Nhap(int x[100][100],int &m,int &n)
{
	do
	{
		printf("\nNhap vao m va n: ");
		scanf("%d%d",&m,&n); 
	}
	while(m<=0||n<=0); 
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
void Tong(int x[100][100],int m,int n) 
{
	int sum=0; 
	for(int i=0;i<m;i++)
	{
	 	for(int j=0;j<n;j++)
		{
	 		sum+=x[i][j]; 
		}
	}
	printf("\nTong cua ma tran la : %d",sum); 
}
void Max(int x[100][100],int m,int n)
{
	int max=x[0][0];
	for(int i=0;i<m;i++)
	{
	 	for(int j=0;j<n;j++)
		{
	 		if(x[i][j]>max)
				max=x[i][j];
		}
	}
	printf("\nGia tri lon nhat cua ma tran la %d",max); 
} 
void Tich(int x[100][100],int m,int n)
{
	int tich=1;
	for(int i=0;i<m;i++)
	{
		tich=tich*x[i][0]; 
    }  
	int max=tich;
	for(int i=1;i<n;i++)
	{
		int T=1; 
		for(int j=0;j<m;j++)
		{
			T=T*x[j][i];
			if(T>max)
			{
				max=T;  
			}
		}		 
	}
	printf("\nTich cot lon nhat la:%d",max); 
} 
int  Matrantren(int x[100][100],int m,int n) 
{
	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++)
			if(i>j && x[i][j]!=0)
			return 0; 
		return 1;		
}
int  Matranduoi(int x[100][100],int m,int n) 
{
	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++)
			if(i<j && x[i][j]!=0)
			return 3; 
		return 4;		
}
int main()
{
  	int a[100][100],m,n; 
  	Nhap(a,m,n);
	Xuat(a,m,n); 
	Tong(a,m,n); 
	Max(a,m,n);
	Tich(a,m,n);    
	Matrantren(a,m,n);
	Matranduoi(a,m,n); 
	if(Matrantren(a,m,n)==1)
	printf("\nLa ma tran tam giac tren ");
	else
	printf("\nKhong phai la ma tran tam giac tren");
	Matranduoi(a,m,n); 
	if(Matranduoi(a,m,n)==4)
	printf("\nLa ma tran tam giac duoi ");
	else
	printf("\nKhong phai la ma tran tam giac duoi");	           
} 
