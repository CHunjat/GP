#include "Currency.h"

bool CanUpgrade(int cost)
{
	if (cost < CurrentMoney) // 현재 금액이 비용보다 많으면 업글가능
	{
		CurrentMoney -= cost;
		printf("현재 소지금 : %d\n", CurrentMoney);
		return true;
	}
	else
	{
		// isFail 전역 변수 true
		printf("Game Over! 모든 돈을 사용했습니다.\n");
		isFail = true;
	}
}
