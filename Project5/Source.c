#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
void main()
{
	setlocale(LC_ALL, "RU");
	int S, C;
	printf("������� ����������\n");
	scanf("%d", &S);

	printf("������� ��������� �������\n");
	scanf("%d", &C);

	printf("�����: %d ������ ", C * S);
}
