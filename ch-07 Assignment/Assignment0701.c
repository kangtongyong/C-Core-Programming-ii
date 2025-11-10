/*
   학번: 202511224
   이름: 양현인
   프로그램 명: Assignment0701.c
   날짜: 2025.10.10
   프로그램 기능: 크기가 10인 정수형 배열에 대하여 등차수열로 값을 채우는 프로그램.(첫 번째 항의 값과 공차를 입력받음)
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int Assignment0701(void);
void A(int aa, int bb);

int main(void)
{
	Assignment0701();

	return 0;
}

int Assignment0701(void)
{
	int a = 0, b = 0;

	printf("첫 번째 항? ");
	scanf("%d", &a);
	printf("공차? ");
	scanf("%d", &b);

	A(a, b);

	return 0;
}

void A(int aa, int bb)
{
	int a = aa;
	int i;

	printf("등차수열: %d ", a);

	for (i = 1; i < 10; i++)
	{
		a += bb;

		printf("%d ", a);
	}

	return;
}