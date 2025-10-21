// 11_q3.c

#include <stdio.h>

void Test()
{
	static int result = 0; // 지역 변수 (충돌?)
	printf("%d ", result++);
}

void main() {
	int i;
	for (i = 0; i < 5; i++) Test(); // 0, 1, 2, 3, 4

	return 0;
}