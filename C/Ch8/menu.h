#pragma once
#include <stdio.h>
#include <stdbool.h>
#include <Windows.h> //system("cls")
#include <conio.h> // 키보드의 있는 문자값을 가져올수있게 하는 녀석 _getch() 캐릭터 데이터를 가져오는 함수
//헤더는 그 값을 알려주는거는 별로다
/*
* 함수 (Function)
* 
* 변수의 선언
* 데이터 타입 변수 이름; 
* int variablename; 변수의 선언

  함수의 선언
  (데이터 타입) 함수 이름();
    리턴 타입   

    호출
    변수의 사용법 : 변수 이름을 가져다 쓰면 됐었다.
    함수의 사용법 : 함수의 이름을 가져와서 사용하는데? 
 
*/

/*
* 헤더 파일은 함수를 선언하여 사용한다.
*/

void SelectMenu();


// 함수는 가져올때 소괄호를 붙인다!!! // 얘가 어떤 의미를 가지고 있는지 정의해줘야한다 소스파일이라는 뜻
// 리턴 타입 + [이름 SelectMenu();]
