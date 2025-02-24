/*
*  작성일 : 25.2.24.
*  작성자 : 나
*  주제 : 코드의 흐름제어
*/

/*
* main 함수는 프로그램의 시작점.
* 위에서부터 순서대로 코드가 실행된다.
* main 함수의 마지막 중괄호를 만나면 프로그램이 종료된다
*/

/*
* 디버깅 : 프로그램을 중단시켜서 코드를 확인하는 기능
* f9를 눌러서 중단점을 생성 또는 삭제할 수 있다.
* 위에서부터 순서대로 코드가 실행된다.
*/

/*
* 조건문, 분기, branch
* 
* if 문법
* if( ){} // 조건문
* () : 조건
* {} : 몸체, body
* 
* 주의할 점
* if() ; {] : 조건문과 상관없이 코드가 실행된다.
*/

/*
* if(조건1)
* 짝수 : n%2 ==0
* 홀수 : n#2 ==1
* 
* else // 나머지 모든 것들
*/

/*
* 학생의 성적이 있습니다.
* 점수를 기준으로 일정 점수 잇항이면 "N" 등급 매기는 시스템을 만든다.
* 점수가 >= 100 : S등급이다.
* 점수 >= 90 : A등급이다.
* 점수 < 90 : F등급이다. 
*
*/

/*
* 정리
* 코드의 흐름 제어 - > 조건에 따라서 특정 부분만 실행하는 방법
* if(true) {}실행 false 실행하지 않는다.
* 
* (false && true) (true || false)

*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	printf("조건문 예제1\n");

	//int : 정수를 저장하고 싶어용 + 8bit = 4byte

	int count = 15;

	// 관계연산자, 비교연산자.
	// 5 < 10 

	if (count < 10) // true, false 판단 //  if (count <10); => inf(cont <1_ {아무것도없음} 와 같다. 결론: if (count <10)";" 작성금지참고
	{
		printf("count값이 10보다 작습니다.\n");

	}
	else
	{
		printf("카운트 값이 10보다 큽니다\n");
	}

	printf("예제 문제1\n");
	int score = 55;

	if (score >= 100)
	{
		printf("S등급 입니당, 현재 점수 : %d\n", score);
	}
	else if (score >= 90)
	{
		printf("A등급 입니당, 현재 점수 : %d\n", score);
	}
	else
	{
		printf("F등급 입니당, 현재 점수 : %d\n", score);
	}

	// 숫자게임
	// 랜덤한 숫자
	// 구글)c언어 랜덤숫자 가져오는 방법 random.
	// 조건문 확인
	// ??? 내가 입력한 숫자 비교 크면 ->큽니다.

	//숫자가 있다.
	// 조건문으로 비교해서 숫자가 큰지 작은지 비교
	
	// seed값
	// 랜덤 값 19312319312312312 % 99 : 00 ~ 98 

	printf("랜덤 숫자 만들기\n");
	printf(" 숫자의 범위는 1~100 이다\n");
	srand(time(NULL));
	int num = rand() % 101; // 1~100;

	//printf("결과값 : %d", num);
	int user = 33;

	printf("숫자를 입력해주세요");
	scanf_s("%d\n", &user);
	
	if (user > num)
	{
		printf("목표 값보다 큽니다.\n");

	}
	else if (user < num)
		printf("목표 값보다 작습니다\n");

	else
	{
		printf("정답입니다");
	}

	int countnumber = 1;

	if (countnumber == 1)
	{
		printf("S랭크 입니다\n");
	}
	else if (countnumber == 2)
	{
		printf("A랭크 입니다\n");
	}

	else if (countnumber == 3)
	{
		printf("B랭크 입니다\n");
	}

	else if (countnumber == 4)
	{
		printf("c랭크 입니다\n");
	}

	switch (countnumber) 
	{
	case 1: 		printf("S랭크 입니다\n"); break;
	case 2: 		printf("A랭크 입니다\n");
	case 3: 		printf("B랭크 입니다\n");
	case 4: 		printf("C랭크 입니다\n");

	}
	


	//switch 




}




// 예제 문제2
// 숫자 맞추기 게임에서 문제를 맞춘 횟수에 따라서 랭킹을 부여해보고싶다.

// if ~ else if ~ ;

