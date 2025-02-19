/*
* 작성일 : 2025 02 19
* 작성자 : 나
* 주제 : 연산자 실습
*/

/*
* 사칙연산 : +,-,/,* 나머지 : %
*  0 + 0
*/

/*
* <> 시스템 파일
* "" 커스텀 제작 파일
* 
*  #include <>
*  #include ""
*/
#include <stdio.h>
#include <stdbool.h>

int main()
{

	////사칙연산 + 나머지 
	//printf("연산자 실습 1\n");

	////초기화
	////단항 연산자
	//// 부호 : +,- 음수 양수 -10, +10
	//// 
	////이항 연산자
	////num1 + num2 

	////삼항 연산자
	//// 1항 = 2항 :3항



	///*
	//* 연산자의 쓰임새
	//* 산술 연산자 +, -,*,/,%
	//* 비교 연산자 > , < , ==
	//* 비트 연산자 (data type)
	//* 관계 연산자 ( or,||, and,&&)
	//*/

	///*
	//* 비교 연산자 결과 : 참(true) 1, 거짓(false) 0
	//* 1, 0 
	//*/


	//int num1 = 10;
	//int num2 = 3;
	//

	////덧셈
	//printf("%d + %d = %d\n", num1, num2, num1 + num2);
	////뺄셈
	//printf("%d - %d = %d\n", num1, num2, num1 - num2);
	////곱셈
	//printf("%d * %d = %d\n", num1, num2, num1 * num2);
	////나누기
	//printf("%d / %d = %d\n", num1, num2, num1 / num2);
	////나머지
	//printf("%d 나머지 %d = %d\n", num1, num2, num1 % num2);

	//printf("실습 2 \n");
	//printf("비교결과 num1 > num2 : %d\n", num1 > num2); // 참
	//printf("비교결과 num1 < num2 : %d\n", num1 < num2); // 거짓

	//printf("실습 3 : 삼항연산자 \n");
	//bool istrue = true;
	//bool isfalse = false;


	//int result1 = num1 > num2;
	//printf("삼항 연산자 결과 출력 : %s\n", (result1) ? "ture" : "false");
	//printf("삼항 연산자 결과 출력 : %d\n", (result1) ? 1 : 0);


	//printf("실습 4 : 관계 연산자 \n");

	////!num2 : num2가 아니다!, false-> true // true -> false

	//printf("관계 연산자 : %d\n", (num1 == num2) || (num1 < num2)); // num1 != num2 두 수가 다를 때 
	//printf("관계 연산자 : %d\n ", (num1 != num2) && (num1 < num2)); // num1 != num2 두 수가 다를 때 


	//printf("실습 5 : 복합 연산자 \n");

	//int num3 = 2;
	//int num4 = 5;
	//num3 != num4; // num3 <- 2+5=7

	//// 1-> 2-> 3 -> 4 -> 반복하고 싶은 숫자 

	////T = T + A;
	////T += A;
	//printf("num3 + num4의 값 : %d\n", num3);


	////전위연산자는 문장을 먼저 처리한 후에 연산
	////num3의 값 : 2출력 -> num3++ : num3 += 1;
	////후위연산자는 : 연산된 결과는 문장에 대입한다.
	//// num4 += 1; -> printf 문장을 처리함


	//printf("실습 6 : 후위 연산자, 전위 연산자\n");
	//printf("num3의 값 : %d\n", num3++);
	//printf("num3의 값 : %d\n", ++num3);
	//printf("num4의 값 : %d\n", ++num4);
	//printf("num4의 값 : %d\n", num4);


	// | & << >> 비트 연산자


	// 게임의 스토리

	//무기 강화하는데
	//n 강일때의 무기, n+1 무기의 정보를 화면에 출력 스토리 작성

	int 롱소드;
	int 기본공격력 = 10;
	int 무기레벨 = 1;
	int 강화레벨 = 1;
	int 무기공격력;

	무기공격력 = 기본공격력 + 무기레벨 * 강화레벨;

	    printf("강화 전\n");
		printf("이름 : 롱소드\n");
		printf("기본공격력 = 10 \n");
		printf("무기레벨 = 1\n");
		printf("강화레벨 = 1\n");
		printf("무기공격력 = %d \n", 무기공격력);


		printf("강화 후\n");
		printf("이름 : 롱소드\n");
		printf("기본공격력 = %d\n",기본공격력+1);
		printf("무기레벨 = %d\n",무기레벨+1);
		printf("강화레벨 = %d\n",강화레벨+1);
		printf("무기공격력 = %d\n", 무기공격력);



		printf("강화를 시작하겠습니다\n");

		printf("강화에 성공하였습니다\n");

		printf("강화 후 롱소드 : 기본공격력%d\n, 무기레벨%d\n, 강화레벨%d\n,무기공격력%d\n", 기본공격력+1, 무기레벨+1, 강화레벨+1, 무기공격력);





	// 게임 스토리2.
	// 아이템 인벤토리, slot, 기타 아이템 수집 stack x 갯수
	// slot 최대 갯수 : 변수
	// stack 최대 갯수 : 변수
	// a아이템으,n개 획득 , b 아이템 m개 획득
	//현재 인벤토리의 갯수가 가득 찼는지 안찼는지 표현하는 결과를 표현해보세요.
	//3항 연산자
}
