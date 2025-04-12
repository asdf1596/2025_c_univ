#include <stdio.h>

int main(){
	// 1.변수 선언 및 초기화
	int  input = 0;
	// 2.안내문 출력
	printf("정수 입력 : ");
	// 3.입력 처리
	scanf("%d%*c", &input);
	// 4.비교 판단
	// if문 밑에 실행할 명령문이 하나라면 괄호 생략 가능
	if (input > 0) {
		// 5.True시 할 일
		printf("입력된 %d는  양수입니다.", input);
	}
	else {
		// 6.False시 할 일
		printf("입력된 정수 %d는 양수가 아닙니다.", input);
	}
	// 비교연산을 너무 비효율적으로 해서는 안됀다.
	if (input > 0) {
		printf("입력된 %d는 양수입니다.", input);
	}if (input == 0) {
		printf("입력된 %d는 0입니다.", input);
	}
	if (input < 0) {
		printf("입력된 %d는 음수입니다.", input);
	}
return 0;
}