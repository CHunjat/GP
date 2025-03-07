#include <stdio.h>
#include "Intro.h"


/* 비주얼스튜디오 단축키 : ctrl + k + d 자동 서식 맞춤 - 들여쓰기를 default 방식으로 맞춰줍니다.
* 컨트롤 +r+r 하면 이름다바꿈 드래그하고
*/

/*
* 간단한 시스템을 구현했습니다.
* RPG - 무기강화 시스템 
* - 조건문과 유저의 입력을 이용해서 선택 할 수 있게 만든다. - if 조건문의 활용 printf scanf_s 1주차
  - 헤더파일로 여러가지  만듦 Upgrade Currency, Random      - 기능분리
  - 전역변수 : 재화, 확률, 클리어 여부  등 - extern 전역에 필요한 변수를 공통으로 사용함.
  - 
  앞으로 추가할 것.
  - 키보드 입력에 따라서 변화하는 게 더 있으면 좋을 것 같다.
  - 콘솔 창에서 "플레이어" PLAYER  -  NPC 
    PLAYER - INPUTKEY를 이용해서 움직이는 것!

	이동 + 강화시스템 연동 <<- 겜프 2
  -

*/
int main()
{
	IntroMenu();
	/*for (int i = 0; i < 10; i++)
	{
		int randomNumber = ReturnRandomValue();
		int randomRange = ReturnRandomInRange(20, 40);
		printf(" 랜덤숫자 %d: %d\n", i + 1, randomRange);
	}*/

}