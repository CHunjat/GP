/*
* 작성일 : 2025. 02. 18.
* 작성자 : 나
* 주재   : 변수에 대한 이해
*/

/*
* 변수
* (변수) -> 선언을 해야하지만 사용, 같은이름으로하면 에러남
* (데이터형) (변수의 이름); 변수의 이름 데이터형 성질을 갖는다.
* 
* (변수) 초기화 : 변수의 처음으로 값을 대입하는 것
* 
* 주의해야할 점
* 
* 변수를 사용하려면 선언을 해야한다. 
  선언 후 초기화를 해야한다. (에러)
  이미 서넌한 변수에 다시 선언 할 수 없다.
*/

/*
* 변수의 이름 규칙
* 1. 변수의 시작이름에 숫자가 들어가면 안된다 ex 2attackpower 앞에는 안됨
* 2. 변수의 시작이름에 특수기호가 들어가며 안된다.
* 3. 변수의 시작이름에 언더바, 알파벳, 숫자ex) attackpower2 는 가능
* 4. 키워드는 이름으로 사용 할 수 없다. ex) int int

/*
* 연산자
* 사칙연산 : + ,- ,/ ,*
* 나머지, 몫:
* 0,1 bit 연산지
* a>b, a<b a==b 관계 연산자
*/

#include <stdio.h>



int main(void)
{
	//int 1attackpower = 100 // 이름에 숫자가 들어갈수없다 

	//int attackpower; // attackpower이름을 갖는 변수가 int의 성질을 갖는다.
	//// 무기 공격력 공식 : attackpower = 기본 공격력 + 무기의 레벨 * 성장 계수
	//int basicpower = 100;
 //   int weaponlv = 1;
	//int growthpower = 3;

	//attackpower = basicpower + weaponlv * growthpower;

	////attackpower = 10;*/
	////float _attackfloatpower; // attackpower 이름을 갖는 변수가 float의 성질을 갖는다.
	////_attackfloatpower = 15.5;
	////--------------------------------------------------------------------------------------------------
	//printf("무기의 이름 : %s, 무기의 레벨 : %d, 무기 성공확률 : %f ", "맨티스블레이드", weaponlv,0.5);
	//printf("강화가 성공하였습니다. 무기의 공격력이 증가하였습니다.\n");
	//printf("강화 후 무기의 공격력이 %d이 되었습니다", attackpower);

	// 예제 문제
	// 사각형의 넓이를 구하는 문제를 만들어봅시다

	// 정수형 데이터를 선언, width, height
	// 넓이 = 가로x세로

	// 사각형의 넓이를 구합니다.
	// 가로와 세로를 곱합니다.
	// 사각형의 넓이는 N입니다.

	//int width, height, extent;

	/*printf("가로의 길이를 입력해주세요\n");
	scanf_s("%d", &width);
	printf("세로의 길이를 입력해주세요\n");
	scanf_s("%d", &height);

	extent = width * height;


	printf("사각형의 넓이구하기 : %d", extent);*/


	int 기본공격력, 무기레벨, 강화레벨, 무기공격력;
		
	printf("무기강화공격력계산기 : 기본공격력을 입력해주세요\n");
	scanf_s("%d", &기본공격력);
	printf("무기강화공격력계산기 : 무기레벨을 입력해주세요\n");
	scanf_s("%d", &무기레벨);
	printf("무기강화공격력계산기 : 강화레벨을 입력해주세요\n");
	scanf_s("%d", &강화레벨);

	무기공격력 = 기본공격력 + 무기레벨 * 강화레벨;

	printf("무기강화공격력 계산결과 : %d", 무기공격력);

	



}

