#pragma once

#include <stdio.h>
#include <stdbool.h>
#include <conio.h>
#include <Windows.h>
#include <stdlib.h>
#include <time.h>


void ShowMenu();

void UpGrade();
void ShowStatus();

bool IsGameClear();

extern int CurrentLevel;
extern int TargetLevel;
extern bool isClear;
extern bool isFail;


