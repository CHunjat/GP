#include "lecture.h"

void ShowExample()
{
	int number = 10;
	printf("�������� number�� �� : %d\n", number);

	LocalFunc(10); // ������ �Ҹ��� �ݺ��ȴ�.
	LocalFunc(15);
}

void LocalFunc(int a)
{
	int value = 5;
	printf("a�� ���� 5�� ���� ��: %d\n", a + value);
}



/*
* ���� ���� || main �Լ�  || Localfunc �Լ�
* number    ||  number    || value ,(a)
* ������ �Ҹ�Ǵ� ����
* 3         ||    2       ||         1
*/
