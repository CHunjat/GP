#include "Upgrade.h"

int weaponLV = 0;
int normalLV = 1;
int AdvancedLV = 0;

int baseAP = 10;
int currentAP = 0;

/* 
* ���׷��̵� �ý��� ����ϴ�.
* ������ ������ ������ ���� ���ݷ��� ������Ų��.
* ����, ���ݷ� ������ ����Ǿ�� �ϴ°�? �ƴѰ�? -> ����Ǿ� �Ѵ�!
* ����, ���ݷ� ������ � ������ ������ �ؾ��ұ�? ���������� ������ �ؾ��Ѵ�. (��, c++������ �ٸ� ������� �Ѵ�, c��� ������ �ٸ���İ���)
* 
* 
*/

void ShowUpgradeMenu()
{
	int normalCost = 100;
	int highCost = 500;
	while (true)
	{
		printf("1_��ȭ�Ѵ�.\n");
		printf("2_�����ü� �̿�\n");
		printf("3_����Ѵ�.\n");
		printf("4_���α׷� ����.\n");


		int inputnumber = 0;

		scanf_s("%d", &inputnumber);
		while (getchar() != '\n');

		if (inputnumber == 1)
		{
			if (usemoney(normalCost))
			{
				WeaponUpgrade();
				printf("�Ϲ� ��ȭ�� �����մϴ�\n");

			}
			//���� ���� ����Ѱ���?
		
		}
		else if (inputnumber == 2)
		{
			//���� ���� ����Ѱ���?
			if (usemoney(highCost))
			{
				AdvancedWeaponUpgrade();
				printf("��� ��ȭ�� �����մϴ�\n");
			}
			

		}
		else if (inputnumber == 3)
		{
			printf("��ȭ�� ����մϴ�\n");
			break;
		}  
		else
		{

			printf("��ȭ�� �����մϴ�\n");
			
		}
	}
}

void WeaponUpgrade()
{
	
	int weight = 5;

	normalLV = normalLV+1;

	currentAP = currentAP + baseAP + weight * weaponLV;

	weaponLV = normalLV + AdvancedLV;

	printf("���� ���ⷹ�� : %d, ���繫����ݷ� : %d\n", weaponLV, currentAP);

}
void AdvancedWeaponUpgrade()
{
	int weight = 50;

	printf("��� ���ü� ��ȭ ����\n");

	AdvancedLV = AdvancedLV + 1;
	currentAP =  currentAP + baseAP + weight * weaponLV;

	weaponLV = normalLV + AdvancedLV;

	printf("��ް�ȭ ���� ���ⷹ�� : %d, ���繫����ݷ� : %d\n", weaponLV, currentAP);
}