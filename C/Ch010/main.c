/*
* �ۼ��� : 25.2.28
* �ۼ��� : ��
* ����   : �Լ��� ����
*/

/*
*  �Լ� : input���� output ��ȯ(����)�Ѵ�.
* 
* A������ ��򰡿� �����Ͽ� B��� ��������� ��ȯ�Ѵ�.
* 
* A,B ���� : �����ϱ� ���ؼ� ���� ����, ��ȯ�ϱ� ���ؼ� ����
* ��� : �Լ��� �̸� �ۼ�
* ����   : ȣ��� �Լ� ��ġ
 
 void Upgrade(){}
 1. void      : ��ȯ����, B����=����� Ÿ���� �����Ѵ�. ��ȯ���� ����.
 2. Upgrade   : �Լ��� �̸�.  
 3. ()        : A�� ���� Ÿ���� �����ϴ� ��, �ƹ��͵� ������ voidŸ��.
 4. {}        : �ڵ尡 ���ǵǴ� �κ�. body 
*/

/*
* void ���� ��ȯ ���¿����� ������ �ȵǴµ�, �Ű� ������ �ش��ϴ� ������ �� �� �ִ� ����?
  Upgrade(){}  

*/

#include <stdio.h>
#include <stdbool.h>

/*
* ��ȯ���� ���¿� -> ������ void , ������ int �� �ش��ϴ� Ÿ���� ����.
*/

int currentMoney = 100;
int amount = 101;

bool IsMoneyEnough(int amount) //(true, false �� ��ȯ�ϴ� �� , �����δ� 0.1)
{
	return currentMoney >= amount ? true : false ;
	// (1) ���� ������ A ? B : C
	// A���� : �� -> B, ����, ->C 
	// return -> true // false ;

	/*if (currentMoney >= amount) �Ǵٸ� �����.
	{
		true;
	}
	else
	{
		false;
	}*/
}


// �������� ��ġ�� amount �Դϴ�, ������ �� �ִ��� ������ �����ض�
// ���ǹ����� ���ڵ带 ����� �����Ϸ��� �Ѵ�.
// �񱳿����� : ���� ���� ���̶� �������� ��ġ�� ���մϴ�. ���� ������<�������� ��ġ - ���� ������ - false

void BuyItem(int price)
{
	if (IsMoneyEnough(price))
	{
		printf("����մϴ�\n");
	}
	else
	{
		printf("�����մϴ�\n");
	}

}
void Example() //��ȯ�ϴ� ���� ����. �̸�(����)
{
	printf("���� ���\n");
}

int multiplynumber(int input)
{
	int a = 10;
	return 10 * input;
	
}

int main()
{
	//void ������ �Լ� Example
	Example();
	//int ���¸� ��ȯ�ϴ� �Լ� 
	int result = multiplynumber(5);
	printf("����� ��� :%d\n", result);
    //true �� false�� ��ȯ�ϴ� �Լ�.

	// IsenoutghMoney �Լ��� �̿��ؼ� ���� ����ϸ� ����մϴ�.
	// �����մϴ�

	// 100
	// if(���ǹ�) (�Լ�)
	
	
	//if (currentMoney >= amount) // ������
	//{
	//	printf("���� ������: %d\n", currentMoney);
	//	printf("���� ����մϴ�");
	//}
	//else
	//{
	//	printf("���� �����մϴ�\n");
	//}

	BuyItem(100);

}
