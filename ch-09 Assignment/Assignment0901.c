/*
	�й�: 202511224
	�̸�: ������
	���α׷� ��: Assignment0901.c
	��¥: 2025.10.11
	���α׷� ���: �� ���� ���ڿ��� �Է¹޾� ���鹮��(' ', '\n', '\t', '\f', '\r', '\v')�� ������ ���� ���α׷�
*/

// �Է¾� Certain words in a C program have special meaning, they are keywords.

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

	printf("���ڿ�? ");


	// fgets(������, ������, ǥ�� �Է� ��Ʈ�� (��κ� Ű���� �Է�) );
	fgets(ch, SIZE, stdin);


	// fgets�� �ٹٲ� ����('\n')���� �����ؼ� ����
	// ���� ����ڰ� ���͸� ���� ������ ������ ������ ���ԵǴ� ('\n')�� ����
	if (ch[strlen(ch) - 1] == '\n')
	{
		ch[strlen(ch) - 1] = '\0';
	}


	int num = 0;


	for (int i = 0; p[i] != '\0'; i++)
	{
		//���� . ,  , ����� �ϳ���  �ִٸ� 1 ����
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

	printf("���� ������ ����: %d", num);

	return 0;
}