/*
* 작성일 : 2025 .2.25
* 작성나 : 나
* 주제 : 코드의 흐름 제어 -반복문
* for 반복분, while 반복문
* 
*/

/*
* 반복문
* - 1+1+1+1+1 => 1 x 5
* 
* for, while
* 
* for(int i=0; i<10; i++) // for(기존;조건 참또는 거짓 나옴;) // 조건이 참일때만 반복문을 실행, 거짓일때는 반복문을 벗어난다.
*/

#include <stdio.h>
#include <stdbool.h>

int main()
{
	printf("반복문 예제 1\n");
	// A이름의 아이템을 획득 - 갯수
	int ACount = 0;
	printf("A 아이템의 수 : %d\n", ACount);

	// 아이템을 1개 획득했다.

	for (int I = 0; I < 100; I++)
	{
		ACount = ACount + 1;

	}

	printf("A 아이템의 수 : %d\n", ACount);

	printf("for 반복문 예제 2번\n");

	int Bcount = 0;

	// i = 0일때 실행된코드
	// 43->44 0->1
	// i = 1일때 실행된코드

	for (int i = 0; i < 10; i++)
	{
		Bcount = Bcount + i;

	}

	printf("B아이템의 수: %d\n", Bcount);


	printf("for 반복문 예제 3 \n");

	for (int ri = 10; ri > 0; ri--)
	{
		printf("현재 i의 값 : %d\n", ri);
	}

	// 게임의 이야기를 입혀서 표현해보도록 합시다.

	
		// 1. 무기를 표현하는 단계
		 //무기의 이름 
		printf("무기의 이름 : %s\n", "롱소드"); // %s, 이름은 변수로
		// 무기의 레벨
		int weaponLevel = 0;
		// 기본 공격력, 가중치
		int basePower = 10;
		int weight = 5;

		// 무기 공격력 = 기본 공격력 + 레벨 * 가중치
		int attackPower = basePower + weaponLevel * weight;

	    // 2. 무기 강화선택지
	printf("무기를 강화하시겠습니까? (Y/N)\n");
	char check = ' ';
	scanf_s("%c", &check, 1);

	if (check == 'Y')
	{
		printf("강화를 진행합니다. \n");
		int xi = 0;

		while (xi < 10) // = (  ) 조건식 : 조건이 true 일때 {} 실행, 조건이 false 반복문 종료
		{
			xi++; // while 탈출하기 위한 조건문

			printf("xi의 값 : %d\n", xi);
		}
		
	}
	else if (check == 'N')
	{
		printf("강화를 그만 두겠습니다. \n");
		
	}
	else
	{

		printf("잘못된 값을 입력하셨습니다\n");

		char another = ' ';
		scanf_s("%c", &another, 1);
		while (getchar() != '\n');

		if (another == 'Y')
		{
			printf("강화를 진행합니다\n");
		}
		else if (another == 'N')
		{

			printf("강화를 그만 두겠습니다\n");

		}
		else
		{


		}


		//반복문을 사용한다.
		// for 반복문을 사용해서
		// n 번 반복하는 코드를 쉽게 표현하기 위해서.
		// 몇번 반복해야할지 모르겠는 내용있음.
		// 예시 잘못된 값을 입력했을때 정확한 값을 요구하는 코드

		//while 반복문 
		// 무한 반복문 

		int xi = 0;

		while (xi < 10) // = (  ) 조건식 : 조건이 true 일때 {} 실행, 조건이 false 반복문 종료
		{
			xi++; // while 탈출하기 위한 조건문

			printf("xi의 값 : %d\n", xi);
		}

		//for 반복문을 쓰면 좋을까요  while 을 쓰는게 좋을까요?

		//몇 번 반복을 할 지 정해져 있는 경우에 더 유용하다.
		// for 반복문 표현 <-> while 반복문 표현하기.

		//실습예제
		// 1부터 10까지의 값을 printf 출력을해보세요
		// for 반복문, while 반복분
		/// ??? 반복할 코드를 작성하고 싶습니다.

		// 2만큼 증가하는 정수형변수 numA
		// 이 numA가 10보다 크거나 같을때 종료되길 원합니다.
		// numA 숫자가 10보다 커지기 위해서 몇 번 반복했는지 알고싶습니다.
		//반복한 결과 정수형 CountA로 출력해주세요

		int numA = 0;
		int CountA = 0;
		printf("numA의 값을 입력해주세요(단, 10보다 작아야 합니다\n");
		scanf_s("%d", &numA);

		// 표현법 1번
		while (numA > 10)
		{

			numA += 2;
			CountA++;
			if (numA > 10)
			{
				printf("반복한 횟 수 : %d\n", CountA);
				printf("현재 값 : %d,\n", numA);
				
			}

		}
		// 표현법 2번

		while (numA <= 10)
		{
			numA += 2;
			CountA++;
		}
		// for 반복문 표현 <-> while 반복문 표현하기

		// 실습예제
		// 1부터 10사이의 값을 짝수 print 출력을 해보세요
		// for반복문, while반복문 홀수
		// 현재값 ; 2; 2 3 4 ....
		// Y,N , 다시입력하세요 <- Y,N 입력할 때 까지 무한히 반복되는 코드를 작성해보세요
		// while 반복문을 사용해서 Y,N 입력할 떄 까지 반복하는 코드를 작성해보세요
		// scanf_s();
		// while (GETCHAR() != '\n');
	}


	




}
