/*
* �ۼ��� : 2025 02 19
* �ۼ��� : ��
* ���� : ������ �ǽ�
*/

/*
* ��Ģ���� : +,-,/,* ������ : %
*  0 + 0
*/

/*
* <> �ý��� ����
* "" Ŀ���� ���� ����
* 
*  #include <>
*  #include ""
*/
#include <stdio.h>
#include <stdbool.h>

int main()
{

	////��Ģ���� + ������ 
	//printf("������ �ǽ� 1\n");

	////�ʱ�ȭ
	////���� ������
	//// ��ȣ : +,- ���� ��� -10, +10
	//// 
	////���� ������
	////num1 + num2 

	////���� ������
	//// 1�� = 2�� :3��



	///*
	//* �������� ���ӻ�
	//* ��� ������ +, -,*,/,%
	//* �� ������ > , < , ==
	//* ��Ʈ ������ (data type)
	//* ���� ������ ( or,||, and,&&)
	//*/

	///*
	//* �� ������ ��� : ��(true) 1, ����(false) 0
	//* 1, 0 
	//*/


	//int num1 = 10;
	//int num2 = 3;
	//

	////����
	//printf("%d + %d = %d\n", num1, num2, num1 + num2);
	////����
	//printf("%d - %d = %d\n", num1, num2, num1 - num2);
	////����
	//printf("%d * %d = %d\n", num1, num2, num1 * num2);
	////������
	//printf("%d / %d = %d\n", num1, num2, num1 / num2);
	////������
	//printf("%d ������ %d = %d\n", num1, num2, num1 % num2);

	//printf("�ǽ� 2 \n");
	//printf("�񱳰�� num1 > num2 : %d\n", num1 > num2); // ��
	//printf("�񱳰�� num1 < num2 : %d\n", num1 < num2); // ����

	//printf("�ǽ� 3 : ���׿����� \n");
	//bool istrue = true;
	//bool isfalse = false;


	//int result1 = num1 > num2;
	//printf("���� ������ ��� ��� : %s\n", (result1) ? "ture" : "false");
	//printf("���� ������ ��� ��� : %d\n", (result1) ? 1 : 0);


	//printf("�ǽ� 4 : ���� ������ \n");

	////!num2 : num2�� �ƴϴ�!, false-> true // true -> false

	//printf("���� ������ : %d\n", (num1 == num2) || (num1 < num2)); // num1 != num2 �� ���� �ٸ� �� 
	//printf("���� ������ : %d\n ", (num1 != num2) && (num1 < num2)); // num1 != num2 �� ���� �ٸ� �� 


	//printf("�ǽ� 5 : ���� ������ \n");

	//int num3 = 2;
	//int num4 = 5;
	//num3 != num4; // num3 <- 2+5=7

	//// 1-> 2-> 3 -> 4 -> �ݺ��ϰ� ���� ���� 

	////T = T + A;
	////T += A;
	//printf("num3 + num4�� �� : %d\n", num3);


	////���������ڴ� ������ ���� ó���� �Ŀ� ����
	////num3�� �� : 2��� -> num3++ : num3 += 1;
	////���������ڴ� : ����� ����� ���忡 �����Ѵ�.
	//// num4 += 1; -> printf ������ ó����


	//printf("�ǽ� 6 : ���� ������, ���� ������\n");
	//printf("num3�� �� : %d\n", num3++);
	//printf("num3�� �� : %d\n", ++num3);
	//printf("num4�� �� : %d\n", ++num4);
	//printf("num4�� �� : %d\n", num4);


	// | & << >> ��Ʈ ������


	// ������ ���丮

	//���� ��ȭ�ϴµ�
	// ����� ��Ÿ��.
	// int basepower = 10;
	// int weapon = 1;
	// int weight = 2;
	// int attackpower = basepower + weaponlv *  weight;
	// 
	// printf("������ ���� : %d, ������ ���ݷ� : %d/n;", weaponlv++
	// 
	// 
	// 
	// 
	// 
	//n ���϶��� ����, n+1 ������ ������ ȭ�鿡 ��� ���丮 �ۼ�

	int �ռҵ�;
	int �⺻���ݷ� = 10;
	int ���ⷹ�� = 1;
	int ��ȭ���� = 1;
	int ������ݷ� = �⺻���ݷ� + ���ⷹ�� * ��ȭ����;

	    printf("��ȭ ��\n");
		printf("�̸� : �ռҵ�\n");
		printf("�⺻���ݷ� = 10 \n");
		printf("���ⷹ�� = 1\n");
		printf("��ȭ���� = 1\n");
		printf("������ݷ� = %d \n", ������ݷ�);


		printf("��ȭ ��\n");
		printf("�̸� : �ռҵ�\n");
		printf("�⺻���ݷ� = %d\n",�⺻���ݷ�+1);
		printf("���ⷹ�� = %d\n",���ⷹ��+1);
		printf("��ȭ���� = %d\n",��ȭ����+1);
		printf("������ݷ� = %d\n", ������ݷ�);



		printf("��ȭ�� �����ϰڽ��ϴ�\n");

		printf("��ȭ�� �����Ͽ����ϴ�\n");

		printf("��ȭ �� �ռҵ� : �⺻���ݷ�%d\n, ���ⷹ��%d\n, ��ȭ����%d\n,������ݷ�%d\n", �⺻���ݷ�++, ���ⷹ��++, ��ȭ����++, ������ݷ�);





		// ������ ���丮2.

		// ������ �κ��丮.  Slot. ��Ÿ ������ ����. Stack x ����.
		// Slot �ִ� ���� : ����
		// Stack �ִ� ���� : ����
		// A �������� n�� ȹ��, B ������ m�� ȹ��
		// ���� �κ��丮�� ������ ���� á���� ��á���� ǥ���ϴ� ����� ǥ���غ�����.

		int maxInventorySlot = 10;
		int AStackCount = 200;
		int BStackCount = 200;
		int ADrop = 555;
		int BDrop = 7777;

		printf("1�ð� ���� ����� �ؼ� �������� ȹ���� �ߴ�.\n");
		printf("A������ : %d, B������ : %d ȹ���ߴ�.\n", ADrop, BDrop);

		// ������

		int AInventoryCount = (ADrop % AStackCount) == 0 ? (ADrop / AStackCount) : (ADrop / AStackCount) + 1;
		int BInventoryCount = (BDrop % BStackCount) == 0 ? (BDrop / BStackCount) : (BDrop / BStackCount) + 1;

		printf(" A�� ���� :%d B�� ���� : %d\n", AInventoryCount, BInventoryCount);
		printf("��� :  %s\n", maxInventorySlot <= (AInventoryCount + BInventoryCount) ? "������" : "�������");
		 
}


