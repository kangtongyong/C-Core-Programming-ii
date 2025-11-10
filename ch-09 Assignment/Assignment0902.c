/*
	학번: 202511224
	이름: 양현인
	프로그램 명: Assignment0902.c
	날짜: 2025.10.11
	프로그램 기능: 문자 배열을 매개변수로 전달받아 공백문자를 모두 제거하는 remove_space 함수 작성,
				   함수를 이용해서 입력받은 문자열의 빈칸을 모두 제거하고 출력하는 프로그램
*/

// 입력어 Certain words in a C program have special meaning, they are keywords.

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define SIZE 128

int Assignment0902();
void remove_space(char* p);

int main()
{
	Assignment0902();

	return 0;
}

int Assignment0902()
{
	int i;
	char ch[SIZE];
	char* p = ch;

	printf("문자열? ");

	fgets(ch, SIZE, stdin);

	if (ch[strlen(ch) - 1] == '\n')
	{
		ch[strlen(ch) - 1] = '\0';
	}


	remove_space(p);


	printf("공백 문자 제거후: ");

	for (i = 0; p[i] != '\0'; i++)
	{
		printf("%c", p[i]);
	}
	printf("\n");

	return 0;
}

void remove_space(char* p)
{
	int i, j;

	for (i = 0, j = 0; p[i] != '\0'; i++)
	{
		//	만약 공백 문자가 아니라면(조건이 전부 거짓이면) == true
		if (p[i] != ' ' && p[i] != '\t' && p[i] != '\n' && p[i] != '\f' && p[i] != '\r' && p[i] != '\v')
		{
			//	공백이 아닌 문자만 j 위치에 앞으로 당겨 대입, 이후 j++ == 다음 위치 증가
			p[j++] = p[i];
		}
	}
	p[j] = '\0';

	return;
}