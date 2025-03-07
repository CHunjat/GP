#pragma once
#include <stdbool.h>
#include <stdio.h>



extern int CurrentMoney;
extern int UpgardeCost;
extern bool isFail;

bool CanUpgrade(int cost); // cost current money 