#pragma once
#include "Play.h"

int CurrentLevel = 8;
int TargetLevel = 10;
bool isClear = false;

bool isFail = false;


void ShowTitle()
{
	printf("������ �������Դϴ�.............\n");
	printf("=======================================================\n");
	printf("=======================================================\n");
	printf("=======================================================\n");

	printf("            ���Ⱝȭ�ϱ�             \n\n");
}

void ShowManual()
{
	printf("���� ���\n");
	printf("Ű���� �Է� �� ����Ű�� ������ �����Ѵ�.\n");
	printf("�Է� ���� �� �Է��� �ÿ� �缱���� �ؾ��մϴ�.\n\n");

	printf("���� ��ǥ\n");
	printf("���� 10�� �����.\n\n");

	printf("���� �÷��� ���\n");
	printf("1.���ѵ� ���������� ��ǥ�� �޼��ؾ� �մϴ�.\n");
	printf("2.Ư�� ���ⷹ������ ��ȭ �ϰ��� �����մϴ�.\n");
	printf("3.Ư�� �������� ���Ⱑ �ı��˴ϴ�.\n\n");
}

void GameLogic()
{
	while (1)
	{
		ShowMenu();

		if (isClear || isFail)
		{
			break;
		}
		
	}

	if (isClear)
	{
		printf(" ���� Ŭ���� \n");
	}
	if (isFail)
	{
		printf(" ���� ����!! \n");
	}
}

void GameLoop()
{
	
	ShowTitle();
	ShowManual();
	GameLogic();

}
