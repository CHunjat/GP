#include "border.h"
#include <windows.h>
#include <conio.h> // Ű���带 ĥ�� �Է��� �޴� ���
#include <stdlib.h>
#include <stdbool.h>
#include "random.h"

// Ŀ�� : output ����� ����ϴ� ��ġ�� �ȳ����ִ� �ȳ� ��ȣ
 // x,y ��ǥ�� Ŀ���� �ű�� �ʹ�.

void setCursorPos(int x, int y)
{
	COORD pos = { x, y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);


}

// Ŀ���� ����� �ͽ��ϴ�. true=���̴� ���� , false = �Ⱥ��̴� ����
void setCursorVisible(bool enable)
{
	CONSOLE_CURSOR_INFO cursorInfo;
	cursorInfo.bVisible = enable;
	cursorInfo.dwSize = 1;
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursorInfo);
}

//���� ����
// �÷��̾��� ���� ��ġ�� �������ּ���.
// ��ǥ�� ���� ������ ����������.
// setCursorPos << �̿��ؼ� �������� ���ϴ� ��ġ�� �÷��̾ ��ġ�غ�����
// int pos x, y << �÷��̾��� ������ġ

// ���� ����
bool GameOver = true;
int CurrentScore = 0;
int randomX = 6;
int randomY = 9;
int playTime = 0;
int questItemPosX = 0;
int questItemPosY = 0;
bool IsQuest = false;


int main()
{
	//1��° �̽� ��� "   " �� ���ݿ� ũ�Ⱑ �ٸ���. �� " " x2
	ShowBorder();
	CreateRandomSeed();
	/*setCursorPos(randomX, randomY);
	printf("��");*/

	// �÷��̾��� ���� ��ǥ�� �������ִ� ����

	int playerX = 2; // X�� ���� +2 ������ (������ 1ĭ,)
	int playerY2 = 1; // Y�� ����+1�� ������ �Ʒ��� 1ĭ �������� , ���� -1 �� ������ ���� 1ĭ ��������.
	// �÷��̾ ó�� ������ �� �����Ѵ�.
	// �÷��̾ ��輱 �ȿ� �׸��� �ʹ�.

	setCursorPos(playerX, playerY2);
	printf("��"); //���� Ŀ�� ��ġ�� "" �� ����Ѵٴ� �ǹ�
	setCursorVisible(false);

	int inputkey = 0;

	while (1)
	{
		// 1.WAIT INPUTKEY ( Ư�� Ű�� �������� )
		/*if (_kbhit())
		{
			setCursorPos(playerX, playerY2);
			printf("  ");
			if (GetAsyncKeyState(VK_UP) & 0x8000)
			{
				playerY2--;
				if (playerY2 <= 2)
				{
					playerY2 = 1;
				}
			}
			if (GetAsyncKeyState(VK_DOWN) & 0x8000)
			{
				playerY2++;
				if (playerY2 >= 13)
				{
					playerY2 = 12;
				}

			}
			if (GetAsyncKeyState(VK_LEFT) & 0x8000)
			{
				playerX -= 2;
				if (playerX <= 4)
				{
					playerX = 2;
				}
			}
			if (GetAsyncKeyState(VK_RIGHT) & 0x8000)
			{
				playerX += 2;
				if (playerX >= 38)
				{
					playerX = 36;
				}
			}
			else
			{

			}
		}*/
		if (_kbhit())
		{
			setCursorPos(playerX, playerY2);
			printf("  ");

			inputkey = _getch();
			switch (inputkey)
			{
			case 'w': playerY2--;
				if (playerY2 < 1)
					playerY2 = 1;
				break;
			case 's': playerY2++;
				if (playerY2 >= 13)
				{
					playerY2 = 12;
				}
			}
		}
		setCursorPos(playerX, playerY2);
		printf("��");

		// UI �ڵ�
		setCursorPos(60, 0);
		printf("Score");
		setCursorPos(60, 1);
		printf("���� ���� : %d", CurrentScore);

		//�ð��� �����ϴ� �ڵ�
		playTime++;
		int minute = playTime / 60;

		setCursorPos(60, 2);
		printf("�÷��� �ð� : %02d", minute);

		if (IsQuest)
		{
			setCursorPos(60, 1);
			printf("����Ʈ�� Ȱ��ȭ �Ǿ����ϴ�\n");
		}

		setCursorPos(60, 2);
		setCursorPos(60, 3);
		printf("������ǥ: %d %d", playerX, playerY2);
		Sleep(100);

		// 2.��ȭ playerX, playerY ������ȭ��Ų��.
		// 3.�ش� ��ǥ Ŀ���� ��ġ�� �ٲٰ� printf����
		// 4. 
		//break;

		//if(playerx�� playerY�� Ư�� ��ġ �϶� &���� ��� ��������,)
		//if (playerX == randomX && playerY == randomY) //�����۰� �÷��̾��� ��ġ�� ���� ��Ȳ.
		//{
		//	CurrentScore++; // 1. ������ ������.

		//	randomX = ReturnPosX(); // 2. �������� ��ġ�� ����Ǿ�� �Ѵ�. ��ǥ�� �ٲ۴�.
		//	randomY = RetrunPosY();
		//	setCursorPos(randomX, randomY);
		//	printf("��");
		//}

		//if (playerX == questItemPosX && playerY == questItemPosY) //�����۰� �÷��̾��� ��ġ�� ���� ��Ȳ.
		//{
		//	IsQuest = true;
		//}


		//if (CurrentScore == 10)
		//{
		//	break;
		//}

	}
}

// ������ �ٷ� ���� ���� �ʵ��� loop �����
// �ݺ������� ����Ǵ� �κ�