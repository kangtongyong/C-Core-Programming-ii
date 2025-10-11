/*
	�й�: 202511224
	�̸�: ������
	���α׷� ��: Assignment0905.c
	��¥: 2025.10.11
	���α׷� ���: ��ҹ��ڸ� �������� �ʰ� ���ڿ��� ���ϴ� strcmp_ic �Լ��� �ۼ�,
				   lhs > rhs �� 0�ʰ�, ������ 0, �ݴ�� 0�̸��� ����, �Լ��� �̿��Ͽ�
				   �Է¹��� �� ���ڿ��� ���ϴ� ���α׷�
*/

// �Է¾� how long, How Long

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

	printf("ù ��° ���ڿ� ? ");

	fgets(ch1, SIZE, stdin);

	if (ch1[strlen(ch1) - 1] == '\n')
	{
		ch1[strlen(ch1) - 1] = '\0';
	}

	printf("�� ��° ���ڿ� ? ");

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
		printf("%s�� %s���� �� Ů�ϴ�", p1, p2);
	}

	else if (result == 0)
	{
		printf("%s�� %s�� �����ϴ�", p1, p2);
	}

	else if (result == -1)
	{
		printf("%s�� %s���� �� �۽��ϴ�", p1, p2);
	}

	else
	{
		printf("���� �߻�!");
	}

}