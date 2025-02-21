/*
* 작성일 : 2025.2.21.
* 작성자 : 나 
* 주제   : 문자를 표현하는 방법, 데이터의 타입을 변환
*/


/*
* 정수, 실수
* 정수를 표현하는 방법 - 부호비트 MSB 5 = 00000101 - 2의 보수법 UNSIGNED 원래표현할수 있는것에 2배
* 실수를 표현하는 방법 - MSB /가수/지수 0과 한없이 가까운수는 표현할 수있어도 0는 표현불가. 10=(0.1) 쓰레기값나옴
* 
* 
* 
*/

/*
* 많은 데이터형을 사용해야 합니다.
* int, char, short, long, 
* float, double
* 
* 왜 미리 타입을 만들어 두었을까요?
* -편하게
* 
* int : 정수 + 4바이트 : 각각의 비트는 0,1저장하고 마지막 비트 부호 저장 비트의 갯수는 32개다
*/

/*
* 문자를 저장했다. 비트값을 저장했다. 00000000 <-어떤한숫자로 가정 
* character 측면 해석 - > S
* 정수 측면 해석 83
* 
* 숫자의 값 단어 매핑
* 83 = 대문자 S // 97 a, 98 b, 99 c,
* ASCII (American standard, code for information insitute)
* 
*/


/*
*  정수형 데이터 4바이트 이름을 'num' 선언을 하세요, 값을 10 초기화하세요
* int num; 
* num = 10;
* num(int) 10정수

*/

/*
* literal 상수<=>변수
* 컴퓨터 입장에서 가장 보편적으로 많이 사용하는 타입 변환
* 10 <- 정수 형태 int 형
* 11.5<- 실수 형태 double 형
* 
* 상수 - 10 
* 변수 int num;
* num = 40; 여기에 수를 변하게 수정 할수있어서.
* num = 10;
* 10 = 30;


 심볼릭 상수 - 이름을 지정 해줄 수 있다.

 int PI = 3.14



*/


/*
* 형변환
* 자동 - 묵시적 변환
* 수동 - 명시적 변환
* 명시적 변환 하는 방법
* float fnum =0.1f;
* int tempint= (int)fnum 10;
* 
* 
*/

#include <stdio.h>

int main()
{
	/*int num1 = 10;
	char num2 = 1;
	short num3 = 3;
	printf("정수 데이터의 크기 비교\n");
	printf("데이터의 바이트 크기 : %d 바이트\n", sizeof(num1)); // = 4바이트로 표현됨
	printf("데이터의 바이트 크기 : %d 바이트\n", sizeof(num2)); // = 1바이트로 표현됨
	printf("데이터의 바이트 크기 : %d 바이트\n", sizeof(num3)); // = 2바이트로 표현됨


	float fnum1 = 0.1f;
	double fnum2 = 0.2;
	printf("실수 데이터의 크기 비교\n");
	printf("데이터의 바이트 크기 : %d 바이트\n", sizeof(fnum1)); // = 1바이트로 표현됨
	printf("데이터의 바이트 크기 : %d 바이트\n", sizeof(fnum2)); // = 1바이트로 표현됨

	printf("문자를 출력한다!\n");

	char c1 = 'Z'; // c1은 변수 char // 'Z' 90
	printf("문자 : %c\n", c1);
	printf("문자 : %d\n", c1);

	// 128숫자 a~z , A~Z , 특수기호, 

	wchar_t charnum = L'가';

	printf("유니코드 값 : %d\n", charnum);

	printf("심볼릭 상수 예시\n");
	const double PI = 3.14;

	printf("값 출력 : %.4lf\n", PI);

	printf("예제 문제\n");*/

	//원의넓이를 구하는 공식
	//원의넓이 = PI * 반지름 * 반지름 ;
	// PI 무엇으로 해야할지 해서 3.14 로함
	// 다른 사람이 원의 넓이 PI 접근을 하지 못하도록 코드를 작성해봐
	// 
	// 플레이어 요소
	// 체력, 공격력 
	// 사망 (체력 <=0) -> 원래 체력으로 부활
	// 기본 체력으로 부활했다.
	// 

	//int 원의넓이, 반지름, PI;
	//double 원의넓이;
   // const double PI = 3.14;
	//원의넓이 = 반지름 * 반지름 * PI;

	//printf("원의넓이를 구하여라\n");

	//printf("원의 반지름을 입력하시오\n");
	//scanf_s("%d\n", &반지름);

	//printf("원의넓이는 : %.2lf 입니다\n", 원의넓이);

    //원의넓이 = 반지름 * 반지름 * PI;
	


	//강사님

	//double radius = 5;
	//double extent = radius * radius * PI2;
	//printf("원의 넓이 : %lf", extent);


	//플레이어 요소 
	// 체력, 공격력
	//사망(체력 <=0) -> 원래체력 부활
	//기본 체력으로 부활했다.
	// hp = 5;

	const int REVIVEHP = 10;
	int currentHP = REVIVEHP;

	currentHP <= 0;
	printf("플레이어가 사망했습니다\n");
	printf("부활하시겠습니까 Y/N \n");
	currentHP = REVIVEHP;
	printf("부활하였습니다.\n");


	//명시적 변환하는 방법
	float fnum10 = 0.1f;
	int tempInt = (int)fnum10;
	printf(" 값 : %d\n", tempInt);
	printf(" 값 : %f\n", (float) tempInt);

	//묵시적 변환 
	// case1. 

	float fnum11 = 0.1f;
	int tempInt2 = fnum10; // 데이터 선언 및 초기화
	printf(" 값: %d\n", tempInt2);
	printf(" 값 :%f\n", (float)tempInt2);

	// case2. 정수의 승격에 의한 자동 형변환
	// char, short -> int 변환
	// 
	 short ex1 = 15; // 15-> int
	 short ex2 = 25; // 25-> int
	 short ex3 = ex1 + ex2; // 15+25 int -> short

	// case3. 연산자의 자료 불일치

	// 공격력 = 기본 공격력 + 레벨 + 가중치
	 int baseattack = 10;
	 int level = 1;
	 double weight = 0.5;
	 int AP = baseattack + level * weight; // 10 +(1*0.5); -<이게 지금 연산자의 자료 불일치

	 //(double)1 *0.5 -  자료형 일치하지 않음
	 // 정수 * 실수 - 실수
	 // 10 + 0.5
	 //10.5
	 //(int)AP = (int)(double) 10.5;
	  
	  
	// case 3-2 자료형 불일치

	 int abc = 128;
	 char ccc = abc; // -127

	 printf("값 : %d", ccc);

	 // []x4 <- []x1 : [] [] [] []x1 //작은거에서 큰거로 변환할때 괜찮지만
	 // [] x4 -> []x1 : //[1010] [010101] [101010] // 큰거에서 작은거로 변환할때 버려지는게 많다.

	 // 자료형을 변환할 때 데이터의 손실이 가장 적은 방향으로 발생한다.
	 //[char -> short->] int iong -> float -> double;

	 return 0;


}