#pragma once
#include <stdbool.h>
#include <stdio.h>

// 외부에 currentmoney 이름이 같은 변수가 있으니 그것을 사용하세요. 라는 뜻.
extern int CurrentMoney;
bool IsEnoughMoney(int amount);


bool usemoney(int price);