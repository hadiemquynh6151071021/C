#include<stdio.h>
#include<math.h>
void Nhapmang( int a[],int &n)
{
	printf("Nhap n=");
	scanf("%d",&n);
	for(int i=0; i<n;i++)
		{
		printf ("Nhap a[%d]=",i);
		scanf("%d",&a[i]);
	}
}
void Xuatmang( int a[], int n)
{
	printf("\n\tDAY SO LA:");
	for(int i=0;i<n;i++)
	{
	
		printf("%3d",a[i]);
	}
}
void Daonguoc( int a[], int n)
{
	printf("\n\n\tDAY SO SAU KHI DAO LA:");
	for(int i=n-1;i>=0;i--)
	{
	
		printf("%3d",a[i]);
	}
}
void Tong( int a[],int n)
{
	int s=0;
	for(int i=0;i<n;i++)
	{
		s=s+a[i];
	}
	printf("\n\n\tTONG CUA DAY SO LA:%d",s);
}
void Them(int a[],int n)
{
	int x,k;
	printf("\n\tNhap x=");
	scanf("%d",&x);
	printf("\n\tNhap k=");
	scanf("%d",&k);
	a[k]=x;
	printf("\n\tMANG SAU KHI THEM LA:");
	for (int i=0;i<n;i++)
	{
		printf("%3d",a[i]);
	}
}
int ktr(int n)
{
    if(n<2)
        return 0;
    else
	{
        for(int i=2;i<=n/2;i++)
            if(n%i==0)
                return 0;
        return 1;
    }
}
void INSNT(int a[], int n)
{
    printf("\n\tCAC SO NGUYEN TO CO TRONG MANG LA:");
    for(int i=0;i<n;i++)
        if(ktr(a[i]))
            printf("%5d",a[i]);
}
int main(){
	int a[50],n;
	Nhapmang(a,n);
	Xuatmang(a,n);
	Tong(a,n);
	INSNT(a,n);
	Daonguoc(a,n);
	Them(a,n);	
}
