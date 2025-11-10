/*
	학번: 202511224
	이름: 양현인
	프로그램 명: Assignment0712.c
	날짜: 2025.10.10
	프로그램 기능: 기차표 예매 프로그램을 작성하려고 한다. 간단한 구현을 위해 좌석은 모두 10개, 예매할 좌석수를 입력받아 빈 자리를 할당하고
				   예매할 때마다 각 좌석의 상태를 출력한다. O이면 예메 가능, X는 예매 불가를 위미한다. 더 이상 예메할 수 없으면 프로그램 종료
*/


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int Assignment0712(void);
void Set(char A[], int A_size);
void PrintSeats(char A[], int A_size);
int GetReservationCount(void);
void ReserveSeats(char A[], int A_size, int count, int* t);


int main(void)
{
	Assignment0712();

	return 0;
}


int Assignment0712(void)
{
	char a[10] = { 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o' };
	int a_size = sizeof(a) / sizeof(a[0]);

	Set(a, a_size);

	return 0;
}



void Set(char A[], int A_size)
{
	// 현재 예약 위치
	int t = 0;

	while (1)
	{
		PrintSeats(A, A_size);

		int count = GetReservationCount();
		ReserveSeats(A, A_size, count, &t);

		if (A[A_size - 1] == 'X')
		{
			break;
		}
	}
}



void PrintSeats(char A[], int A_size)
{
	printf("현재 좌석: [ ");

	for (int i = 0; i < A_size; i++)
	{
		printf("%c ", A[i]);
	}
	printf("]\n");
}



int GetReservationCount(void)
{
	int a;

	printf("예메할 죄석수? ");
	scanf("%d", &a);

	return a;
}



void ReserveSeats(char A[], int A_size, int count, int* t)
{
	for (int j = 0; j < count && *t < A_size; j++)
	{
		if (A[*t] == 'o')
		{
			A[*t] = 'X';
		}

		printf("%d ", *t + 1);
		(*t)++;
	}
	printf("번 좌석을 예매했습니다.\n");
}