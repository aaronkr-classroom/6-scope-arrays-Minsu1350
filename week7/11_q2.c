﻿// 11_q2.c

#include <stdio.h>

int result; // 전역 변수

void Test()
{
	int result = 5; // 지역 변수 (충돌?)
	result++;
}

void main(void) {
	Test();
	printf("result : %d", result); // 0, null (전역 변수 사용)

	return 0;
}