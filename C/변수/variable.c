#include <stdio.h>

int main()
{
	//player : 닉네임 - V
	//enermy : 몬스터이름 Maxtac
	//player's attackpower: 플레이어의 공격력(숫자)
	//enermy's attackpower: 괴물의 공격력(숫자)

	// 변수를 이용해서 한방에 player라는 이름을 바꾸어 보자!
	//컴퓨터야!!player's attackpower 값을 8로 해주세요.
	// 컴퓨터에게 전달해야할 정보(변수의 이름, 어떠한 종류인가(**),값);

	int playerAttackPower = 20000; //정수를 저장하는 변수의 이름 
	int enermyAttackPower = 3;


	printf("%s와 %s이 나이트시티에서 만났습니다\n", " V ", "Maxtac");
	printf("%s는 아직 %s을 발견하지 못했습니다.\n", "Maxtac", " V ");
	printf("%s가 %s을 공격하여 %d만큼 데미지를 줬습니다.\n", " V ", " Maxtac", playerAttackPower);
	printf("%s와 %s이 서로 공격하여 %d와 %d 의 데미지를 주었습니다.\n ", " V ", " Maxtac", playerAttackPower, enermyAttackPower);


	/*char char1 = 'V';
	int int1 = 10;
	float float1 = 0.7f;
	printf("문자 출력 : %c\n", char1);
	printf("정수 출력 : %d\n", int1);
	printf("실수 출력 : %f\n", float1);
	printf("문자열 출력 : maxtac");*/

	// 강화 시스템 스토리 짠다.
	// 아이템 이름%s 현재 레벨 강화%d 확률
	// 강화를 시도합니다.

	printf("무기의 이름 : %s, 무기의 레벨 : %d, 무기 성공확률 : %f ", "맨티스블레이드", 1, 99.8);

}

