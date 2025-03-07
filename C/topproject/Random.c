#include "Random.h"
#pragma once

// 1 ~ 100의 정수를 반환한다.
int ReturnRandomValue()
{
	srand((unsigned int)time(NULL) * 1000 + clock());

	return (rand() % 100) + 1;

}

bool CheakRandomFunc(int percent) // 70
{
	int randValue = ReturnRandomValue(); // 1 ~ 100  랜덤으로 반환 70보다 작으면 


	if (randValue <= percent)
	{
		printf("성공하였습니다 : %d\n", randValue);
		return true;
	}
	else
	{
		printf("실패하였습니다 : %d\n", randValue);
		return false;
	}

	return false;
}

int ReturnRandomInRange(int min, int max)
{
	srand((unsigned int)time(NULL) * 1000 + Clock());
	return (rand() % (max - min + 1)) + min;
}