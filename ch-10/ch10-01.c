//	09-30 수업 내용 

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include "contact.h"


////구조체 typedef 예제1
//struct contact {
//	char name[50];
//	char phone[15];
//	int ringtone;
//};
//
//typedef struct contact Contact;
//Contact kim = { 0 };

////구조체 typedef 예제2
//typedef struct contact {
//	char name[50];
//	char phone[15];
//	int ringtone;
//}Contact;
//
//Contact kim = { 0 };

int main()
{
	Contact lee = { "lee", "010-1111-1111", 1 };

	Contact lee2 = { 0 };


	lee2 = lee;


	// 안됨 --> lee2 = { "lee2", "010-2222-2222", 2 };

	// 대입 하는 법 ?
	strcpy(lee2.name, "lee2");
	strcpy(lee2.phone, "010-2222-2222");
	lee2.ringtone = 2;


	return 0;
}