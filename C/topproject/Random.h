#pragma once

/*
* #include <stdlib.h>
* #include <time.h>
* srand() // rand seed�� �����ϴ� �Լ�
* rand(time(NULL))
* rand()
*/ 

#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

// ��������  1 ~ 100 ���� ���ڸ� �����ϰ� ��� (����)
// 30% Ȯ�� ���� , ( 1 ~ 100 ���� ����) 70���� ũ�ų� ������ (1 ~ 100) 

// a �̸� (b) 
// a : ��ȯ�� , b : �Ű� ����\
// 

int ReturnRandomValue();
bool CheckRandomFunc(int randValue);
