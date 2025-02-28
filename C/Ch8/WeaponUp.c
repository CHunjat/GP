#include "WeaponUp.h"


int weaponLv = 1;
int baseAttackPower = 10;
int weight = 5;
int correntAttackPower = 0;

void Upgrade()
{ 
	while (true)
	{
		int inputNumber = -1;
		scanf_s("%d", &inputNumber);
		while (getchar() != '\n');

		if (inputNumber == 1)
		{
			// character 버퍼 입력 저장 enter키는 입력버퍼에 제외

		   //	// ALT 키 누른상태에서 키보드 화살표 위아래 home키 맨앞 end키 맨뒤
			printf("강화를 진행합니다.\n");

			//	//무기의 레벨
			//	//무기의 기본 공격력
			//	//가중치
			//	//현재공격력

			//	//강화를 무조건 성공하는 케이스로해보자!

			//	//무기 레벨 1상승 시킵니다.
			weaponLv = weaponLv + 1;
			//현재 공격력 = 기본 공격력 + 레벨 * 가중치
			correntAttackPower = baseAttackPower + weaponLv * weight;
			//printf("현재 공격력, 레벨) 출력
			printf("현재 공격력 : %d, 무기의 레벨 %d\n", correntAttackPower, weaponLv);
		}
		else if (inputNumber == 2)
		{
			printf("강화를 취소합니다\n");

		}
		else if (inputNumber == 3)
		{
			printf("프로그램을 종료합니다\n");
			break;

		}
		else
		{
			printf("진행을 하려면 아무 키를 입력해주세요.\n");
			_getch(); // 입력 값을 받아오는 명령어, 입력을 받아오기 전까지는 멈춰있음.

		}
		

	}
}