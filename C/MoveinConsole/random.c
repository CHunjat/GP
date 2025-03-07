#include "random.h"

void CreateRandomSeed()
{
	srand((unsigned int)time(NULL) * 1000 + clock());
}

int ReturnPosX()
{   
	// 0 ~ 40 

	// 랜덤 값 + 짝수를 반환해야 한다.
	// 1. 랜덤한 숫자를 뽑는다 = rand() A범위에서 B범위 
	int randValue = rand() % 36 + 1; // 1부터 40까지 나온다.

	return randValue % 2 == 1 ? randValue : randValue + 1;
}

int RetrunPosY()
{
	int randValue = rand() % + 1;
	return randValue;
}
