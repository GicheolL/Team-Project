// 포인터 표현 확인하기
#include <stdio.h>

int main(void)
{
	int num = 10;
	int* pnum = &num;

	printf(" %d , %d \n", num, *pnum);

	return 0;

}