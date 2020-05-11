#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <windows.h>

int a = 0;
int b = 0;
int sa = 0;
int sg = 0;

int chcp, chcpOut = 0;
int main(void)
{
// память chcp
	chcp = GetConsoleCP();
	chcpOut = GetConsoleOutputCP();

// UTF-8
	SetConsoleCP(65001);                
	SetConsoleOutputCP(65001);
//
    printf("a = ", a);
    scanf ("%d", &a);
    printf("b = ");
    scanf ("%d", &b);
    int sa = a+b;
    int sa1 = sa/2;
    int sg = sqrt(a*b);
    printf("\r\nСереднє арифметичне = %d \r\nСереднє геометричне = %d\r\n", sa1, sg);

// Вертаєм chcp
    SetConsoleCP(chcp);                
	SetConsoleOutputCP(chcpOut);
//
    getch();
    return 0;
}