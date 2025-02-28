#include "Money.h"

// 돈이 충분하면 true : false
bool IsEnoughMoney(int amount)
{
	return CurrentMoney >= amount;
}

bool usemoney(int price)
{
	// if(조건)
	if (IsEnoughMoney(price))
	{
		CurrentMoney = CurrentMoney - price;
		Showinfo();
		return true;
	}
	else
	{
		Showinfo();
		printf("돈이 부족합니다.\n");
		return false;

	}
}
