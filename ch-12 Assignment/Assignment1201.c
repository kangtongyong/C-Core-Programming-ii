/*
	학번: 202511224
	이름: 양현인
	프로그램 명: Assignment1201.c
	날짜: 2025.11.09
	프로그램 기능: 텍스트 파일의 이름을 입력받아서 파일의 내용을 라인 번호와 함께 출력하는 프로그램
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>


//  입력 예 : readme.txt

int Assignment1201(void);


int main()
{
	Assignment1201();

	return 0;
}

int Assignment1201(void)
{
    FILE* file;

    char filename[100];
    char line[200];

    printf("파일명? ");
    scanf("%s", filename);

    
    file = fopen(filename, "r");

    if (file == NULL)
    {
        printf("없는 파일입니다.\n");
        return -1;
    }

    int line_index = 0;

    while (1)
    {
        if (fgets(line, sizeof(line), file) == NULL)
        {
            break;
        }

        printf(" %d: %s", line_index + 1, line);
        line_index++;
    }

    fclose(file);

    return 0;
}


//// 파일이 없을 때
//if (file == NULL)
	//{
	//	file = fopen(filename, "w"); // 파일 생성 모드 (쓰기 모드)

	//	// 기본 내용 작성
	//	fprintf(file, "This is text file for input test.\n");
	//	fprintf(file, "This file contains multiple lines of text.\n");
	//	fprintf(file, "The program displays the content of file with line number.\n");

	//	// 파일 닫기
	//	fclose(file);

	//	// 파일을 읽기 모드로 다시 열기
	//	file = fopen(filename, "r");
	//}