/*
	학번: 202511224
	이름: 양현인
	프로그램 명: Assignment0802.c
	날짜: 2025.10.11
	프로그램 기능: 배열 원소를 가르키는 포인터와 포인터 연산을 이용, 실수형 배열의 모든 원소를 출력하는 프로그램
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