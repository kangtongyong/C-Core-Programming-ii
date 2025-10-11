/*
	�й�: 202511224
	�̸�: ������
	���α׷� ��: Assignment1011.c
	��¥: 2025.10.11
	���α׷� ���: PRODUCT ����ü �迭�� �̿�, �ֹ� ������ �Է¹޾� ���� �ݾ��� �˷��ְ�,
				   ��ǰ ��� �ֹ� ������ŭ ����, ��ǰ������ �˻��� �� ���ų� ã�� ��ǰ�� ��� �ֹ� �������� ������
				   ���� �޽��� ���, ����ü �迭�� ũ��� 5, ������ ������ �ʱ�ȭ, ��ǰ���� �Է¹޾� �˻� �� �ֹ� ó���ϴ� ���α׷�
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

#define M_SIZE 20
#define M_NUM 20
#define NUM_PRODUCTS 5

typedef struct contact
{
	char name[M_SIZE];
	int price;
	// ���
	int count;
} Product;

//	��ǰ �˻� �Լ�
int find_menu(Product menu[], int size, char* name);

int main(void)
{
	//	����ü �迭 �ʱ�ȭ
	Product menu[NUM_PRODUCTS] = {
		{"�Ƹ޸�ī��", 3000, M_NUM},
		{"ī���", 1500, M_NUM},
		{"�÷�ȭ��Ʈ", 4000, M_NUM},
		{"��ī", 2500, M_NUM},
		{"����������", 5000, M_NUM}
	};

	int order_num;
	char order_menu[M_SIZE];

	// find_menu �Լ��� ��ȯ�� ��: �ֹ��� ��ǰ�� menu �迭���� �� ��° ��ġ���� ����
	int stock;

	while (1)
	{
		printf("�ֹ��� ��ǰ��? ");
		scanf("%s", order_menu);

		//	break ����
		if (strcmp(order_menu, ".") == 0)
		{
			break;
		}

		printf("�ֹ� ����? ");
		scanf("%d", &order_num);


		//	��ǰ �˻�
		stock = find_menu(menu, NUM_PRODUCTS, order_menu);

		if (stock == -1)
		{
			printf("���� �޽���.\n");
		}
		else
		{
			if (order_num > menu[stock].count)
			{
				printf("��� �����մϴ�. ���� ���: %d\n", menu[stock].count);
			}

			else
			{
				menu[stock].count -= order_num;
				int total_price = menu[stock].price * order_num;

				printf("���� �ݾ�: %d  %s ���: %d\n", total_price, menu[stock].name, menu[stock].count);
			}
		}
	}

	//	���� �� ��ü ��ǰ ���� ���
	for (int i = 0; i < NUM_PRODUCTS; i++)
	{
		printf("[%s %d�� ���: %d]\n", menu[i].name, menu[i].price, menu[i].count);
	}

	return 0;
}

int find_menu(Product menu[], int size, char* name)
{

	for (int i = 0; i < size; i++)
	{
		if (strcmp(menu[i].name, name) == 0)
		{
			// �޴� �迭���� ��ǰ���� �˻��Ͽ� �ε��� ��ȯ, ������ -1
			return i;
		}
	}

	return -1;
}