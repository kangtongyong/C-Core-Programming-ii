/*
	학번: 202511224
	이름: 양현인
	프로그램 명: Assignment0909
	날짜: 2025.10.11
	프로그램 기능: 파일 이름과 확장자를 입ㅂ력ㅇ으로 받아서 확장자를 포함한 파일명을 출력하는 프로그램
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
	printf("파일명? ");
	scanf("%s", p1);

	char ch2[SIZE];
	char* p2 = ch2;
	printf("확장자? ");
	scanf("%s", p2);

	add_string(p1, p2);

	return 0;
}

void add_string(char* p1, char* p2)
{
	strcat(p1, ".");
	strcat(p1, p2);

	printf("전체 파일명: %s", p1);

	return;
}