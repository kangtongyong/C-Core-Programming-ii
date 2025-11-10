/*
	학번: 202511224
	이름: 양현인
	프로그램 명: Assignment1204.c
	날짜: 2025.11.09
	프로그램 기능: 13번 프로그램을 실행해서 크기가 다른 2진 파일을 2개 생성한 다음 두 파일을 읽어서 하나의
				   int배열을 생성한 다음 정렬 후에 다시 2진 파일로 저장하는 프로그램
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int Assignment1214(void);

int main(void)
{
	Assignment1214();

	return 0;
}


int Assignment1214(void)
{
    char file1[100], file2[100], outfile[100];

    FILE* f1, * f2, * fout;

    int count1, count2, total;
    int* arr1, * arr2, * merged;

    printf("첫 번째 파일명? ");
    scanf("%s", file1);

    f1 = fopen(file1, "rb");
    if (!f1)
    {
        return -1;
    }

    fread(&count1, sizeof(int), 1, f1);
    arr1 = (int*)malloc(sizeof(int) * count1);

    fread(arr1, sizeof(int), count1, f1);
    fclose(f1);

    printf("정수 %d개를 읽었습니다.\n", count1);

    printf("두 번째 파일명? ");
    scanf("%s", file2);

    f2 = fopen(file2, "rb");
    if (!f2)
    {
        free(arr1);
        return -1;
    }

    fread(&count2, sizeof(int), 1, f2);
    arr2 = (int*)malloc(sizeof(int) * count2);

    fread(arr2, sizeof(int), count2, f2);
    fclose(f2);

    printf("정수 %d개를 읽었습니다.\n", count2);

    total = count1 + count2;
    merged = (int*)malloc(sizeof(int) * total);

    for (int i = 0; i < count1; i++)
    {
        merged[i] = arr1[i];
    }

    for (int i = 0; i < count2; i++)
    {
        merged[count1 + i] = arr2[i];
    }

    printf("저장할 파일명? ");
    scanf("%s", outfile);

    fout = fopen(outfile, "wb");
    if (!fout)
    {
        free(arr1);
        free(arr2);
        free(merged);
        return 1;
    }

    fwrite(&total, sizeof(int), 1, fout);
    fwrite(merged, sizeof(int), total, fout);

    fclose(fout);

    printf("정수 %d개를 저장했습니다.\n", total);

    free(arr1);
    free(arr2);
    free(merged);

    return 0;
}