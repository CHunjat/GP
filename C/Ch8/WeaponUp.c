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
			// character ���� �Է� ���� enterŰ�� �Է¹��ۿ� ����

		   //	// ALT Ű �������¿��� Ű���� ȭ��ǥ ���Ʒ� homeŰ �Ǿ� endŰ �ǵ�
			printf("��ȭ�� �����մϴ�.\n");

			//	//������ ����
			//	//������ �⺻ ���ݷ�
			//	//����ġ
			//	//������ݷ�

			//	//��ȭ�� ������ �����ϴ� ���̽����غ���!

			//	//���� ���� 1��� ��ŵ�ϴ�.
			weaponLv = weaponLv + 1;
			//���� ���ݷ� = �⺻ ���ݷ� + ���� * ����ġ
			correntAttackPower = baseAttackPower + weaponLv * weight;
			//printf("���� ���ݷ�, ����) ���
			printf("���� ���ݷ� : %d, ������ ���� %d\n", correntAttackPower, weaponLv);
		}
		else if (inputNumber == 2)
		{
			printf("��ȭ�� ����մϴ�\n");

		}
		else if (inputNumber == 3)
		{
			printf("���α׷��� �����մϴ�\n");
			break;

		}
		else
		{
			printf("������ �Ϸ��� �ƹ� Ű�� �Է����ּ���.\n");
			_getch(); // �Է� ���� �޾ƿ��� ��ɾ�, �Է��� �޾ƿ��� �������� ��������.

		}
		

	}
}