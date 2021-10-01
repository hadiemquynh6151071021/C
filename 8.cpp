#include<stdio.h>
#include<string.h>
void KiemTraXau(char s[])
{
	int i,dem=0;
	for(i=0; i<strlen(s); i++)
	{
		if((s[i] >= '0' && s[i] <= '9') or s[i] == 32)
		{
			dem = dem + 1;
		}
	}
	if(dem == strlen(s))
	printf("Xau da nhap toan so.");
	else
	printf("Xau da nhap khong phai toan so.");
}
void dem (char s[])
{
	int i,dem=0;
	for(i=0; i<strlen(s); i++)
	{
		if(s[i] == 32)
		{
			dem = dem + 1;
		}
	}
	printf("\nSo tu cua xau la:%d",dem+1);	
}
void trichchuoitrai(char s[],int a)
{	
	printf("\nNhap so luong ki tu can in:");
	scanf("%d",&a);
	for (int i=0 ; i<a ; i++)
	{
		printf("%c",s[i]);
	}	
}
void trichchuoiphai(char s[],int a)
{
	printf("\nNhap so luong ki tu can in:");
	scanf("%d",&a);
	for(int i=strlen(s)-a;i< strlen(s);i++)
	{
		printf("%c",s[i]);
	}
}
void in(char s[], int m)
{
	printf("\nNhap vi tri ki tu thu m=");
	scanf("%d",&m);
	for(int i=m;i<strlen(s);i++)
	{
		printf("%c",s[i]);	
	}
}
int main()
{
	char xau[50];
	int a,m;
    printf("Nhap xau: ");
    fflush(stdin);
	gets(xau);
	KiemTraXau(xau);
	dem(xau);
	printf("\n\t\tCHUOI BEN TRAI XAU LA");
	trichchuoitrai(xau,a);
	printf("\n\t\tCHUOI BEN PHAI XAU LA");
	trichchuoiphai(xau,a);
	printf("\nDay ki tu tu vi tri thu m la:");
	in(xau,m);
}


