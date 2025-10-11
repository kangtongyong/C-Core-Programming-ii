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
	int t = 0;

	while (1)
	{
		int i, j;

		printf("현재 좌석: [ ");
		for (i = 0; i < A_size; i++)
			printf("%c ", A[i]);
		printf("]\n");

		int a;
		printf("예메할 죄석수? ");
		scanf("%d", &a);

		/*if (1 == (a != ('o' || 'x')))
			printf("올바른 숫자를 입력해주세요.\n");
		continue;*/
		// 숫자 이외의 무언가를 입력받으면 재입력하라는 코드 = 구현 실패

		for (j = 0; j < a; j++)
		{
			if (A[t] == 'o')
				A[t] = 'X';
			t++;
			printf("%d ", t);
		}
		printf("좌석을 예매했습니다.\n");


		if (A[A_size - 1] == 'X')
			break;
	}

	return;
}