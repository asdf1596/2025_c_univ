#include<stdio.h>
//1번 유형의 함수
void func1() {
	printf("1번 유형의 함수입니다.\n");
}
//2번 유형의 함수
int func2() {
	printf("2번 유형의 함수입니다.");
	return 100;
}
//3번 유형의 함수
void func3(int r) {
	printf("매개변수에 전달된 값 : %d\n", r);
}
//4번 유형의 함수
char func4(char c) {
	return c;
}
int main() {
	func1();
	int r = func2();
	printf("func2의 반환 값 %d\n", r);
	int v = 25;
	func3(v); // 함수의 매개변수에 인수로 변수를 지정한 경우
	// 변수 자체가 전달되는 것이 아니라 변수의 값이 전달된다.
	char c = func4('a');
	printf("func4()에 전달한 값 회수: %c\n", c);
	return 0;
}