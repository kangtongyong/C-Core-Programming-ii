/*
	�й�: 202511224
	�̸�: ������
	���α׷� ��: Assignment1008.c
	��¥: 2025.10.11
	���α׷� ���: Ŀ�Ǽ󿡼� �ǸŵǴ� ��ǰ ������ ��Ÿ���� PRODUCT ����ü�� ����,(�� ��ǰ���� ��ǰ��, ����, ��� ����)
				   ����ü�� �Ű������� ���޹޾� ��ǰ������ ����ϴ� �Լ��� ���� �� ����ü ������ ���� �� ��ǰ��, ���� ��� �Է� �޾�
				   ����ϴ� ���α׷�
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define M_SIZE 20

typedef struct contact
{
	char name[M_SIZE];
	int price;
	int count;
}Product;

int assignment1008(void);
void print_order(Product* menu01);

int main(void)
{
	assignment1008();

	return 0;
}

int assignment1008(void)
{
	Product menu01;

	printf("��ǰ��? ");
	scanf("%s", menu01.name);
	printf("����? ");
	scanf("%d", &menu01.price);
	printf("���? ");
	scanf("%d", &menu01.count);

	print_order(&menu01);


	return 0;
}

void print_order(Product* menu01)
{
	printf("[%s %d�� ���:%d]\n", menu01->name, menu01->price, menu01->count);

	return;
}