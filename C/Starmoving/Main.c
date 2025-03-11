#include <stdio.h>
#include <stdbool.h>
#include <conio.h>  // _getch(), kbhit() 사용
#include <stdlib.h> // rand(), srand()
#include <windows.h> // Sleep()
#include <time.h>   // 시간 난수 생성
#include "map.h"

#define STAR_COUNT 7


void setCursorPos(int x, int y)
{
	COORD pos = { x, y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

void setCursorVisible(bool enable)
{
	CONSOLE_CURSOR_INFO cursorInfo;
	cursorInfo.bVisible = enable;
	cursorInfo.dwSize = 1;
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursorInfo);
}

int playerX = 14;
int playerY = 26;
int playTime = 0;
int starX[STAR_COUNT], starY[STAR_COUNT], starX2[STAR_COUNT], starY2[STAR_COUNT];
bool GameOver = false;
bool star[STAR_COUNT];

void instars()
{
	for (int i = 0; i < STAR_COUNT; i++)
	{
		starX[i] = ((rand() % 14) * 2) + 2;
		starY[i] = rand() % 10 && 1;

	}
}

void update()
{
	for (int i = 0; i < STAR_COUNT; i++)
	{
		setCursorPos(starX[i], starY[i]);
		printf("  ");
		fflush(stdout);
		if (i % 2 == 0)
		{
			star[i] = true;
		}

		starY[i]++;
		if (starY[i] > 26)
		{
			starX[i] = (rand() % 18) * 2 + 2;
			starY[i] = 1;
		}
		if (star[i])
		{
			setCursorPos(starX[i], starY[i]);
			printf("★");
		
		}
		

		if (starX[i] == playerX && starY[i] == playerY)
		{
			GameOver == true;
		}
	
	}
}

int main()
{
	srand(time(NULL));
	showmap();
	setCursorPos(playerX, playerY);
	printf("♠");
	setCursorVisible(false);
	
	while (1)
	{
		//instars();
		update();
		if (_kbhit())
		{

			setCursorPos(playerX, playerY);
			printf("  ");

			if (GetAsyncKeyState(VK_LEFT) & 0x8000)  // 좌
			{
				playerX -= 2;
				if (playerX < 2)
				{
					playerX = 2;
				}
			}
			if (GetAsyncKeyState(VK_RIGHT) & 0x8000)  // 우
			{
				playerX += 2;
				if (playerX > 36)
				{
					playerX = 36;
				}
			}
			else
			{
				
			}
	    }
		
		setCursorPos(playerX, playerY);
		printf("♠"); 
		Sleep(90);
		playTime++;
		int minute = playTime % 10000;
		setCursorPos(44, 20);
		printf("현재점수 : %02d", minute);

	}
	
	
}