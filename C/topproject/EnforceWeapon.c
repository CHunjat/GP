#include "EnforceWeapon.h"






void ShowMenu()
{
	printf("1_��ȭ�Ѵ�.\n");
	printf("2_���� ���¸� Ȯ���Ѵ�\n");

	int inputNumber = -1;
	scanf_s("%d", &inputNumber);
	while(getchar() != '\n');

	if (inputNumber == 1)
	{
		// ��� û���� �ؾ��� ���׷��̵� ���
		if (CanUpgrade(UpgardeCost))
		{
			if (CheakRandomFunc(50))
			{
				UpGrade();
			}
			else
			{
				printf("�����Ͽ����ϴ� \n");
			}
		}

		ShowStatus();

	}
	else if (inputNumber == 2)
	{
		//printf("���¸� Ȯ���Ѵ�.\n");
		ShowStatus();
	}
	else 
	{
		printf("�ùٸ� ���� �Է��ϼ���\n");
	}


	if (IsGameClear())
	{
		isClear = true;
	}
	else
	{
		printf("��ǥ ������ �޼����� ���߽��ϴ�.\n");
	}

		printf("��� �����Ϸ��� �ƹ� ��ư�� �Է����ּ���.\n");
    _getch();
	system("cls");
}

void UpGrade()
{
	CurrentLevel++;
	printf(" ��ȭ�� �����߽��ϴ�. \n");
}

void ShowStatus()
{
	printf("���� ���� ���� :%d\n", CurrentLevel);
	// ���� ������ �ݾ�
	printf("���� ������ �ݾ� : %d\n", CurrentMoney);
}

bool IsGameClear()
{
	return CurrentLevel == TargetLevel ? true : false;
	return false;
}
