#include<stdio.h>
#include<math.h>
#include <stdlib.h>
typedef struct
{
	float x,y;
}ToaDo;
typedef struct
{
	int n;
	ToaDo M[100];
}D_ToaDo;
void Nhap(D_ToaDo &M)
{
	printf("Nhap so diem: ");
	scanf("%d",&M.n);
	for (int i=0; i<M.n;i++)
	{
	 	printf ("Nhap toa do M%d\n",i);
	    scanf("%f%f",&M.M[i].x,&M.M[i].y);
	} 
}
void Xuat (D_ToaDo M)
{
	printf ("Day diem vua nhap\n");
	for (int i=0;i<M.n;i++)
	   printf("M%d (%.2f,%.2f)\n",i,M.M[i].x,M.M[i].y);
}
float DuongGapKhuc(D_ToaDo M)
{
	float s=0;
	for (int i=0;i<M.n-1;i++)
	{
		float u= pow((M.M[i+1].x-M.M[i].x),2);
		float v=pow((M.M[i+1].y-M.M[i].y),2);
		s=s+ pow((u+v),1.0/2);
	}
	return s;
}
int DoanCatTrucOy(D_ToaDo M)
{
	int dem=0;
	for (int i=0;i<M.n;i++)
	{
		for (int j=i+1;j<M.n;j++)
		{
			if((M.M[i].x*M.M[j].x)<=0&&(fabs(M.M[i].x)+fabs(M.M[j].x))>0)
			{
				dem++;
				printf("\nDoan M%dM%d cat truc Oy",i,j);
			}
		}
	}
	return dem;	
}
void XaNhat(D_ToaDo M)
{
	float Xmax=M.M[1].x;
	int imax; 
	for(int i=2;i<M.n;i++)
	{
		if(M.M[i].x>Xmax);
		{
			Xmax=M.M[i].x;
			imax=i; 
		}
	}
	printf("\nDiem Cach Xa Truc Hoanh Nhat La: X = %.2f, Y = %.2f ", M.M[imax].x, M.M[imax].y); 
}
int main()
{
	D_ToaDo M;
	Nhap(M);
	Xuat(M);
	printf("Do dai duong gap khuc: %f",DuongGapKhuc(M));
	printf("\nVay co %d doan cat truc Oy",DoanCatTrucOy(M));
	XaNhat(M); 
}
