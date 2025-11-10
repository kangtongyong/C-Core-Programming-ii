/*
	학번: 202511224
	이름: 양현인
	프로그램 명: Assignment0813.c
	날짜: 2025.10.11
	프로그램 기능: 크기가  같은 2개의 정수형 배열을 매개변수로 전달받아 두 배열의 원소들의 값을 맞바꾸는
				   swap_array 함수를 작성, 함수를 이용 두 배열의 값을 맞바꾸는 프로그램
*/


#include <stdio.h>
#define SIZE 10

int Assignment0813();
void print_array(int* p1, int* p2);
void swap_array(int* p1, int* p2);

int main()
{
	Assignment0813();

	return 0;
}

int Assignment0813()
{
	int a[SIZE] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19 };
	int b[SIZE] = { 0, 2, 4, 6, 8, 10, 12, 14, 16, 18 };

	int* p1 = a;
	int* p2 = b;

	print_array(p1, p2);

	swap_array(p1, p2);

	printf("<< swap_array 호출 후 >>\n");
	print_array(p1, p2);

	return 0;
}

void print_array(int* p1, int* p2)
{

	printf("a: ");

	for (int i = 0; i < SIZE; i++)
	{
		printf("%2d ", p1[i]);
	}
	printf("\n");


	printf("b: ");

	for (int i = 0; i < SIZE; i++)
	{
		printf("%2d ", p2[i]);
	}
	printf("\n");

	return;
}

void swap_array(int* p1, int* p2)
{
	int temp[SIZE] = { 0 };

	for (int i = 0; i < SIZE; i++)
	{
		temp[i] = p1[i];
		p1[i] = p2[i];
		p2[i] = temp[i];
	}

	return;
}