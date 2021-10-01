#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct ThiSinh
{
	char HT[30];
	float SD;
	char T[30];
};
typedef struct ThiSinh TS;
void Nhap(TS *&a, int &n)
{
	printf("\nNhap so thi sinh cua danh sach: ");
	scanf("%d",&n);
	a = (TS*)malloc(n*sizeof(TS));
	for(int i=0; i<n; i++)
	{
		printf("\nNhap thi sinh thu: %d",i+1);
		printf("\nNhap ho ten: ");
		fflush(stdin);
		gets(a[i].HT);
		printf("\nNhap so diem: ");
		scanf("%f",&a[i].SD);
		printf("\nNhap ten truong: ");
		fflush(stdin);
		gets(a[i].T);
	}
}
void Xuat(TS *a, int n)
{
	for(int i=0; i<n; i++)
	{
		printf("\n\nThong tin thi sinh thu %d",i+1);
		printf("\nTen: %s",a[i].HT);
		printf("\nSo diem: %0.1f",a[i].SD);
		printf("\nTen truong: %s",a[i].T);
	}
}
void SapXepTheoDiemGiam(TS *a, int n)
{
	for(int i = 0; i < n-1; i++)
	{
		for(int j = i+1; j < n; j++)
		{
			if(a[i].SD < a[j].SD)
			{
				TS tam = a[i];
				a[i] = a[j];
				a[j] = tam;
			}
		}
	}
}
void SapXepTheoTenTruong(TS *a, int n)
{
	for(int i=0; i<n-1;i++)
	{
		for(int j=i+1;j<n; j++)
		{
			if(strcmp(a[i].T,a[j].T)<0)
			{
				TS t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
	}
}
float ThongKe(TS *a, int n)
{
	SapXepTheoTenTruong(a,n);
	int vt=0;
	float Max=0;
	int chiSo=0;
	for(int i =0; strcmp(a[0].T,a[i].T) == 0; i++)
	{
		Max=Max+a[i].SD;
	}
	for(int i=vt;i<n; i= vt )
	{
		float s=a[vt].SD;
		int dem=1;
		for(int j=vt +1; j<n; j++)
		{
			if(strcmp(a[i].T,a[j].T)==0)
			{
				s = s + a[j].SD;
				dem++;
			}
		}
		if (Max<s)
		{
			Max=s;
			chiSo=vt;
		}
		printf("\nTruong %s co tong diem %0.1f",a[vt].T,s);
		vt=vt+dem;
	}
	printf("\nTruong %s co tong diem lon nhat la %0.1f diem",a[chiSo].T,Max);
}
int main()
{
	int n;
	TS *a;
	Nhap(a,n);
	SapXepTheoDiemGiam(a,n);
	Xuat(a,n);
	ThongKe(a,n);
}
