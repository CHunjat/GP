#include "Intro.h"

void IntroMenu()
{
	
	while (1)
	{
		printf("1_ 게임시작\n");
		printf("2_ 게임종료\n");
		

		int inputNumber = -1;
		scanf_s("%d", &inputNumber);
		while (getchar() != '\n');

		 
		if (inputNumber == 1)
		{
			GameLoop();
		}
		else if (inputNumber == 2)
		{

			break;
		}
		else
		{

		}
	}
}
