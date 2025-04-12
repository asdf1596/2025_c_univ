#include <stdio.h>

int main() {
	int input = 0;

	printf("정수 입력: ");
	scanf("%d%*c", &input);

	// 모든 제어문은 중첩이 가능하다!
	// 제어문 내부에 또 다른 제어문을 작성할 수 있다.
	if (input < 0) {
		printf("음수");
	}
	else {
		printf((input == 0 ? "0입니다." : "양수"));
		
	}
}