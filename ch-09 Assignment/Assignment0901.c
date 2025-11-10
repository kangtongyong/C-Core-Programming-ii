/*
	학번: 202511224
	이름: 양현인
	프로그램 명: Assignment0901.c
	날짜: 2025.10.11
	프로그램 기능: 한 줄의 문자열을 입력받아 공백문자(' ', '\n', '\t', '\f', '\r', '\v')의 개수를 세는 프로그램
*/

// 입력어 Certain words in a C program have special meaning, they are keywords.

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define SIZE 128

int Assignment0901();

int main()
{
	Assignment0901();

	return 0;
}

int Assignment0901()
{

	char ch[SIZE];
	char* p = ch;

	printf("문자열? ");


	// fgets(변수명, 사이즈, 표준 입력 스트림 (대부분 키보드 입력) );
	fgets(ch, SIZE, stdin);


	// fgets는 줄바꿈 문자('\n')까지 포함해서 읽음
	// 따라서 사용자가 엔터를 눌러 끝내기 때문에 개수에 포함되는 ('\n')를 제거
	if (ch[strlen(ch) - 1] == '\n')
	{
		ch[strlen(ch) - 1] = '\0';
	}


	int num = 0;


	for (int i = 0; p[i] != '\0'; i++)
	{
		//만약 . ,  , 등등중 하나라도  있다면 1 증가
		/*if (p[i] == ' ' || p[i] == '\t' || p[i] == '\n' || p[i] == '\f' || p[i] == '\r' || p[i] == '\v')
		{
			num += 1;
		}*/

		if ((p[i] == ' '))
		{
			num += 1;
		}

		if (p[i] == '\t')
		{
			num += 1;
		}

		if (p[i] == '\n')
		{
			num += 1;
		}

		if (p[i] == '\f')
		{
			num += 1;
		}

		if (p[i] == '\r')
		{
			num += 1;
		}

		if (p[i] == '\v')
		{
			num += 1;
		}
	}

	printf("공백 문자의 개수 : % d", num);

	return 0;
}