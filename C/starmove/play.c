#include "play.h"
#include "intro.h"

void setCursorPos(int x, int y)
{
	COORD pos = { x,y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

void setCursorVisible(bool enable)
{
	CONSOLE_CURSOR_INFO cursorInfo;
	cursorInfo.bVisible = enable;
	cursorInfo.dwSize = 1;
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursorInfo);
}

void clearStar(int x, int y) 
{
	setCursorPos(x, y);
	printf("  ");  // 별을 지우는 역할 (공백 출력)
}

int playerX = 10;
int playerY = 19;
int starX = 5;
int starY = 2;
int starX2 = 23;
int starY2 = 1;
int starX3 = 12;
int starY3 = 1;
int starX4 = 22;
int starY4 = 1;
int starX5 = 28;
int starY5 = 1;
int starX6 = 15;
int starY6 = 1;
int starX7 = 8;
int starY7 = 1;
int starX8 = 30;
int starY8 = 2;
int playTime = 0;



void play()
{
	setCursorVisible(false);
	while (1)
	{
		// 별 지우기
		clearStar(starX, starY);
		clearStar(starX2, starY2);
		clearStar(starX3, starY3);
		clearStar(starX4, starY4);
		clearStar(starX5, starY5);
		clearStar(starX6, starY6);
		clearStar(starX7, starY7);
		clearStar(starX8, starY8);





		// 별 이동
		starY++;
		starY2++;
		starY3++;
		starY4++;
		starY5++;
		starY6++;
		starY7++;
		starY8++;



		// 별이 바닥에 도달하면 다시 위에서 떨어지도록
		if (starY > 19)
		{
			starY = 1;
			starX = (rand() % 18) * 2 + 2;
		}
		if (starY2 > 19)
		{
			starY2 = 1;
			starX2 = (rand() % 18) * 2 + 2;
		}
		if (starY3 > 19)
		{
			starY3 = 1;
			starX3 = (rand() % 18) * 2 + 2;
		}
		if (starY4 > 19)
		{
			starY4 = 1;
			starX4 = (rand() % 18) * 2 + 2;
		}
		if (starY5 > 19)
		{
			starY5 = 2;
			starX5 = (rand() % 18) * 2 + 2;
		}
		if (starY6 > 19)
		{
			starY6 = 3;
			starX6 = (rand() % 18) * 2 + 2;
		}
		if (starY7 > 19)
		{
			starY7 = 2;
			starX7 = (rand() % 18) * 2 + 2;
		}
		if (starY8 > 19)
		{
			starY8 = 6;
			starX7 = (rand() % 18) * 2 + 2;
		}

		// 별 다시 출력
		setCursorPos(starX, starY);
		printf("★");
		setCursorPos(starX2, starY2);
		printf("★");
		setCursorPos(starX3, starY3);
		printf("★");
		setCursorPos(starX4, starY4);
		printf("★");
		setCursorPos(starX5, starY5);
		printf("★");
		setCursorPos(starX6, starY6);
		printf("★");
		setCursorPos(starX7, starY7);
		printf("★");
		setCursorPos(starX8, starY8);
		printf("★");

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
		}
		setCursorPos(playerX, playerY);
		printf("♠");

		if ((playerX == starX && playerY == starY) || (playerX == starX2 && playerY == starY2))
		{
			setCursorPos(10, 10);
			printf("Game Over!");
			break;
		}
		else if ((playerX == starX3 && playerY == starY3) || (playerX == starX4 && playerY == starY4))
		{
			setCursorPos(10, 10);
			printf("Game Over!");
			break;
		}
		else if ((playerX == starX5 && playerY == starY5) || (playerX == starX6 && playerY == starY6))
		{
			setCursorPos(10, 10);
			printf("Game Over!");
			break;
		}
		else if ((playerX == starX7 && playerY == starY7) || (playerX == starX8 && playerY == starY8))
		{
			setCursorPos(10, 10);
			printf("Game Over!");
			break;
		}
		Sleep(70);

		playTime++;

		int second = playTime % 6000;

		setCursorPos(60, 2);
		printf("점수 : %04d", second);
	}


	// 게임이 종료되지 않도록 Loop 만들기
	
}
	

	 

		