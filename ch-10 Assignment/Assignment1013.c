/*
	학번: 202511224
	이름: 양현인
	프로그램 명: Assignment1013.c
	날짜: 2025.10.11
	프로그램 기능: 직사각형 정보를 나타내는 Rect 구조체를 정의하시오. 직사각형은 좌하단점과 우상단점으로 구성,
				   점의 좌표는 Point구조체를 이용, 직사각형 정보를 출력하는 print_rect함수를 정의하고 Rect구조체 변수를 선언,
				   직사각형 정보를 입력받고 출력하는 프로그램
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

	printf("직사각형의 좌하단점(x,y)? ");
	scanf("%d %d", &rect.L_B.x, &rect.L_B.y);
	printf("직사각형의 우상단점(x,y)? ");
	scanf("%d %d", &rect.R_T.x, &rect.R_T.y);

	print_rect(&rect);

	return 0;
}

void print_rect(Rect* rect)
{
	printf("[Rect 좌하단점:(%d, %d) 우상단점:(%d, %d)]", rect->L_B.x, rect->L_B.y, rect->R_T.x, rect->R_T.y);

	return;
}