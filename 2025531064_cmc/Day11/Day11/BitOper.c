#include<stdio.h>

int findPosition(int srcNum);
void print8Position(int mask);

int main() {
	// 무한 반복문으로 아래 3가지 작업을 계속한다.
	// 키보드로 정수 1개를 입력받는다.
	// findPosition() 함수로 정수 값을 전달하며 호출한다.
	// 반환 받은 결과를 화면에 출력한다
	//

	int input = 0;
	while (1) {
		printf("정수 입력 : ");
		scanf("%d", &input);
		int result = findPosition(input);
		printf("찾기 결과 값: %d\n", result);
		print8Position(result);
	}
	return 0;
}

int findPosition(int srcNum) {
	int result = 0, data = 1;
	while (srcNum > 0) {
		if (srcNum % 10 == 8) {
			result += data;
		}
		srcNum = srcNum / 10;
		//printf("%d", data);
		data <<=1;
	}
	return result;
}

void print8Position(int mask) {
	int num = 1;
		if (mask == 0) {
			printf("8이 포함되지 않은 수입니다.\n");
	}
	while (mask > 0) {
		if ((mask & 1)	 == 1) {
			printf("8은 %d의 자리에 있습니다.\n", num);
		}
		mask >>= 1;
		num *= 10;
	}
}