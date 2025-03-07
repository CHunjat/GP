#pragma once

#include <stdio.h>
#include <stdbool.h>
#include <conio.h>
#include <Windows.h>
#include <stdlib.h>
#include <time.h>
#include "Random.h" // 업그레이드 랜덤 강화를 위한 사용자 지정 헤더
#include "Currency.h" // 코스트 사용 함수를 위한 사용자 지정 헤더


void ShowMenu();

void UpGrade();
void ShowStatus();

bool IsGameClear();

extern int CurrentLevel;
extern int TargetLevel;
extern bool isClear;
extern bool isFail;


