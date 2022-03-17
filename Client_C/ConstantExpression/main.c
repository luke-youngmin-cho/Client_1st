﻿#include <stdio.h>

int main(void) {
	//정수형 
	printf("%d\n", 1);
	//문자형
	printf("%c\n", 'A');
	printf("%d\n", 'A');
	//실수형
	printf("%f\n", 1.232424);
	//문자열
	printf("sddsfasdfasdf");


	// 서식문자 ( %~ )
	// 문자열 내에 서식문자를 사용해서 인자를 표현할 수 있으며
	// 해당 인자 위치에 값을 삽입할 수 있다. 

	// 제어문자 / 특수문자 ( \ : BackSlash )
	// \~ 는 제어를 문자열 중에 사용하겠다는 문자 
	// \n : Line feed , 커서를 다음 줄로 옮김
	// \r : Carriage return , 커서를 해당줄 가장 앞으로 옮김
	// \b : Back space , 커서 위치를 왼쪽으로 옮김
	// \t : tap, 커서 위치를 8칸 단위로 옮김
	// \a : beep , 삐- 소리를 냄
}