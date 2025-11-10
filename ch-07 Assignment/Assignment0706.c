/*
	 학번: 202511224
	 이름: 양현인
	 프로그램 명: Assignment0706.c
	 날짜: 2025.10.10
	 프로그램 기능: 크기가 10인 실수형 배열에 대해서 원소들을 역순으로 만드는 프로그램
*/

#include <stdio.h>

int Assignment0706(void);
void A(double arr[], int size);

int main(void)
{
	Assignment0706();
	return 0;
}

int Assignment0706(void)
{
	double arr[10] = { 1.3, 3.1, 4.3, 4.5, 6.7, 2.3, 8.7, 9.5, 2.3, 5.8 };
	int size = sizeof(arr) / sizeof(arr[0]);
	int i;

	printf("배열: ");

	for (i = 0; i < size; i++)
	{
		printf("%.1f ", arr[i]);
	}

	printf("\n");
	A(arr, size);

	return 0;
}


void A(double arr[], int size)
{
	int i;

	printf("역순: ");

	for (i = size - 1; i >= 0; i--)
	{
		printf("%.1f ", arr[i]);
	}

	return;
}