/*
	학번: 202511224
	이름: 양현인
	프로그램 명: Assignment0905.c
	날짜: 2025.10.11
	프로그램 기능: 대소문자를 구분하지 않고 문자열을 비교하는 strcmp_ic 함수를 작성,
				   lhs > rhs 면 0초과, 같으면 0, 반대면 0미만을 리턴, 함수를 이용하여
				   입력받은 두 문자열을 비교하는 프로그램
*/

// 입력어 how long, How Long

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define SIZE 128

int Assignment0905();
int strcmp_ic(char* p1, char* p2);
void print_result(char* p1, char* p2, int result);

int main()
{
	Assignment0905();

	return 0;
}

int Assignment0905()
{

	char ch1[SIZE];
	char* p1 = ch1;
	char ch2[SIZE];
	char* p2 = ch2;

	printf("첫 번째 문자열 ? ");

	fgets(ch1, SIZE, stdin);

	if (ch1[strlen(ch1) - 1] == '\n')
	{
		ch1[strlen(ch1) - 1] = '\0';
	}

	printf("두 번째 문자열 ? ");

	fgets(ch2, SIZE, stdin);

	if (ch2[strlen(ch2) - 1] == '\n')
	{
		ch2[strlen(ch2) - 1] = '\0';
	}

	int result = strcmp_ic(p1, p2);

	print_result(p1, p2, result);

	return 0;
}


int strcmp_ic(char* p1, char* p2)
{
	int i;
	char cp1, cp2;

	for (i = 0; p1[i] != '\0' && p2[i] != '\0'; i++)
	{
		cp1 = toupper(p1[i]);
		cp2 = toupper(p2[i]);

		if (cp1 > cp2)
		{
			return 1;
		}

		else if (cp1 < cp2)
		{
			return -1;
		}

		else if (cp1 == cp2)
		{
			return 0;
		}
	}

}

void print_result(char* p1, char* p2, int result)
{

	if (result == 1)
	{
		printf("%s가 %s보다 더 큽니다", p1, p2);
	}

	else if (result == 0)
	{
		printf("%s와 %s가 같습니다", p1, p2);
	}

	else if (result == -1)
	{
		printf("%s가 %s보다 더 작습니다", p1, p2);
	}

	else
	{
		printf("오류 발생");
	}

}