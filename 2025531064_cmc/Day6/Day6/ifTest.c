#include <stdio.h>

int main() {
	//정수를 입력받아 입력정수가 짝수인지 홀수인지 판단하시오.
	int num = 0;
	printf("정수 입력: ");
	scanf("%d%*c", &num);
	//printf(num == 0 ? "0입니다. 다시 하세요." : (num % 2 == 0 ? "짝수" : "홀수"));
	if (num > 0 && num % 2 == 0) {
		printf("짝");
	}
	else if (num > 0) {
		printf("홀");
	}
	else {
		printf("판단불가");
	}
}