#include <stdio.h>

int main()
{
	//player : �г��� - V
	//enermy : �����̸� Maxtac
	//player's attackpower: �÷��̾��� ���ݷ�(����)
	//enermy's attackpower: ������ ���ݷ�(����)

	// ������ �̿��ؼ� �ѹ濡 player��� �̸��� �ٲپ� ����!
	//��ǻ�;�!!player's attackpower ���� 8�� ���ּ���.
	// ��ǻ�Ϳ��� �����ؾ��� ����(������ �̸�, ��� �����ΰ�(**),��);

	int playerAttackPower = 20000; //������ �����ϴ� ������ �̸� 
	int enermyAttackPower = 3;


	printf("%s�� %s�� ����Ʈ��Ƽ���� �������ϴ�\n", " V ", "Maxtac");
	printf("%s�� ���� %s�� �߰����� ���߽��ϴ�.\n", "Maxtac", " V ");
	printf("%s�� %s�� �����Ͽ� %d��ŭ �������� ����ϴ�.\n", " V ", " Maxtac", playerAttackPower);
	printf("%s�� %s�� ���� �����Ͽ� %d�� %d �� �������� �־����ϴ�.\n ", " V ", " Maxtac", playerAttackPower, enermyAttackPower);


	/*char char1 = 'V';
	int int1 = 10;
	float float1 = 0.7f;
	printf("���� ��� : %c\n", char1);
	printf("���� ��� : %d\n", int1);
	printf("�Ǽ� ��� : %f\n", float1);
	printf("���ڿ� ��� : maxtac");*/

	// ��ȭ �ý��� ���丮 §��.
	// ������ �̸�%s ���� ���� ��ȭ%d Ȯ��
	// ��ȭ�� �õ��մϴ�.

	printf("������ �̸� : %s, ������ ���� : %d, ���� ����Ȯ�� : %f ", "��Ƽ�����̵�", 1, 99.8);

}

