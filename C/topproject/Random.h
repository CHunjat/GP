#pragma once

/*
* #include <stdlib.h>
* #include <time.h>
* srand() // rand seed를 지정하는 함수
* rand(time(NULL))
* rand()
*/ 

#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

// 랜덤으로  1 ~ 100 사이 숫자를 랜덤하게 출력 (정수)
// 30% 확률 성공 , ( 1 ~ 100 사이 숫자) 70보다 크거나 같으면 (1 ~ 100) 

// a 이름 (b) 
// a : 반환값 , b : 매개 변수\
// 

int ReturnRandomValue();
bool CheckRandomFunc(int randValue);
