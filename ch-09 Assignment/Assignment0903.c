/*
	학번: 202511224
	이름: 양현인
	프로그램 명:
	날짜: 2025.
	프로그램 기능:
*/

// 입력어 Lowercase letters will be changed into UPPERCASE LETTERS.

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define SIZE 128

int Assignment0903();


int main()
{
	Assignment0903();

	return 0;
}

int Assignment0903()
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

	for (i = 0; p[i] != '\0'; i++)
	{
		if (islower(p[i]))
		{
			p[i] = toupper(p[i]);
		}
		
		else if (isupper(p[i]))
		{
			p[i] = tolower(p[i]);
		}
	}
	p[i] = '\0';

	printf("변환후: %s\n", p);

	return 0;
}