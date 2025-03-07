#include "BORDER.h"
#include <windows.h>
#include <conio.h> 
#include <stdlib.h>
#include <stdbool.h>
void setCursorPos(int x, int y)
{
	COORD pos = { x, y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

bool GameOver = true;
int CurrentScore = 0;
int randomX = 0;
int randomY = 0;
int playTime = 0;
int questItemPosX = 0;
int questItemPosY = 0;
bool IsQuest = false;

void setCursorVisible(bool enable)
{
	CONSOLE_CURSOR_INFO cursorInfo;
	cursorInfo.bVisible = enable;
	cursorInfo.dwSize = 1;
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursorInfo);
}

int main()
{
	BORDER();
	setCursorVisible(false);

	int playerX = 2;
	int playerY = 1;

	setCursorPos(playerX, playerY);
	printf("¡Ú");
	setCursorVisible(false);

	while (1)
	{
		if (_kbhit())
		{

			setCursorPos(playerX, playerY);
			printf("  ");
			if (GetAsyncKeyState(VK_UP) & 0x8000)
			{

				playerY--;
				if (playerY <= 2)
				{
					playerY = 1;
				}
			}
			if (GetAsyncKeyState(VK_DOWN) & 0x8000)
			{
				playerY++;
				if (playerY >= 18);
				{
					playerY = 16;
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
		}
		setCursorPos(playerX, playerY);
		printf("¡Ú");
		printf("x,yÀÇ ÁÂÇ¥¸¦ º¸¿©Áà : %d,%d", playerX, playerY);
		Sleep(50);
	}
	
}


