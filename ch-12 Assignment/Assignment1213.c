/*
    학번: 202511224
    이름: 양현인
	프로그램 명: Assignment1213.c
    날짜: 2025.11.09
    프로그램 기능: 정수의 개수 N을 입력받아 int가 N개 들어갈 수 있는 동적 메모리를 할당받는다.
				   이 배열에 임의의 정수를 채운 다음 텍스트 파일과 2진 파일로 각각 저장하는 프로그램
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// 입력 예 : 200, a
//          20, b

int Assignment1213(void);

int main(void)
{
	Assignment1213();

    return 0;
}

int Assignment1213(void)
{
    int N;
    char filename[100];
    int* arr;


    printf("정수의 개수? ");
    scanf("%d", &N);


    printf("파일명? ");
    scanf("%s", filename);


    arr = (int*)malloc(sizeof(int) * N);
    if (!arr)
    {
        printf("메모리 할당 실패\n");
        return 1;
    }

    srand((unsigned int)time(NULL));

    for (int i = 0; i < N; i++)
    {
        arr[i] = rand() % 1000;
    }

    char txtname[120];

    sprintf(txtname, "%s.txt", filename);

    FILE* ftxt = fopen(txtname, "w");

    if (!ftxt)
    {
        printf("파일을 열 수 없습니다.\n");
        free(arr);
        return 1;
    }

    for (int i = 0; i < N; i++)
    {
        fprintf(ftxt, "%d ", arr[i]);
    }
    fclose(ftxt);

    char binname[120];

    sprintf(binname, "%s.dat", filename);

    FILE* fbin = fopen(binname, "wb");

    if (!fbin)
    {
        printf("파일을 열 수 없습니다.\n");
        free(arr);
        return 1;
    }

    fwrite(&N, sizeof(int), 1, fbin);
    fwrite(arr, sizeof(int), N, fbin);
    fclose(fbin);

    printf("%s.txt와 %s.dat을 생성했습니다\n", filename, filename);

    free(arr);
	
    return 0;
}