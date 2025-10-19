/*
	�й�: 202511224
	�̸�: ������
	���α׷� ��: Assignment0712.c
	��¥: 2025.10.10
	���α׷� ���: ����ǥ ���� ���α׷��� �ۼ��Ϸ��� �Ѵ�. ������ ������ ���� �¼��� ��� 10��, ������ �¼����� �Է¹޾� �� �ڸ��� �Ҵ��ϰ�
				   ������ ������ �� �¼��� ���¸� ����Ѵ�. O�̸� ���� ����, X�� ���� �Ұ��� �����Ѵ�. �� �̻� ������ �� ������ ���α׷� ����

*/


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int Assignment0712(void);
void Set(char A[], int A_size);
void PrintSeats(char A[], int A_size);
int GetReservationCount(void);
void ReserveSeats(char A[], int A_size, int count, int* t);


int main(void)
{
	Assignment0712();

	return 0;
}


int Assignment0712(void)
{
	char a[10] = { 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o' };
	int a_size = sizeof(a) / sizeof(a[0]);

	Set(a, a_size);

	return 0;
}



void Set(char A[], int A_size)
{
	// ���� ���� ��ġ
	int t = 0;

	while (1)
	{
		PrintSeats(A, A_size);

		int count = GetReservationCount();
		ReserveSeats(A, A_size, count, &t);

		if (A[A_size - 1] == 'X')
		{
			break;
		}
	}
}



void PrintSeats(char A[], int A_size)
{
	printf("���� �¼�: [ ");

	for (int i = 0; i < A_size; i++)
	{
		printf("%c ", A[i]);
	}
	printf("]\n");
}



int GetReservationCount(void)
{
	int a;

	printf("������ �˼���? ");
	scanf("%d", &a);

	return a;
}



void ReserveSeats(char A[], int A_size, int count, int* t)
{
	for (int j = 0; j < count && *t < A_size; j++)
	{
		if (A[*t] == 'o')
		{
			A[*t] = 'X';
		}

		printf("%d ", *t + 1);
		(*t)++;
	}
	printf("�� �¼��� �����߽��ϴ�.\n");
}
