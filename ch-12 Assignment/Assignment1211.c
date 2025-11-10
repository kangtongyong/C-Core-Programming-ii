/*
	학번: 202511224
	이름: 양현인
	프로그램 명: Assignment1211.c
	날짜: 2025.11.09
	프로그램 기능: CONTACT 구조체를 이용한 연락처 관리 프로그램에 텍스트 파일에서 연락처를 
                   로딩한는 기능을 추가한다. 텍스트 파일에 정해진 형식으로 연락처를 저장하고 
                   이 파일을 읽어서 CONTACT 구조체배열을 생성하는 프로그램.

*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_CONTACT 100

//  입력 예 : mycontact.txt

typedef struct contact {
	char name[MAX_CONTACT];
	char phone[MAX_CONTACT];

} CONTACT;

int Assignment1211(void);

int main()
{
	Assignment1211();

	return 0;
}


int Assignment1211(void)
{
	char fi_name[MAX_CONTACT];

	printf("연락처 파일명? ");
	scanf("%s", fi_name);


	FILE* file = fopen(fi_name, "r");


	if (file == NULL)
	{
		printf("없는 파일입니다.\n");

		return -1;
	}


	char temp_name[50];
	char temp_phone[20];
	int member_count = 0;


	while (fscanf(file, "%s %s", temp_name, temp_phone) == 2)
	{
		member_count++;
	}

	if (member_count == 0)
	{
		printf("연락처가 없습니다.\n");
		fclose(file);
		return -1;
	}

	CONTACT* m_list = (CONTACT*)malloc(sizeof(CONTACT) * member_count);

	if (m_list == NULL)
	{
		printf("메모리 할당 실패\n");
		fclose(file);
		return -1;
	}


	rewind(file);

	for (int i = 0; i < member_count; i++)
	{
		fscanf(file, "%s %s", m_list[i].name, m_list[i].phone);
	}

	fclose(file);


	printf("%d개의 연락처를 로딩했습니다.\n", member_count);


	while (1)
	{
		char ip_name[50];
		int found_count = 0;

		printf("이름(. 입력 시 종료)? ");
		scanf("%s", ip_name);

		if (strcmp(ip_name, ".") == 0)
		{
			break;
		}

		
		for (found_count = 0; found_count < member_count; found_count++)
		{
			if (strcmp(m_list[found_count].name, ip_name) == 0)
			{
				printf("%s의 전화번호 %s로 전화를 겁니다....\n", m_list[found_count].name, m_list[found_count].phone);
				break;
			}
		}

		if (found_count == member_count)
		{
			printf("연락처를 찾을 수 없습니다.\n");
		}
	}

	free(m_list);

	return 0;
}