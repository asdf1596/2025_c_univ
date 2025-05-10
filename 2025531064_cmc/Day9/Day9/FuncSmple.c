#include <stdio.h>

int checkScope(int num);
// 실습:함수 이름은  isPositive()이다.
// 반환 유형은 int (0또는 1, 즉 참 또는 거짓)
// 매개변수로 정수 1개를 전달한다.
// 함수에서는 매개변수로 전달받은 값(인수)이 양수이면 1반환
// 아니면 0 반환
// 힘수를 작성하시오
int isPositive(int num);
int isOdd(int num);

// 함수만들자! 이 함수는 2개의 값을 전달받아 두 수의 합을 구하여 그 값을 반환하는 기능을 가지게 만들겠다.
int plus(int num1, int num2); // 매개변수는 동일 자료형이라도 반드시 타입을 명시한다.
float div(float num1, float num2);

int main() {
	int returnValue = checkScope(195);// 함수의 호출은 값을 의미한다.
	printf("반환 값: %d\n", returnValue);
	printf("반환 값: %d\n", checkScope(5));

	if (checkScope(5)) {
		printf("0~100의 값입니다.\n");
	}
	else {
		printf("유효한 값이 아닙니다.\n");
	}

	if (isPositive(5)) {
		printf("양수입니다.\n");
	}
	else {
		printf("양수가 아닙니다.\n");
	}
	int num = 5;
	if (isPositive(num)) {
		if (isOdd(5)) {
			printf("홀수입니다.\n");
		}
		else {
			printf("홀수가 아닙니다.\n");
		}
	}

	printf("%f", div(1, 2));

	return 0;
}
// checkScope() 함수는 매개변수에 전달된 값의 범위를 판단해서 그 결과를 반환하도록
// 구성하는 함수를 만들려는 것이다. 0~100 사이 인지 판단.
int checkScope(int num) // 함수 내부의 변수는 해당 함수 내부에서만 존재하는 지역 변수이다.
{
	int isTrue = 0;
	if (num >= 0 && num <= 100) {
		isTrue =  1;
	}
	return isTrue;
}

int isPositive(int num)
{
	int isPositive = 0;
	if (num > 0) {
		isPositive = 1;
	}
	return isPositive;
}

int isOdd(int num)
{
	int isTrue = 0;
	if (isPositive(num)) {
		if (num % 2 == 1) {
			isTrue = 1;
		}
	}
	return isTrue;
	//return (num%2);
}

int plus(int num1, int num2)
{
	return num1+num2;
}
float div(float num1, float num2)
{
	float ans = 0.0f;
	if (num2 != 0) {
		ans = num1 / num2;
	}
	return ans;
}
// 실습 : 함수이름은 div()이다.
// 이 함수는 두개의 정수를 전달받아 나눗셈한 결과를 반환한다.
//

// 실습: 함수 이름은 isOdd()이다.
// 기능은 정수 1개를 전달 받아
// 그 값이 홀수인지 판단한다
// 홀수면 1 반환, 아니면 0 반환
// 함수를 작성하시오
