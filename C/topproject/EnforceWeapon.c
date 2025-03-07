#include "EnforceWeapon.h"






void ShowMenu()
{
	printf("1_강화한다.\n");
	printf("2_현재 상태를 확인한다\n");

	int inputNumber = -1;
	scanf_s("%d", &inputNumber);
	while(getchar() != '\n');

	if (inputNumber == 1)
	{
		// 비용 청구를 해야함 업그레이드 비용
		if (CanUpgrade(UpgardeCost))
		{
			if (CheakRandomFunc(50))
			{
				UpGrade();
			}
			else
			{
				printf("실패하였습니다 \n");
			}
		}

		ShowStatus();

	}
	else if (inputNumber == 2)
	{
		//printf("상태를 확인한다.\n");
		ShowStatus();
	}
	else 
	{
		printf("올바른 값을 입력하세요\n");
	}


	if (IsGameClear())
	{
		isClear = true;
	}
	else
	{
		printf("목표 레벨을 달성하지 못했습니다.\n");
	}

		printf("계속 진행하려면 아무 버튼을 입력해주세요.\n");
    _getch();
	system("cls");
}

void UpGrade()
{
	CurrentLevel++;
	printf(" 강화를 성공했습니다. \n");
}

void ShowStatus()
{
	printf("현재 무기 레벨 :%d\n", CurrentLevel);
	// 현재 보유한 금액
	printf("현재 보유한 금액 : %d\n", CurrentMoney);
}

bool IsGameClear()
{
	return CurrentLevel == TargetLevel ? true : false;
	return false;
}
