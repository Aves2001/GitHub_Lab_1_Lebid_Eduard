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

if (a > 0 && b > 0 && c > 0)
    printf("\r\nЗ вказаних трьох відрізків a, b, c, МОЖНА побудувати трикутник\r\n");
        else printf("\r\nЗ вказаних трьох відрізків a, b, c, НЕ можливо побудувати трикутник\r\n");

// Вертаєм chcp
    SetConsoleCP(chcp);                
	SetConsoleOutputCP(chcpOut);
//
    getch();
    return 0;
}