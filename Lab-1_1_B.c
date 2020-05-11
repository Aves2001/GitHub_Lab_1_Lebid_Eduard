#include <stdio.h>
#include <conio.h>
#include <windows.h>

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

    printf("\na = ");
        scanf("%d", &a);
    
    printf("b = ");
        scanf("%d", &b);
    
    printf("c = ");
        scanf("%d", &c);

if (a == b && b == c)
    printf("\r\nРівносторонній\r\n");
        else if (a == b || b == c || a == c)
            printf("\r\nРівнобедрений\r\n");
                else printf("\r\nРізносторонній\r\n");

// Вертаєм chcp
    SetConsoleCP(chcp);                
	SetConsoleOutputCP(chcpOut);
//
    getch();
    return 0;
}