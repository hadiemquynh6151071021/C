#include<stdio.h>
void Nhap(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		printf("\nNhap phan tu thu a[%d]=",i);
		scanf("%d",&a[i]); 
	 } 
 } 
 void Xuat(int a[],int n)
 {
 	for(int i=0;i<n;i++)
	 {
	 	printf("\nPhan tu thu a[%d]= %d ",i,a[i]); 
	  } 
}
void Tong(int a[],int n)
{
	float  s=0;
	int dem=0; 
	for(int i=0;i<n;i++)
	{
		s=s+a[i];
		dem++; 
	 } 
	 printf("\nTong cua day vua nhap la %.2f",s);
	 printf("\nTBC cua day la %.2f",s/dem); 
	  
 } 
 int Max(int a[],int n)
 {
 	int max=a[0];
	 for(int i=0;i<n;i++)
	 {
	 	if(a[i]>max)
		 max=a[i]; 
	  } 
	  return max; 
}
int Min(int a[],int n)
{
	int min=a[0]; 
	 for(int i=0;i<n;i++)
	  	{
	  	if(a[i]<min) 
	  	min=a[i]; 
	  }
	  return min; 
 } 
 void ThongKe(int a[],int n,int s)
 {
 	for (int i=0;i<n;i++)
	 {
	 	if(a[i]%2==0 && a[i]<s)
		 printf("\n Cac so thong ke duoc la %d",a[i]); 
	  } 
  } 
int main()
{
	int a[100],n;
	printf("\nNhap so luong phan tu cua mang = ");
	scanf("%d",&n);
	Nhap(a,n);
	Xuat(a,n); 
	Tong(a,n);
	printf("\nGia tri lon nhat va gia tri nho nhat cua day la %d và %d ",Max(a,n),Min(a,n)); 
	int s;
	printf("\nNhap s= ");
	scanf("%d",&s); 
	ThongKe(a,n,s); 
 }
