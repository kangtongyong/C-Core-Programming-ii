/*
	�й�: 202511224
	�̸�: ������
	���α׷� ��:
	��¥: 2025.
	���α׷� ���:
*/

// �Է¾� Lowercase letters will be changed into UPPERCASE LETTERS.

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

	printf("���ڿ�? ");

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

	printf("��ȯ��: %s\n", p);

	return 0;
}