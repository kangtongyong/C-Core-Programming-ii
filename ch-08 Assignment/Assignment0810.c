/*
	학번: 202511224
	이름: 양현인
	프로그램 명: Assignment0810.c
	날짜: 2025.10.11
	프로그램 기능: 3 X 3 행렬의 합을 구하는 add_matrix 함수를 작성, 함수를 이용해 행렬의 합을 구하는 프로그램
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
	int* p2 = &y[0][0];

	add_matrix(p1, p2);

	return 0;
}

void add_matrix(int(*p1)[SIZE], int(*p2)[SIZE])
{
	int i, j;

	printf("x 행렬:\n");

	for (i = 0; i < SIZE; i++)
	{
		for (j = 0; j < SIZE; j++)
		{
			printf(" %2d ", p1[i][j]);
		}
		printf("\n");
	}

	printf("y 행렬:\n");

	for (i = 0; i < SIZE; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf(" %2d ", p2[i][j]);
		}
		printf("\n");
	}

	printf("x + y 행렬:\n");

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

EX)		배열 포인터로 매개변수, int (*p1)[SIZE] = x;

EX)		void add_matrix(int(*p1)[SIZE], int(*p2)[SIZE])


p1은 int형 원소를 SIZE개 가진 배열을 가리키는 포인터 == p1은 "행 단위"로 2차원 배열을 바라보는 포인터

x가 만약 int x[SIZE][SIZE]; 라는 2차원 배열이라면

x는 사실상 int (*)[SIZE] 타입으로 첫 번째 행의 주소로 변환 == 따라서 p1은 x[0]을 가리키게 됨

p1은 int 3개짜리 배열을 가리키는 포인터 == 즉, p1은 int[3] 타입(한 행)을 가리키는 포인터


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

성립

or

EX)		void add_matrix(int* p1, int* p2) 일 경우

		p1은 2차원 배열 전체를 1차원 메모리 공간처럼 바라보는 포인터
		==
		C에서 2차원 배열은 실제로는 연속된 1차원 메모리 덩어리
		==
		포인터 연산으로 접근(접근식) == *(p1 + i * SIZE + j)

EX)

void add_matrix(int* p1, int* p2)
{

	printf("x 행렬:\n");

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