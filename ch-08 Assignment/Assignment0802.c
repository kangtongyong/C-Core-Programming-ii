/*
	�й�: 202511224
	�̸�: ������
	���α׷� ��: Assignment0802.c
	��¥: 2025.10.11
	���α׷� ���: �迭 ���Ҹ� ����Ű�� �����Ϳ� ������ ������ �̿�, �Ǽ��� �迭�� ��� ���Ҹ� ����ϴ� ���α׷�
*/

#include <stdio.h>
#define SIZE 10

int Assignment0802();
void pointer_print(double* p);

int main()
{
	Assignment0802();

	return 0;
}

int Assignment0802()
{

	double number[SIZE] = { 0.10, 0.20, 0.30, 0.40, 0.50, 0.60, 0.70, 0.80, 0.90, 1.00 };
	double* p = &number[0];
	//double* p = number;

	pointer_print(p);

	return 0;
}

void pointer_print(double* p)
{
	
	for (int i = 0; i < SIZE; i++)
	{
		printf("%.2f ", *(p + i));
	}
	printf("\n");

	return;
}