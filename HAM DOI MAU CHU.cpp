#include<stdio.h>
#include<windows.h>
void SET_COLOR(int color)
{
	WORD wColor;
     

     HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
     CONSOLE_SCREEN_BUFFER_INFO csbi;
     if(GetConsoleScreenBufferInfo(hStdOut, &csbi))
     {
          wColor = (csbi.wAttributes & 0xF0) + (color & 0x0F);
          SetConsoleTextAttribute(hStdOut, wColor);
     }
}
int main ()
{
	char a[10];
	a[1]='HA';
	a[2]='DIEM';
	a[3]='QUYNH';
	SET_COLOR(4);
	for(int i=1;i<=3;i++)
	{
	printf("%c",a[i]);
	}
}

