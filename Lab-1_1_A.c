#include <stdio.h>
#include <conio.h>
#include <windows.h>

int a = 0;
int b = 0;
int c = 0;
int max = 0;

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

    printf("\na = ");
        scanf("%d", &a);
    
    printf("b = ");
        scanf("%d", &b);
    
    printf("c = ");
        scanf("%d", &c);

max = a;
if (b>max)
{
    max = b;
}

if (c>max)
{
    max = c;
}

printf("\r\nМаксимальне число: %d\n", max);

// Вертаєм chcp
    SetConsoleCP(chcp);                
	SetConsoleOutputCP(chcpOut);
//
    getch();
    return 0;
}