/*
	학번: 202511224
	이름: 양현인
	프로그램 명: Assignment1011.c
	날짜: 2025.10.11
	프로그램 기능: PRODUCT 구조체 배열을 이용, 주문 수량을 입력받아 결제 금액을 알려주고,
				   제품 재고를 주문 수량만큼 감소, 제품명으로 검색할 수 없거나 찾은 제품의 재고가 주문 수량보다 적으면
				   에러 메시지 출력, 구조체 배열의 크기는 5, 적당한 값으로 초기화, 제품명을 입력받아 검색 후 주문 처리하는 프로그램
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
	// 재고
	int count;
} Product;

//	제품 검색 함수
int find_menu(Product menu[], int size, char* name);

int main(void)
{
	//	구조체 배열 초기화
	Product menu[NUM_PRODUCTS] = {
		{"아메리카노", 3000, M_NUM},
		{"카페라떼", 1500, M_NUM},
		{"플랫화이트", 4000, M_NUM},
		{"모카", 2500, M_NUM},
		{"에스프레소", 5000, M_NUM}
	};

	int order_num;
	char order_menu[M_SIZE];

	// find_menu 함수가 반환한 값: 주문한 제품이 menu 배열에서 몇 번째 위치인지 저장
	int stock;

	while (1)
	{
		printf("주문할 제품명? ");
		scanf("%s", order_menu);

		//	break 조건
		if (strcmp(order_menu, ".") == 0)
		{
			break;
		}

		printf("주문 수량? ");
		scanf("%d", &order_num);


		//	제품 검색
		stock = find_menu(menu, NUM_PRODUCTS, order_menu);

		if (stock == -1)
		{
			printf("에러 메시지.\n");
		}
		else
		{
			if (order_num > menu[stock].count)
			{
				printf("재고가 부족합니다. 현재 재고: %d\n", menu[stock].count);
			}

			else
			{
				menu[stock].count -= order_num;
				int total_price = menu[stock].price * order_num;

				printf("결제 금액: %d  %s 재고: %d\n", total_price, menu[stock].name, menu[stock].count);
			}
		}
	}

	//	종료 후 전체 제품 정보 출력
	for (int i = 0; i < NUM_PRODUCTS; i++)
	{
		printf("[%s %d원 재고: %d]\n", menu[i].name, menu[i].price, menu[i].count);
	}

	return 0;
}

int find_menu(Product menu[], int size, char* name)
{

	for (int i = 0; i < size; i++)
	{
		if (strcmp(menu[i].name, name) == 0)
		{
			// 메뉴 배열에서 제품명을 검색하여 인덱스 반환, 없으면 -1
			return i;
		}
	}

	return -1;
}