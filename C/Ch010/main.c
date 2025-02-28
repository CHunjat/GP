/*
* 작성일 : 25.2.28
* 작성자 : 나
* 주제   : 함수의 사용법
*/

/*
*  함수 : input전달 output 반환(리턴)한다.
* 
* A데이터 어딘가에 전달하여 B라는 결과값으로 반환한다.
* 
* A,B 변수 : 전달하기 위해서 변수 선언, 반환하기 위해서 선언
* 어딘가 : 함수의 이름 작성
* 전달   : 호출된 함수 위치
 
 void Upgrade(){}
 1. void      : 반환형태, B변수=결과값 타입을 정의한다. 반환값이 없다.
 2. Upgrade   : 함수의 이름.  
 3. ()        : A의 변수 타입을 정의하는 곳, 아무것도 없으면 void타입.
 4. {}        : 코드가 정의되는 부분. body 
*/

/*
* void 형태 반환 형태에서는 생략이 안되는데, 매개 변수에 해당하는 생략을 할 수 있는 이유?
  Upgrade(){}  

*/

#include <stdio.h>
#include <stdbool.h>

/*
* 반환값의 형태에 -> 없으면 void , 있으면 int 등 해당하는 타입을 선언.
*/

int currentMoney = 100;
int amount = 101;

bool IsMoneyEnough(int amount) //(true, false 를 반환하는 것 , 실제로는 0.1)
{
	return currentMoney >= amount ? true : false ;
	// (1) 삼항 연산자 A ? B : C
	// A조건 : 참 -> B, 거짓, ->C 
	// return -> true // false ;

	/*if (currentMoney >= amount) 또다른 방법임.
	{
		true;
	}
	else
	{
		false;
	}*/
}


// 아이템의 가치가 amount 입니다, 구입할 수 있는지 없는지 구분해라
// 조건문으로 두코드를 나누어서 구현하려고 한다.
// 비교연산자 : 내가 가진 돈이랑 아이템의 가치를 비교합니다. 내가 가진돈<아이템의 가치 - 돈이 부족함 - false

void BuyItem(int price)
{
	if (IsMoneyEnough(price))
	{
		printf("충분합니다\n");
	}
	else
	{
		printf("부족합니다\n");
	}

}
void Example() //반환하는 값이 없다. 이름(없음)
{
	printf("예시 출력\n");
}

int multiplynumber(int input)
{
	int a = 10;
	return 10 * input;
	
}

int main()
{
	//void 형태의 함수 Example
	Example();
	//int 형태를 반환하는 함수 
	int result = multiplynumber(5);
	printf("결과값 출력 :%d\n", result);
    //true 와 false를 반환하는 함수.

	// IsenoutghMoney 함수를 이용해서 돈이 충분하면 충분합니다.
	// 부족합니다

	// 100
	// if(조건문) (함수)
	
	
	//if (currentMoney >= amount) // 내버전
	//{
	//	printf("현재 가진돈: %d\n", currentMoney);
	//	printf("돈이 충분합니다");
	//}
	//else
	//{
	//	printf("돈이 부족합니다\n");
	//}

	BuyItem(100);

}
