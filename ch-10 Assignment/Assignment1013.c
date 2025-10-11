/*
	�й�: 202511224
	�̸�: ������
	���α׷� ��: Assignment1013.c
	��¥: 2025.10.11
	���α׷� ���: ���簢�� ������ ��Ÿ���� Rect ����ü�� �����Ͻÿ�. ���簢���� ���ϴ����� ���������� ����,
				   ���� ��ǥ�� Point����ü�� �̿�, ���簢�� ������ ����ϴ� print_rect�Լ��� �����ϰ� Rect����ü ������ ����,
				   ���簢�� ������ �Է¹ް� ����ϴ� ���α׷�
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct contact00
{
	int x;
	int y;
}Point;

typedef struct contact01
{
	Point L_B;
	Point R_T;
}Rect;

int assignment1013(void);
void print_rect(Rect* rect);


int main(void)
{
	assignment1013();

	return 0;
}

int assignment1013(void)
{
	Rect rect;

	printf("���簢���� ���ϴ���(x,y)? ");
	scanf("%d %d", &rect.L_B.x, &rect.L_B.y);
	printf("���簢���� ������(x,y)? ");
	scanf("%d %d", &rect.R_T.x, &rect.R_T.y);

	print_rect(&rect);

	return 0;
}

void print_rect(Rect* rect)
{
	printf("[Rect ���ϴ���:(%d, %d) ������:(%d, %d)]", rect->L_B.x, rect->L_B.y, rect->R_T.x, rect->R_T.y);

	return;
}