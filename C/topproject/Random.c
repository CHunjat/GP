#include "Random.h"
#pragma once

// 1 ~ 100�� ������ ��ȯ�Ѵ�.
int ReturnRandomValue()
{
	srand((unsigned int)time(NULL) * 1000 + clock());

	return (rand() % 100) + 1;

}

bool CheakRandomFunc(int percent) // 70
{
	int randValue = ReturnRandomValue(); // 1 ~ 100  �������� ��ȯ 70���� ������ 


	if (randValue <= percent)
	{
		printf("�����Ͽ����ϴ� : %d\n", randValue);
		return true;
	}
	else
	{
		printf("�����Ͽ����ϴ� : %d\n", randValue);
		return false;
	}

	return false;
}

int ReturnRandomInRange(int min, int max)
{
	srand((unsigned int)time(NULL) * 1000 + Clock());
	return (rand() % (max - min + 1)) + min;
}