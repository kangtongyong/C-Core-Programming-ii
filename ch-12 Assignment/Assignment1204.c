/*
	학번: 202511224
	이름: 양현인
	프로그램 명: Assignment1204.c
	날짜: 2025.11.09
	프로그램 기능: 아이디와 패스워드가 저장된 텍스트 파일을 크기가 10인 LOGIN 구조체 배열로 읽어온 다음, 
	               아이디와 패스워드가 일치하면 "로그인 성공"를 출력하고, 그렇지 않으면 "로그인 실패"를 출력하는 프로그램
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define MAX_USER 10
#define MAX_LEN  100


typedef struct
{
    char ID[MAX_LEN];
    char PW[MAX_LEN];

} LOGIN;


void Assignment1204(void);


int main(void)
{
    Assignment1204();

    return 0;
}


void Assignment1204(void)
{
    FILE* fp;

    LOGIN users[MAX_USER];

    int countuser = 0;

    fp = fopen("password.txt", "r");

    if (fp == NULL)
    {
        printf("없는 파일입니다.\n");
        return;
    }


    for(int findus = 0; findus < MAX_USER; findus++)
    {
        if (fscanf(fp, "%s %s", users[findus].ID, users[findus].PW) != 2)
        {
            break;
        }
        countuser++;
    }
     
    fclose(fp);


    while (1)
    {
        char inputID[MAX_LEN];
        char inputPW[MAX_LEN];
        int findus = 0;

        printf("ID? ");
        scanf("%s", inputID);

        if (strcmp(inputID, ".") == 0)
        {
            break;
        }

        for (findus = 0; findus < countuser; findus++)
        {
            if (strcmp(users[findus].ID, inputID) == 0)
            {
                break;
            }
            
        }

        if (findus == countuser)
        {
            printf("아이디를 찾을 수 없습니다.\n");
            continue;
		}

        printf("Password? ");
        scanf("%s", inputPW);

        if (strcmp(users[findus].PW, inputPW) == 0)
        {
            printf("로그인 성공\n");
        }
        else
        {
            printf("틀린 비밀번호입니다.\n");
        }
    }
}