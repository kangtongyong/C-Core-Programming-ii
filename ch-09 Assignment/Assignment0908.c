/*
	학번: 202511224
	이름: 양현인
	프로그램 명: Assignment0908.c
	날짜: 2025.10.11
	프로그램 기능: 문자열과 암호 키를 입력받아 시저 암호에 맞추어 암호화된 문자열을 출력하는 프로그램
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define SIZE 128

int Assignment0908();
void change_string(char* p, int k);

int main()
{
	Assignment0908();

	return 0;
}

int Assignment0908()
{
	int k;
	char ch[SIZE];
	char* p = ch;

	while (1)
	{

		printf("문자열? ");

		fgets(ch, SIZE, stdin);

		if (ch[strlen(ch) - 1] == '\n')
		{
			ch[strlen(ch) - 1] = '\0';
		}

		if (p[0] == '.' && p[1] == '\0')
		{
			break;
		}

		printf("암호 키(정수)? ");
		scanf("%d", &k);

		getchar();

		change_string(p, k);

		printf("암호화된 문자열: %s\n", p);
	}

	return 0;
}

void change_string(char* p, int k)
{
	for (int i = 0; p[i] != '\0'; i++)
	{
		char ch = p[i];

		if (ch >= 'A' && ch <= 'Z') {
			p[i] = ((ch - 'A' + k) % 26) + 'A';
		}

		else if (ch >= 'a' && ch <= 'z') {
			p[i] = ((ch - 'a' + k) % 26) + 'a';
		}
	}

	return;
}