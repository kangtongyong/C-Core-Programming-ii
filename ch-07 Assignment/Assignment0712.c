 /*
	 �й�: 202511224
	 �̸�: ������
	 ���α׷� ��: Assignment0712.c
	 ��¥: 2025.10.10
	 ���α׷� ���: ����ǥ ���� ���α׷��� �ۼ��Ϸ��� �Ѵ�. ������ ������ ���� �¼��� ��� 10��, ������ �¼����� �Է¹޾� �� �ڸ��� �Ҵ��ϰ�
					������ ������ �� �¼��� ���¸� ����Ѵ�. O�̸� ���� ����, X�� ���� �Ұ��� �����Ѵ�. �� �̻� ������ �� ������ ���α׷� ����

 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int Assignment0712(void);
void Set(char A[], int A_size);

int main(void)
{
	Assignment0712();

	return 0;
}

int Assignment0712(void)
{
	char a[10] = { 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o' };
	int a_size = sizeof(a) / sizeof(a[0]);

	Set(a, a_size);

	return 0;
}

void Set(char A[], int A_size)
{
	int t = 0;

	while (1)
	{
		int i, j;

		printf("���� �¼�: [ ");
		for (i = 0; i < A_size; i++)
			printf("%c ", A[i]);
		printf("]\n");

		int a;
		printf("������ �˼���? ");
		scanf("%d", &a);

		/*if (1 == (a != ('o' || 'x')))
			printf("�ùٸ� ���ڸ� �Է����ּ���.\n");
		continue;*/
		// ���� �̿��� ���𰡸� �Է¹����� ���Է��϶�� �ڵ� = ���� ����

		for (j = 0; j < a; j++)
		{
			if (A[t] == 'o')
				A[t] = 'X';
			t++;
			printf("%d ", t);
		}
		printf("�¼��� �����߽��ϴ�.\n");


		if (A[A_size - 1] == 'X')
			break;
	}

	return;
}