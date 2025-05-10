#include <stdio.h>

int findNum(int num);

int main() {
	if (findNum(55)) {
		printf("8이 포함되어있습니다.");
	}
	else {
		printf("8이 포함되어있지 않습니다.");
	}

	return 0;
}

// 함수 이름 : findNum()
// 이 함수는 매개변수로 정수 1개를 전달받는다.
// 전달받은 정수는 무조건 2자리라고 가정하자!
// 2자리 정수에 어느 위치던(첫자리 또는 둘째자리) 숫자 8이 포함되어있는지 판단한다.
// 하나라도 있으면 1 반환, 없으면 0 반환
// 함수를 작성하시오
//

int findNum(int num)
{
	int isTrue = 0;
	if (num % 10 == 8 || num/10 == 8) {
		isTrue = 1;
	}
	return isTrue;
}
