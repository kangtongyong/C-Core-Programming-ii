/*
	조건부 컴파일

	#if
	{

	}
	#elif
	{

	}
	#else
	{

	}
	#endif


	#ifdef
	{

	}
	#ifndef
	{

	}
	#endif
*/

#include <stdio.h>
#include "point.h"
#include "point.h"
#include "point.h"

int main(int argc, char * argv[])
{

	for (int i = 0; i < argc; i++)
	{
		printf("%s ", argv[i]);
	}
	printf("\n");

	int a1, a2, a3;

	if (argc >= 3)
	{
		int a1 = atoi(argv[1]);
		int a2 = atoi(argv[2]);
		int a3 = atoi(argv[3]);

	}

	int a[4] = { 0 };

	for (int i = 0; i < argc; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");


	if (strcmp(argv[1], "1") == 0)
	{

	}

	printf("Hello, world!\n");

	return 0;
}
