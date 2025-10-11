/*
	�й�: 202511224
	�̸�: ������
	���α׷� ��: Assignment0810.c
	��¥: 2025.10.11
	���α׷� ���: 3 X 3 ����� ���� ���ϴ� add_matrix �Լ��� �ۼ�, �Լ��� �̿��� ����� ���� ���ϴ� ���α׷�
*/

#include <stdio.h>
#define SIZE 3

int Assignment0810();
//void add_matrix(int* p1, int*p2);
void add_matrix(int(*p1)[SIZE], int(*p2)[SIZE]);

int main()
{
	Assignment0810();

	return 0;
}

int Assignment0810()
{
	int x[SIZE][SIZE] = { {10,20,30},{40,50,60},{70,80,90} };
	int y[SIZE][SIZE] = { {9,8,7},{6,5,4},{3,2,1} };

	int* p1 = &x[0][0];
	// int* p1 = x[0][0]; == �ּҸ� �ѱ�� ��X, ���� �ѱ�� ��
	int* p2 = &y[0][0];

	add_matrix(p1, p2);

	return 0;
}

void add_matrix(int(*p1)[SIZE], int(*p2)[SIZE])
{
	int i, j;

	printf("x ���:\n");

	for (i = 0; i < SIZE; i++)
	{
		for (j = 0; j < SIZE; j++)
		{
			printf(" %2d ", p1[i][j]);
		}
		printf("\n");
	}

	printf("y ���:\n");

	for (i = 0; i < SIZE; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf(" %2d ", p2[i][j]);
		}
		printf("\n");
	}

	printf("x + y ���:\n");

	for (i = 0; i < SIZE; i++)
	{
		for (j = 0; j < SIZE; j++)
		{
			printf(" %2d ", p1[i][j] + p2[i][j]);
		}
		printf("\n");
	}


	return;
}

/*
 
EX)		�迭 �����ͷ� �Ű�����, int (*p1)[SIZE] = x;

EX)		void add_matrix(int(*p1)[SIZE], int(*p2)[SIZE])


p1�� int�� ���Ҹ� SIZE�� ���� �迭�� ����Ű�� ������ == p1�� "�� ����"�� 2���� �迭�� �ٶ󺸴� ������

x�� ���� int x[SIZE][SIZE]; ��� 2���� �迭�̶��

x�� ��ǻ� int (*)[SIZE] Ÿ������ ù ��° ���� �ּҷ� ��ȯ == ���� p1�� x[0]�� ����Ű�� ��

p1�� int 3��¥�� �迭�� ����Ű�� ������ == ��, p1�� int[3] Ÿ��(�� ��)�� ����Ű�� ������


void print_matrix(int (*p)[SIZE])
{

	for (int i = 0; i < SIZE; i++)
	{

		for (int j = 0; j < SIZE; j++)
		{
			printf("%3d ", p[i][j]);
		}

		printf("\n");
	}
}

����

or

EX)		void add_matrix(int* p1, int* p2) �� ���

		p1�� 2���� �迭 ��ü�� 1���� �޸� ����ó�� �ٶ󺸴� ������
		==
		C���� 2���� �迭�� �����δ� ���ӵ� 1���� �޸� ���
		==
		������ �������� ����(���ٽ�) == *(p1 + i * SIZE + j)

EX)

void add_matrix(int* p1, int* p2)
{

	printf("x ���:\n");

	for (i = 0; i < SIZE; i++)
	{

		for (j = 0; j < SIZE; j++)
		{
			printf("%3d ", *(p1 + i * SIZE + j));
		}

		printf("\n");
	}
}
*/