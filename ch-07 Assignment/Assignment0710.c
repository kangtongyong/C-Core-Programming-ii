/*
	 학번: 202511224
	 이름: 양현인
	 프로그램 명: Assignment0710.c
	 날짜: 2025.10.10
	 프로그램 기능: 3 x 3 행렬의 합을 구하는 프로그램을 작성하시오.
*/

#include <stdio.h>

int Assignment0710(void);
void X(int x[][3], int x_size);
void Y(int y[][3], int y_size);
void XY(int x[][3], int y[][3], int x_size, int y_size);

int main(void)
{
	Assignment0710();

	return 0;
}

int Assignment0710(void)
{
	int x[3][3] = { {10,20,30},{40,50,60},{70,80,90} };
	int x_size = sizeof(x) / sizeof(x[0]);
	int y[3][3] = { {9,8,7},{6,5,4},{3,2,1} };
	int y_size = sizeof(y) / sizeof(y[0]);

	X(x, x_size);
	Y(y, y_size);
	XY(x, y, x_size, y_size);

	return 0;
}

void X(int x[][3], int x_size)
{
	int i, j;

	printf("x 행렬:\n");

	for (i = 0; i < x_size; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf(" %2d ", x[i][j]);
		}
		printf("\n");
	}

	return;
}

void Y(int y[][3], int y_size)
{
	int i, j;

	printf("y 행렬:\n");

	for (i = 0; i < y_size; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf(" %2d ", y[i][j]);
		}
		printf("\n");
	}

	return;
}

void XY(int x[][3], int y[][3], int x_size, int y_size)
{
	int i, j;

	printf("x + y 행렬:\n");

	for (i = 0; i < x_size; i++)
	{
		for (j = 0; j < y_size; j++)
		{
			printf(" %2d ", x[i][j] + y[i][j]);
		}
		printf("\n");
	}

	return;
}