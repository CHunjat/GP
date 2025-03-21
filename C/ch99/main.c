/*
* 작성일 : 2025.2.27.
* 작성자 : 나
* 주제   : 지역 변수, 전역 변수
*/

/*
* 변수 : 정수, 실수 데이터타입 선언 이름 ,// 변하는 수를 컴퓨터에게 전달하기 위해서!, 
* 
* 전역 변수 더 큰범위
* 
* 지역 (local) : 더 가깝다.
* 전역 (global) : 더 멀다.
* 
* 1. 지역 변수가 전역 변수보다. 먼저 사용된다.  
*/

/*
* 함수 내부에 선언된다 -> 지역변수
* 함수 외부에 선언된다 -> 전역변수
* 
* 함수
* 반환값 이름(){}
* 
* {} 내부에 변수가 선언되면 지역변수
* {} 외부에 변수가 선언되면 전역변수 
* 
*/

/*
* 이름이 같은데 왜 에러가 발생이 안될까?
* 컴퓨터가 이름이 같아도 구분할 수 있는 방법이 무엇일까?
* 메모리 - 저장하는 공간이 구분이 되어있다.
  코드 영역 - 데이터 역역 - 힙 영역 - 스택 영역
  전역변수와 지역변수 저장 영역이 다르다, 그거로 컴퓨터가 구분이 가능하다.
  전역변수는 데이터 영역 저장
  지역변수는 스택 영역에 저장
 
*/

/*
* 영역을 왜 나눌까?
* 
* 지역변수의 특징
* (1) 함수 내부에서 선언된다.
* (2) 함수가 종료되는 시점에 변수가 소멸된다.
* 
* 전역변수의 특징
* (1) 함수 외부에서 선언된다.
* (2) 프로그램이 종료되는 시점에 변수가 소멸된다.
*/

/*
* 변수가 소멸되는 시점이 다른 이유가 무엇일까?
* 
* 메모리를 효율적으로 사용하기 위해서다.
* 사용한 공간을 지워서 다시 만든다.
* 
* 지역변수는 함수가 종료될 떄 소멸된다. 
* => 함수가 종료되면 안쓰는 메모리를 지운다.
* 함수가 호출될때 지역변수가 생성되고, 끝날때 소멸된다 반복 
* 
*/

/*
* call by value vs reference
*/

#include "lecture.h"
#include "Upgrade.h"
#include "Money.h"
#include "main.h"
int number = 1;

int CurrentMoney = 1000;

// 내가 가진 돈의 정보를 보여줘

void Showinfo()
{
	printf("캐릭터의 클래스 %s\n", "모험가");
	printf("현재 가진 돈 : %d\n", CurrentMoney);

}


int main()
{
	Showinfo();
	system("cls");
	//ShowExample();

	usemoney(1500);
	ShowUpgradeMenu();

}