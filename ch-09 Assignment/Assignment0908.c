/*
	�й�: 202511224
	�̸�: ������
	���α׷� ��: Assignment0908.c
	��¥: 2025.10.11
	���α׷� ���: ���ڿ��� ��ȣ Ű�� �Է¹޾� ���� ��ȣ�� ���߾� ��ȣȭ�� ���ڿ��� ����ϴ� ���α׷�
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
		
		printf("���ڿ�? ");

		fgets(ch, SIZE, stdin);

		if (ch[strlen(ch) - 1] == '\n')
		{
			ch[strlen(ch) - 1] = '\0';
		}

		if (p[0] == '.' && p[1] == '\0')
		{
			break;
		}

		printf("��ȣ Ű(����)? ");
		scanf("%d", &k);

		getchar();

		change_string(p, k);

		printf("��ȣȭ�� ���ڿ�: %s\n", p);
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