/*
	학번: 202511224
	이름: 양현인
	프로그램 명: Assignment0804.c
	날짜: 2025.10.11
	프로그램 기능: 배열 원소를 가르키는 포인터를 이용, 실수형 배열의 평균을 구하는 프로그램
*/

#include <stdio.h>
#define SIZE 10

int Assignment0804();
void pointer_print(double* p);
double Average(double* p);

int main()
{
	Assignment0804();

	return 0;
}

int Assignment0804()
{

	double number[SIZE] = { 0.10, 2.00, 3.40, 5.20, 4.50, 7.80, 9.70, 1.40, 6.60, 7.20 };
	double* p = &number[0];
	//double* p = number;

	pointer_print(p);

	double average = Average(p);
	printf("평균: %f\n", average);

	return 0;
}

void pointer_print(double* p)
{
	printf("배열: ");

	for (int i = 0; i < SIZE; i++)
	{
		printf("%.2f ", *(p + i));
	}
	printf("\n");

	return;
}

double Average(double* p)
{
	double sum = 0.0;

	for (int i = 0; i < SIZE; i++)
	{
		sum += p[i];
	}

	sum /= SIZE;
	return sum;
}