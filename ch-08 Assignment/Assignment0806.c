/*
	학번: 202511224
	이름: 양현인
	프로그램 명: Assignment0806.c
	날짜: 2025.10.11
	프로그램 기능: 정수형 배열에 대하여 배열의 원소 중 최댓값, 최솟값을 찾는  get_min_max 함수를 정의
				   크기가 10인 int 배열에 원하는 초기값을 채운 다음 함수로 최댓값, 최솟값을 찾아서 출력
*/

#include <stdio.h>
#define SIZE 10

int Assignment0806();
void pointer_print(int* p);
void get_min_max(int* p);


int main()
{
	Assignment0806();

	return 0;
}

int Assignment0806()
{
	int number[SIZE] = { 23, 45, 62,  12, 99, 83,  23, 50, 72, 37 };
	int* p = number;

	pointer_print(p);

	get_min_max(p);

	return 0;
}

void pointer_print(int* p)
{

	for (int i = 0; i < SIZE; i++)
	{
		printf("%d ", p[i]);
	}
	printf("\n");

	return;
}

void get_min_max(int* p)
{
	int max = p[0];
	int min = p[0];

	for (int i = 0; i < SIZE; i++)
	{

		if (p[i] > max)
		{
			max = p[i];
		}

		if (p[i] < min)
		{
			min = p[i];
		}

	}

	printf("최댓값: %d\n", max);
	printf("최솟값: %d\n", min);

	return;
}