#include "Money.h"

// ���� ����ϸ� true : false
bool IsEnoughMoney(int amount)
{
	return CurrentMoney >= amount;
}

bool usemoney(int price)
{
	// if(����)
	if (IsEnoughMoney(price))
	{
		CurrentMoney = CurrentMoney - price;
		Showinfo();
		return true;
	}
	else
	{
		Showinfo();
		printf("���� �����մϴ�.\n");
		return false;

	}
}
