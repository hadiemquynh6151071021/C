#include <stdio.h>
#include <math.h>
void Nhapdathuc(float P[],int &n)
{
	printf("Nhap bac da thuc n=");
	scanf("%d",&n);
	for (int i=n;i>=0;i--)
	{
		printf("Nhap a*x^%.1d=",i);
		scanf("%f",&P[i]);
	}
}
void Xuatdathuc(float P[], int n)
{	printf("\tDA THUC LA:");
	for (int i=n;i>0;i--)
		printf("%.1fx^%d + ",P[i],i);
	printf("%.1f\n",P[0]);
}
float GT(float P[],int n,float x)
{
	float gt=0;
	printf("\nNhap gia tri cua x = ");
	scanf("%f",&x);
	for (int i=n;i>=0;i--)
	{
		gt=gt+P[i]*pow(x,i);		
	}
	return gt;
}
int main()
{
	float P[50],Q[50],kq1,kq2;
	int x1,x2,n,m;
	Nhapdathuc(P,n);
	Nhapdathuc(Q,m);
	Xuatdathuc(P,n);
	Xuatdathuc(Q,m);
	kq1=GT(P,n,x1);
	printf("GT bieu thuc P tai x la %.1f",kq1);
	kq2=GT(Q,m,x2);
	printf("GT bieu thuc P tai x la %.1f",kq2);
	printf("\n\n\tTONG HAI BIEU THUC LA %.1f",kq1+kq2);
	printf("\n\n\tHIEU HAI BIEU THUC LA %.1f",kq1-kq2);
	printf("\n\n\tTICH HAI BIEU THUC LA %.1f",kq1*kq2);
	printf("\n\n\tTHUONG HAI BIEU THUC LA %.1f",kq1/kq2);
	printf("\n\n\tDAO HAM BIEU THUC P LA:");
	for(int i=n;i>1;i--)
	{
		printf("%.1f*x^%d + ",P[i]*i,i-1);
	}
	printf("%.1f",P[1]);
	printf("\n\n\tDAO HAM BIEU THUC Q LA:");
	for(int i=m;i>1;i--)
	{
		printf("%.1f*x^%d + ",Q[i]*i,i-1);
	}
	printf("%.1f",Q[1]);
}
