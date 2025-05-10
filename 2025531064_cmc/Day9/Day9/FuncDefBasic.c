#include <stdio.h>
#include "MyFunctions.h"

int main() {
	func1();
	
	return 0;
}

//아래쪽에 함수를 만들고자 한다
//1번 함수의 구현부
void func1() {
	printf("1번 유형의 함수입니다.\n");
}
//2번 유형의 구현부
int func2() {
	printf("2번 유형의 함수입니다.");
	return 100;
}
//3번 유형의 구현부
void func3(int r) {
	printf("매개변수에 전달된 값 : %d\n", r);
}
//4번 유형의 구현부
char func4(char c) {
	return c;
}