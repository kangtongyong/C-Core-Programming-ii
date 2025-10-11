/*
	�й�: 202511224
	�̸�: ������
	���α׷� ��: Assignment0804.c
	��¥: 2025.10.11
	���α׷� ���: �迭 ���Ҹ� ����Ű�� �����͸� �̿�, �Ǽ��� �迭�� ����� ���ϴ� ���α׷�
*/

#include <stdio.h>
#define SIZE 10

int Assignment0802();
void pointer_print(double* p);
double Average(double* p);

int main()
{
	Assignment0802();

	return 0;
}

int Assignment0802()
{

	double number[SIZE] = { 0.10, 2.00, 3.40, 5.20, 4.50, 7.80, 9.70, 1.40, 6.60, 7.20 };
	double* p = &number[0];
	//double* p = number;

	pointer_print(p);

	double average = Average(p);
	printf("���: %f\n", average);

	return 0;
}

void pointer_print(double* p)
{
	printf("�迭: ");

	for (int i = 0; i < SIZE; i++)
	{
		printf("%.2f ", *(p + i));
	}
	printf("\n");

	return;
}

double Average(double* p)
{
	double sum  = 0.0;

	for (int i = 0; i < SIZE; i++)
	{
		sum += p[i];
	}

	sum /= SIZE;
	return sum;
}