/*
	�й�: 202511224
	�̸�: ������
	���α׷� ��: Assignment0815.c
	��¥: 2025.10.11
	���α׷� ���: 7���� ���� ���� �ڵ带 �̿�, ������ �迭�� �����ϴ� sort_array �Լ��� ����,
				   ũ�Ⱑ 10�� int�迭�� 0~99������ ������ ������ ä�� ���� �Լ��� ������ ����� ����ϴ� ���α׷�
*/

#include <stdio.h>
#define SIZE 10

int Assignment0815();
void print_array(int* p1);
void sort_array(int* p);

int main()
{
	Assignment0815();

	return 0;
}

int Assignment0815()
{
	int a[SIZE] = { 90, 6, 96, 40, 62, 48, 26, 89, 48, 25 };
	int* p = a;
	// == int *p = &a; == int *p = &a[0];

	printf("���� ��: ");
	print_array(p);

	sort_array(p);

	printf("���� ��: ");
	print_array(p);

	return 0;
}

void print_array(int* p1)
{

	for (int i = 0; i < SIZE; i++)
	{
		printf("%2d ", p1[i]);
	}
	printf("\n");

	return;
}

void sort_array(int* p)
{
	int temp;

	for (int i = 0; i < SIZE; i++)
	{
		for (int j = 0; j < SIZE - 1; j++)
		{

			if (p[j] > p[j+1])
			{
				temp = p[j];
				p[j] = p[j + 1];
				p[j + 1] = temp;
			}

		}
	}

	return;
}