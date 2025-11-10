/*
	학번: 202511224
	이름: 양현인
	프로그램 명: Assignment0815.c
	날짜: 2025.10.11
	프로그램 기능: 7장의 선택 정렬 코드를 이용, 정수형 배열을 정렬하는 sort_array 함수를 정의,
				   크기가 10인 int배열에 0~99사이의 임의의 정수를 채운 다음 함수로 정렬한 결과를 출력하는 프로그램
*/

#include <stdio.h>
#define SIZE 10

int Assignment0815();
void print_array(int* p1);
void sort_array(int* p);

int main()
{
	Assignment0815();

	return 0;
}

int Assignment0815()
{
	int a[SIZE] = { 90, 6, 96, 40, 62, 48, 26, 89, 48, 25 };
	int* p = a;
	// == int *p = &a; == int *p = &a[0];

	printf("정렬 전: ");
	print_array(p);

	sort_array(p);

	printf("정렬 후: ");
	print_array(p);

	return 0;
}

void print_array(int* p1)
{

	for (int i = 0; i < SIZE; i++)
	{
		printf("%2d ", p1[i]);
	}
	printf("\n");

	return;
}

void sort_array(int* p)
{
	int temp;

	for (int i = 0; i < SIZE; i++)
	{
		for (int j = 0; j < SIZE - 1; j++)
		{

			if (p[j] > p[j + 1])
			{
				temp = p[j];
				p[j] = p[j + 1];
				p[j + 1] = temp;
			}

		}
	}

	return;
}