/*
	학번: 202511224
	이름: 양현인
	프로그램 명: Assignment1003.c
	날짜: 2025.10.11
	프로그램 기능: 아이디를 입력받은 Login 구조체 배열에서 아이디를 찾은 다음 입력받은 패스워드와
				   등록된 패스워드를 비교해서 같으면 "로그인 성공"이라 출력하는 프로그램
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define L_SIZE 20


typedef struct contact
{
	char name[L_SIZE];
	char password[L_SIZE];
}Login;


int assignment1003(void);
int sameuser(Login* user, char A[], char B[], int Size);

int main(void)
{
	assignment1003();

	return 0;
}


int assignment1003(void)
{
	Login user[] = {
		{"guest", "idontknow"},
		{"Auest", "Adontknow"},
		{"Buest", "Bdontknow"},
		{"Cuest", "Cdontknow"},
		{"Duest", "Ddontknow"},
	};

	char a[20], b[20];
	int size = sizeof(user) / sizeof(user[0]);
	int i;

	// 입력 되어있는 값이 어떤것인지 알려주는 코드(개인적 추가)
	for (i = 0; i < size; i++)
	{
		printf("%s %s\n", user[i].name, user[i].password);
	}

	while (1)
	{
		printf("ID? (.입력시 종료): ");
		scanf("%s", a);

		// 예제에서 .을입력하면 끝나는 것처럼 되어었어 만든 종료 코드(개인적 추가?)
		if (a[0] == '.')
		{
			break;
		}

		printf("PW: ");
		scanf("%s", b);

		int result = sameuser(user, a, b, size);

		printf("%s\n", result ? "로그인 성공" : "로그인 실패");
	}

	return 0;
}

int sameuser(Login* user, char A[], char B[], int Size)
{
	int i;
	for (i = 0; i < Size; i++)
	{
		if (strcmp(user[i].name, A) == 0 && strcmp(user[i].password, B) == 0)
		{
			return 1;
		}
	}
	return 0;
}