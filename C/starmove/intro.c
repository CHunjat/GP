#include "intro.h"

void intro()
{
	while (1)
	{
		
		printf("���������������������\n");
		printf("��                                    ��\n");
		printf("��                                    ��\n");
		printf("��            �����ϱ� ����           ��\n");
		printf("��                                    ��\n");
		printf("��                                    ��\n");
		printf("��                                    ��\n");
		printf("��                                    ��\n");
		printf("��                                    ��\n");
		printf("��   1.���� ����                      ��\n");
		printf("��                                    ��\n");
		printf("��                                    ��\n");
		printf("��                                    ��\n");
		printf("��   2.���� ����                      ��\n");
		printf("��                                    ��\n");
		printf("��                                    ��\n");
		printf("��                                    ��\n");
		printf("��                                    ��\n");
		printf("��                                    ��\n");
		printf("��                                    ��\n");
		printf("���������������������\n");

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
			printf("������ �����մϴ� \n");
			system("cls");
			exit(0);
		}
		else
		{
			printf("�߸��ԷµǾ����ϴ� �ٽ� �Է����ּ���\n");
			printf("�����Ϸ��� �ƹ� Ű�� �Է����ּ���\n");
			_getch();
			system("cls");
		}
		
	}	
}
