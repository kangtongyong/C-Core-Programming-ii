/*
	학번: 202511224
	이름: 양현인
	프로그램 명: Assignment1203.c
	날짜: 2025.11.09
	프로그램 기능: 텍스트 파일의 이름을 입력받아서 파일 내의 문자들에 대하여 영문자의 개수를
				   문자별로 세서 출력하는 프로그램
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>
#define MAX_ALPHABET 26


//  입력 예 : readme.txt

int Assignment1203(void);


int main(void)
{
	Assignment1203();

	return 0;
}

int Assignment1203(void)
{
	FILE* file;

	char fi_name[100];
	int counting_num[MAX_ALPHABET] = { 0 };
	int ch;

	printf("파일명? ");
	scanf("%s", fi_name);

	file = fopen(fi_name, "r");

	if (file == NULL)
	{
		printf("없는 파일입니다.\n");
		return -1;
	}

	while (1)
	{
		ch = fgetc(file);

		if (ch == EOF)
			break;

		putchar(ch);

		if (isalpha(ch))
		{
			ch = tolower(ch);
			counting_num[ch - 'a']++;

		}

	}

	fclose(file);


	printf("\n");
	for (int i = 0; i < MAX_ALPHABET; i++)
	{
		if (counting_num[i] == 0)
		{
			continue;
		}

		if (i == 13)
		{
			printf("\n");
		}

		printf("%c:%-4d", 'a' + i, counting_num[i]);
	}
	printf("\n");


	return 0;
}