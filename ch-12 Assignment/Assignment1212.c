/*
    학번: 202511224
    이름: 양현인
	프로그램 명: Assignment1212.c
    날짜: 2025.11.09
    프로그램 기능: 11번 프로그램에 연락처 검색이 실패하는 경우 새로운 연락처를 추가하는 기능을 구현
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_CONTACT 100

//  입력 예 : contacts.txt

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
    int member_count = 0;

    if (file != NULL)
    {
        char temp_name[50];
        char temp_phone[20];

        while (fscanf(file, "%s %s", temp_name, temp_phone) == 2)
        {
            member_count++;
        }

        if (member_count == 0)
        {
            printf("연락처가 없습니다.\n");
            fclose(file);
        }
    }

    CONTACT* m_list = (CONTACT*)malloc(sizeof(CONTACT) * (member_count + MAX_CONTACT));
    if (m_list == NULL)
    {
        printf("메모리 할당 실패\n");
        if (file) fclose(file);
        return -1;
    }

    if (file != NULL)
    {
        rewind(file);
        for (int i = 0; i < member_count; i++)
        {
            fscanf(file, "%s %s", m_list[i].name, m_list[i].phone);
        }
        fclose(file);
    }

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
            char choice;
            printf("연락처를 찾을 수 없습니다. 연락처를 등록하시겠습니까(y/n)? ");
            scanf(" %c", &choice);

            if (choice == 'y' || choice == 'Y')
            {
                char phone[20];
                printf("전화번호? ");
                scanf("%s", phone);

                strcpy(m_list[member_count].name, ip_name);
                strcpy(m_list[member_count].phone, phone);
                member_count++;
            }
        }
    }

    file = fopen(fi_name, "w");
    if (file == NULL)
    {
        printf("파일을 열 수 없습니다.\n");
        free(m_list);
        return -1;
    }

    for (int i = 0; i < member_count; i++)
    {
        fprintf(file, "%s %s\n", m_list[i].name, m_list[i].phone);
    }

    fclose(file);

    printf("%s로 %d개의 연락처를 저장했습니다.\n", fi_name, member_count);

    free(m_list);

    return 0;
}
