/*
	학번: 202511224
	이름: 양현인
	프로그램 명: Assignment1018.c
	날짜: 2025.10.11
	프로그램 기능: 플레이리스트 기능을 구현하는 프로그램, 등록된 Song 구조체 배열이 있을 때,
				   전체 곡 목록을 보여주고 사용자로부터 추가할 노래를 번호로 선택,
				   노래를 추가할 때마다 곡 목록과 전체 재생 시간이 얼마인지를 출력하는 프로그램.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

#define S_SIZE 40

typedef struct contact
{
	int count;
	char name[S_SIZE];
	char art[S_SIZE];
	char music[S_SIZE];
	int time;
}Song;

int assignment1018(void);


int main(void)
{
	assignment1018();

	return 0;
}

int assignment1018(void)
{
	Song song[] = {
		{ 1, "thank u, next", "Ariana Grande",  "pop",  208 },
		{ 2, "Attention",  "Charli Puth",  "pop",  211 },
		{ 3, "별 보러 가자",  "박보검",  "ballad",  316 },
		{ 4, "How LOng",  "Charlie Puth",  "pop",  198 },
		{ 5, "I'm Fine",  "방탄소년단",  "hip-hop",  209 },
		{ 6, "봄날",  "방탄소년단",  "hip-hop",  274 },
		{ 7, "Awake",  "방탄소년단",  "ballad",  226 },
		{ 8, "아낙네",  "MINO",  "hip-hop",  241 }
	};

	Song* playlist[5] = { NULL };

	int i, j;
	int answer;
	int count = 0;
	int all_time = 0;

	//노래 목록 출력
	printf("       제목              아티스트              장르           재생시간\n");
	for (i = 0; i < 8; i++)
	{
		printf("%2d:    %-14s    %-18s    %-10s    %4d초\n", song[i].count, song[i].name, song[i].art, song[i].music, song[i].time);
	}
	printf("\n");

	//요규사항 5번을 반복
	for (i = 0; i < 5; i++)
	{
		printf("플레이리스트에 추가할 곡 번호? ");
		scanf("%d", &answer);
		printf("\n");

		if (answer == 0)
		{
			break;
		}

		if (answer >= 1 && answer <= 8)
		{
			playlist[count] = &song[answer - 1];
			all_time += song[answer - 1].time;

			//곡을 몇개 입력 받았는지 카운트
			count++;

			printf("<< 플레이리스트 >>\n");
			//카운트 만큼 반복
			for (j = 0; j < count; j++)
			{
				printf("%-15s          %-15s       %-8s       %d초\n", playlist[j]->name, playlist[j]->art, playlist[j]->music, playlist[j]->time);
			}
			printf("총 재생시간 : %d초\n\n", all_time);

			//5곡을 꽉 채운 경우 출력
			if (i == 4)
			{
				printf("플레이리스트가 꽉 찼습니다. 프로그램을 종료합니다.\n");
			}
		}
		else
		{
			printf("잘못된 곡 번호입니다.\n");
			i--;
		}

	}
	return 0;
}