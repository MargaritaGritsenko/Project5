#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
void main()
{
	setlocale(LC_ALL, "RU");
	int S, C;
	printf("¬ведите рассто€ние\n");
	scanf("%d", &S);

	printf("¬ведите стоимость бензина\n");
	scanf("%d", &C);

	printf("»того: %d рублей ", C * S);
}
