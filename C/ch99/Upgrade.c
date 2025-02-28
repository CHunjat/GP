#include "Upgrade.h"

int weaponLV = 0;
int normalLV = 1;
int AdvancedLV = 0;

int baseAP = 10;
int currentAP = 0;

/* 
* 업그레이드 시스템 만듭니다.
* 무기의 레벨과 레벨에 따른 공격력을 증가시킨다.
* 레벨, 공격력 정보가 저장되어야 하는가? 아닌가? -> 저장되야 한다!
* 레벨, 공격력 정보는 어떤 변수를 선언을 해야할까? 전역변수로 선언을 해야한다. (단, c++에서는 다른 방식으로 한다, c언어 에서도 다른방식가능)
* 
* 
*/

void ShowUpgradeMenu()
{
	int normalCost = 100;
	int highCost = 500;
	while (true)
	{
		printf("1_강화한다.\n");
		printf("2_고급재련소 이용\n");
		printf("3_취소한다.\n");
		printf("4_프로그램 종료.\n");


		int inputnumber = 0;

		scanf_s("%d", &inputnumber);
		while (getchar() != '\n');

		if (inputnumber == 1)
		{
			if (usemoney(normalCost))
			{
				WeaponUpgrade();
				printf("일반 강화를 시작합니다\n");

			}
			//현재 돈이 충분한가요?
		
		}
		else if (inputnumber == 2)
		{
			//현재 돈이 충분한가요?
			if (usemoney(highCost))
			{
				AdvancedWeaponUpgrade();
				printf("고급 강화를 시작합니다\n");
			}
			

		}
		else if (inputnumber == 3)
		{
			printf("강화를 취소합니다\n");
			break;
		}  
		else
		{

			printf("강화를 종료합니다\n");
			
		}
	}
}

void WeaponUpgrade()
{
	
	int weight = 5;

	normalLV = normalLV+1;

	currentAP = currentAP + baseAP + weight * weaponLV;

	weaponLV = normalLV + AdvancedLV;

	printf("현재 무기레벨 : %d, 현재무기공격력 : %d\n", weaponLV, currentAP);

}
void AdvancedWeaponUpgrade()
{
	int weight = 50;

	printf("고급 제련소 강화 시작\n");

	AdvancedLV = AdvancedLV + 1;
	currentAP =  currentAP + baseAP + weight * weaponLV;

	weaponLV = normalLV + AdvancedLV;

	printf("고급강화 현재 무기레벨 : %d, 현재무기공격력 : %d\n", weaponLV, currentAP);
}