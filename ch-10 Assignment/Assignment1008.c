/*
	학번: 202511224
	이름: 양현인
	프로그램 명: Assignment1008.c
	날짜: 2025.10.11
	프로그램 기능: 커피숍에서 판매되는 제품 정보를 나타내는 PRODUCT 구초체를 정의,(각 제품별로 제품명, 가격, 재고를 저장)
				   구조체를 매개변수로 전달받아 제품정보를 출력하는 함수를 정의 및 구조체 변수를 선언 후 제품명, 가격 재고를 입력 받아
				   출력하는 프로그램
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

	printf("제품명? ");
	scanf("%s", menu01.name);
	printf("가격? ");
	scanf("%d", &menu01.price);
	printf("재고? ");
	scanf("%d", &menu01.count);

	print_order(&menu01);


	return 0;
}

void print_order(Product* menu01)
{
	printf("[%s %d원 재고:%d]\n", menu01->name, menu01->price, menu01->count);

	return;
}