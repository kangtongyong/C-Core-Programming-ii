/*
	�й�: 202511224
	�̸�: ������
	���α׷� ��: Assignment0909
	��¥: 2025.10.11
	���α׷� ���: ���� �̸��� Ȯ���ڸ� �Ԥ��¤����� �޾Ƽ� Ȯ���ڸ� ������ ���ϸ��� ����ϴ� ���α׷�
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define SIZE 128

int Assignment0909();
void add_string(char* p1, char* p2);

int main()
{
	Assignment0909();

	return 0;
}

int Assignment0909()
{
	char ch1[SIZE];
	char* p1 = ch1;
	printf("���ϸ�? ");
	scanf("%s", p1);

	char ch2[SIZE];
	char* p2 = ch2;
	printf("Ȯ����? ");
	scanf("%s", p2);

	add_string(p1, p2);

	return 0;
}

void add_string(char* p1, char* p2)
{
	strcat(p1, ".");
	strcat(p1, p2);

	printf("��ü ���ϸ�: %s",p1);

	return;
}