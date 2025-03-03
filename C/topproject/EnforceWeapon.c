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
		//printf("강화한다.\n");
		UpGrade();
	}
	else if (inputNumber == 2)
	{
		printf("상태를 확인한다.\n");
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
}

void ShowStatus()
{
}

bool IsGameClear()
{
	return CurrentLevel == TargetLevel ? true : false;
	return false;
}
