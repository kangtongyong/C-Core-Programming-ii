 /*
	 �й�: 202511224
	 �̸�: ������
	 ���α׷� ��: Assignment0701.c
	 ��¥: 2025.10.10
	 ���α׷� ���: ũ�Ⱑ 10�� ������ �迭�� ���Ͽ� ���������� ���� ä��� ���α׷�.(ù ��° ���� ���� ������ �Է¹���)
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int Assignment0701(void);
void A(int aa, int bb);

int main(void)
{
	Assignment0701();

	return 0;
}

int Assignment0701(void)
{
	int a = 0, b = 0;

	printf("ù ��° ��? ");
	scanf("%d", &a);
	printf("����? ");
	scanf("%d", &b);

	A(a, b);

	return 0;
}

void A(int aa, int bb)
{
	int a = aa;
	int i;

	printf("��������: %d ", a);

	for (i = 1; i < 10; i++)
	{
		a += bb;

		printf("%d ", a);
	}

	return;
}