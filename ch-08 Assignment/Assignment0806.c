/*
	�й�: 202511224
	�̸�: ������
	���α׷� ��: Assignment086.c
	��¥: 2025.10.11
	���α׷� ���: ������ �迭�� ���Ͽ� �迭�� ���� �� �ִ�, �ּڰ��� ã��  get_min_max �Լ��� ����
				   ũ�Ⱑ 10�� int �迭�� ���ϴ� �ʱⰪ�� ä�� ���� �Լ��� �ִ�, �ּڰ��� ã�Ƽ� ���
*/

#include <stdio.h>
#define SIZE 10

int Assignment0806();
void pointer_print(int* p);
void get_min_max(int* p);


int main()
{
	Assignment0806();

	return 0;
}

int Assignment0806()
{
	int number[SIZE] = { 23, 45, 62,  12, 99, 83,  23, 50, 72, 37 };
	int* p = number;

	pointer_print(p);

	get_min_max(p);

	return 0;
}

void pointer_print(int* p)
{

	for (int i = 0; i < SIZE; i++)
	{
		printf("%d ", p[i]);
	}
	printf("\n");

	return;
}

void get_min_max(int* p)
{
	int max = p[0];
	int min = p[0];

	for (int i = 0; i < SIZE; i++)
	{

		if (p[i] > max)
		{
			max = p[i];
		}

		if (p[i] < min)
		{
			min = p[i];
		}

	}

	printf("�ִ�: %d\n", max);
	printf("�ּڰ�: %d\n", min);

	return;
}