#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int test_io(void);


int main(int argc, char* argv[])
{
	printf("Hello world\n");

	fprintf(stdout, "Hello world\n");

	fprintf(stderr, "Hello world\n");

	test_io();
}


#define FNAME "BTS.txt"


int test_io(void)
{
	int x = 0;

	printf("일반 입력값: ");
	int res = fscanf(stdin, "%d", &x);
	fprintf(stdout, "입력값: %d, 반환값: %d\n", x, res);

	FILE* fBTS = NULL;

	fBTS = fopen("C:/dume/BTS.txt", "w");
	if (fBTS == NULL)
	{
		fprintf(stderr, "파일을 열 수 없습니다.\n");
		//	exit(0);
	}
	else
	{
		printf("파일 입력값: ");
		int res = fscanf(stdin, "%d", &x);
		fprintf(stdout, "입력값: %d, 반환값: %d\n", x, res);
		fprintf(fBTS, "입력값: %d, 반환값: %d\n", x, res);
	}

	return 0;
}