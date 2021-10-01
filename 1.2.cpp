#include <stdio.h>
#include <math.h>
#include<conio.h>
void NHAP(int a, int b);
void CONG(int a, int b);
void TRU(int a, int b);
void NHAN(int a, int b);
void CHIA(int a, int b, int x);
void LUYTHUA(int a, int b);
void menu(int a, int b, int x, int k, int luachon);
void THOAT();
int main ()
{
	int a,b,x,luachon;
	char k;
	menu(a,b,x,k,luachon);
}
void menu(int a, int b, int x,int luachon, int k)
{
	printf("\t\t MENU\n\n");
	printf("\t\t Nhan 1: thuc hien phep toan cong.\n");
	printf("\t\t Nhan 2: thuc hien phep toan tru.\n");
	printf("\t\t Nhan 3: thuc hien phep toan nhan.\n");
	printf("\t\t Nhan 4: thuc hien phep toan chia.\n");
	printf("\t\t Nhan 6: thoat chuong trinh.\n");
	switch(luachon)
	case 1:
		CONG(a,b);
		menu(a,b,x,k,luachon);
		break;
	case 2:
		TRU(a,b);
		menu(a,b,x,k,luachon);
		break;
	case 3:
		NHAN(a,b);
		menu(a,b,x,k,luachon);
		break;
	case 4:
		CHIA(a,b);
		menu(a,b,x,k,luachon);
		break;
	case 5:
		LUYTHUA(a,b);
		menu(a,b,x,k,luachon);
		break;
	case 6:
		THOAT();
		break;	
}
void NHAP(int a, int b)
{
	printf("Nhap a,b\n");
	scanf("%d%d",&a,&b);
}
void CONG(int a, int b)
{
	NHAP(a,b);
	printf("Gia tri phep cong %d + %d = %d",a,b,a+b);
	menu(a,b,x,k);
}
void TRU(int a, int b)
{
	NHAP(a,b);
	printf("Gia tri phep tru %d - %d = %d",a,b,a-b);
	menu(a,b,x);
}
void NHAN(int a, int b)
{
	NHAP(a,b);
	printf("Gia tri phep nhan %d * %d = %d",a,b,a*b);
	menu(a,b,x);
}
void CHIA(int a, int b)
{
	NHAP(a,b);
	printf("Gia tri phep chia %d + %d = %f",a,b,(float)a+b);
	menu(a,b,x);
}
void LUYTHUA(int a, int b, int x)
{
	NHAP(a,b);
	x=pow(a,b);
	printf("Gia tri phep luy thua %d + %d = %d",a,b,x);
	menu(a,b,x);
}
void THOAT()
{
	char k;
	printf ("Nhan ESC de ket thuc");
	do 
	k=getch;
	while(k!=27);
}
	
}
