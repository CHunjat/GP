#include "border.h"
#include <windows.h>
#include <conio.h> // 키보드를 칠때 입력을 받는 헤더
#include <stdlib.h>
#include <stdbool.h>
#include "random.h"

// 커서 : output 결과를 출력하는 위치를 안내해주는 안내 기호
 // x,y 좌표로 커서를 옮기고 싶다.

void setCursorPos(int x, int y)
{
	COORD pos = { x, y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);


}

// 커서를 숨기고 싶습니다. true=보이는 상태 , false = 안보이는 상태
void setCursorVisible(bool enable)
{
	CONSOLE_CURSOR_INFO cursorInfo;
	cursorInfo.bVisible = enable;
	cursorInfo.dwSize = 1;
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursorInfo);
}

//도전 과제
// 플레이어의 시작 위치를 설정해주세요.
// 좌표에 대한 감각을 익혀보세요.
// setCursorPos << 이용해서 여러분이 원하는 위치에 플레이어를 배치해보세요
// int pos x, y << 플레이어의 현재위치

// 전역 변수
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
	//1번째 이슈 ■■ "   " 의 간격에 크기가 다르다. ■ " " x2
	ShowBorder();
	CreateRandomSeed();
	/*setCursorPos(randomX, randomY);
	printf("☆");*/

	// 플레이어의 현재 좌표를 설명해주는 변수

	int playerX = 2; // X의 값을 +2 했을때 (오른쪽 1칸,)
	int playerY2 = 1; // Y의 값을+1을 했을때 아래로 1칸 내려간다 , 값을 -1 을 했을때 위로 1칸 내려간다.
	// 플레이어가 처음 시작할 때 등장한다.
	// 플레이어를 경계선 안에 그리고 싶다.

	setCursorPos(playerX, playerY2);
	printf("★"); //현재 커서 위치에 "" 를 출력한다는 의미
	setCursorVisible(false);

	int inputkey = 0;

	while (1)
	{
		// 1.WAIT INPUTKEY ( 특성 키를 눌렀을때 )
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
		printf("★");

		// UI 코드
		setCursorPos(60, 0);
		printf("Score");
		setCursorPos(60, 1);
		printf("현재 점수 : %d", CurrentScore);

		//시간을 제어하는 코드
		playTime++;
		int minute = playTime / 60;

		setCursorPos(60, 2);
		printf("플레이 시간 : %02d", minute);

		if (IsQuest)
		{
			setCursorPos(60, 1);
			printf("퀘스트가 활성화 되었습니다\n");
		}

		setCursorPos(60, 2);
		setCursorPos(60, 3);
		printf("현재좌표: %d %d", playerX, playerY2);
		Sleep(100);

		// 2.변화 playerX, playerY 값을변화시킨다.
		// 3.해당 좌표 커서를 위치로 바꾸고 printf햇음
		// 4. 
		//break;

		//if(playerx와 playerY가 특정 위치 일때 &조건 사용 게임종료,)
		//if (playerX == randomX && playerY == randomY) //아이템과 플레이어의 위치가 같은 상황.
		//{
		//	CurrentScore++; // 1. 점수가 오른다.

		//	randomX = ReturnPosX(); // 2. 아이템의 위치가 변경되어야 한다. 좌표를 바꾼다.
		//	randomY = RetrunPosY();
		//	setCursorPos(randomX, randomY);
		//	printf("☆");
		//}

		//if (playerX == questItemPosX && playerY == questItemPosY) //아이템과 플레이어의 위치가 같은 상황.
		//{
		//	IsQuest = true;
		//}


		//if (CurrentScore == 10)
		//{
		//	break;
		//}

	}
}

// 게임이 바로 종료 되지 않도록 loop 만든다
// 반복적으로 실행되는 부분