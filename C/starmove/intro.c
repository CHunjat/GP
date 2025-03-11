#include "intro.h"

void intro()
{
	while (1)
	{
		
		printf("■■■■■■■■■■■■■■■■■■■■\n");
		printf("■                                    ■\n");
		printf("■                                    ■\n");
		printf("■            별피하기 게임           ■\n");
		printf("■                                    ■\n");
		printf("■                                    ■\n");
		printf("■                                    ■\n");
		printf("■                                    ■\n");
		printf("■                                    ■\n");
		printf("■   1.게임 시작                      ■\n");
		printf("■                                    ■\n");
		printf("■                                    ■\n");
		printf("■                                    ■\n");
		printf("■   2.게임 종료                      ■\n");
		printf("■                                    ■\n");
		printf("■                                    ■\n");
		printf("■                                    ■\n");
		printf("■                                    ■\n");
		printf("■                                    ■\n");
		printf("■                                    ■\n");
		printf("■■■■■■■■■■■■■■■■■■■■\n");

		int inputNumber = -1;
		scanf_s("%d", &inputNumber);
		while (getchar() != '\n');

		if (inputNumber == 1)
		{
			system("cls");
			map();
			return 0;
		}
		else if (inputNumber == 2)
		{
			printf("게임을 종료합니다 \n");
			system("cls");
			exit(0);
		}
		else
		{
			printf("잘못입력되었습니다 다시 입력해주세요\n");
			printf("진행하려면 아무 키를 입력해주세여\n");
			_getch();
			system("cls");
		}
		
	}	
}
