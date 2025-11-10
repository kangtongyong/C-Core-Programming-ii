#include <stdio.h>
#include <string.h>

typedef struct contact {
	int x;
	int y;
}Point;

void* swap(Point* pp1, Point* pp2);


Point mul10(Point pt);

void* swap(Point* pp1, Point* pp2)
{
	if (pp1 == NULL || pp2 == NULL)
	{
		return NULL;
	}

	Point temp = *pp1;
	*pp1 = *pp2;
	*pp2 = temp;

	return pp1;
}

int test_point()
{
	Point p1 = { 1, 2 };
	Point p2 = { 3, 4 };
	//	구조체 변수 int x, y 를 각각 0으로 초기화
	Point p3 = { 0 };

	//	p2 = p1;

	swap(&p1, &p2);

	//그후 p1의 값을 넣어서 곱한후 다시 p3로 대입
	p3 = mul10(p1);

	return 0;
}

Point mul10(Point pt)
{
	Point pr = { 0 };
	pr.x *= 10;
	pr.y *= 10;

	return pr;
}