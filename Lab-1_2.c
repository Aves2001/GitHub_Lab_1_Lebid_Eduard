#include <stdio.h>
#include <conio.h>
#include <windows.h>

int x = 0;
int y = 0;
int x1 = 0;
int y1 = 0;
int x2 = 0;
int y2 = 0;
int x3 = 0;
int y3 = 0;
int a = 0;
int b = 0;
int c = 0;


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

printf("\r\nВведіть координати трикутника\r\n");

    printf("\nx1 = ");
        scanf("%d", &x1);
    
    printf("y1 = ");
        scanf("%d", &y1);

    printf("\nx2 = ");
        scanf("%d", &x2);
    
    printf("y2 = ");
        scanf("%d", &y2);

    printf("\nx3 = ");
        scanf("%d", &x3);
    
    printf("y3 = ");
        scanf("%d", &y3);

printf("\r\nВведіть координати точки\r\n");
    printf("\nx = ");
        scanf("%d", &x);
    
    printf("y = ");
        scanf("%d", &y);
    
	a = (x1 - x) * (y2 - y1) - (x2 - x1) * (y1 - y);
    b = (x2 - x) * (y3 - y2) - (x3 - x2) * (y2 - y);
    c = (x3 - x) * (y1 - y3) - (x1 - x3) * (y3 - y);

if ((a>=0 && b>=0 && c>=0) || (a<=0 && b<=0 && c<=0))
{
	printf("\r\n1\r\n");
}else printf("\r\n0\r\n");
// Вертаєм chcp
    SetConsoleCP(chcp);                
	SetConsoleOutputCP(chcpOut);
//
    getch();
    return 0;
}