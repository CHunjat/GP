#include "random.h"

void CreateRandomSeed()
{
	srand((unsigned int)time(NULL) * 1000 + clock());
}

int ReturnPosX()
{   
	// 0 ~ 40 

	// ���� �� + ¦���� ��ȯ�ؾ� �Ѵ�.
	// 1. ������ ���ڸ� �̴´� = rand() A�������� B���� 
	int randValue = rand() % 36 + 1; // 1���� 40���� ���´�.

	return randValue % 2 == 1 ? randValue : randValue + 1;
}

int RetrunPosY()
{
	int randValue = rand() % + 1;
	return randValue;
}
