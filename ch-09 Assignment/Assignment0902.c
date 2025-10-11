/*
	�й�: 202511224
	�̸�: ������
	���α׷� ��: Assignment0902.c
	��¥: 2025.10.11
	���α׷� ���: ���� �迭�� �Ű������� ���޹޾� ���鹮�ڸ� ��� �����ϴ� remove_space �Լ� �ۼ�,
				   �Լ��� �̿��ؼ� �Է¹��� ���ڿ��� ��ĭ�� ��� �����ϰ� ����ϴ� ���α׷�
*/

// �Է¾� Certain words in a C program have special meaning, they are keywords.

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

	printf("���ڿ�? ");

	fgets(ch, SIZE, stdin);

	if (ch[strlen(ch) - 1] == '\n')
	{
		ch[strlen(ch) - 1] = '\0';
	}


	remove_space(p);


	printf("���� ���� ������: ");

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
		//	���� ���� ���ڰ� �ƴ϶��(������ ���� �����̸�) == true 
		if (p[i] != ' ' && p[i] != '\t' && p[i] != '\n' && p[i] != '\f' && p[i] != '\r' && p[i] != '\v')
		{
			//	������ �ƴ� ���ڸ� j ��ġ�� ������ ��� ����, ���� j++ == ���� ��ġ ����
			p[j++] = p[i];
		}
	}
	p[j] = '\0';

	return;
}