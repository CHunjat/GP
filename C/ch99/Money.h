#pragma once
#include <stdbool.h>
#include <stdio.h>

// �ܺο� currentmoney �̸��� ���� ������ ������ �װ��� ����ϼ���. ��� ��.
extern int CurrentMoney;
bool IsEnoughMoney(int amount);


bool usemoney(int price);