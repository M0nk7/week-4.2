#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>

int main()
{
	char a = 0;
	a = _getch();
	printf("%c\n", a);
	if (a >= 'a' && a <= 'z') printf("%c", a - 32);
	else if (a >= 'A' && a <= 'a') printf("%c", a + 32);
	else printf("error");
	return 0;
}