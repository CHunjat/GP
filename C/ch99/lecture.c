#include "lecture.h"

void ShowExample()
{
	int number = 10;
	printf("지역변수 number의 값 : %d\n", number);

	LocalFunc(10); // 생성과 소멸이 반복된다.
	LocalFunc(15);
}

void LocalFunc(int a)
{
	int value = 5;
	printf("a의 값에 5를 더한 값: %d\n", a + value);
}



/*
* 전역 변수 || main 함수  || Localfunc 함수
* number    ||  number    || value ,(a)
* 변수가 소멸되는 순서
* 3         ||    2       ||         1
*/
