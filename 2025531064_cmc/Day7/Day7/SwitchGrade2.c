#include<stdio.h>
int main() {
	int score = 0;
	printf("정수 입력 ");
	scanf("%d%*c", &score);
	//d
	// 실습 문제
	// 키보드로 정수 형태의 점수를 입력받아 등겁을 판별한다.
	// 단 점수는 0~100 사이의 값이어야 한다.
	// 이외의 점수는 잘못된 점수입니다
	// 95 100 A+
	// 85 89 A
	// 80 84 B
	// 75 79 C+
	// 70 74 C
	// 65 69 D+
	// 60 64 D
	// 이하 F
	//
	if (0 > score || score > 100) {
		printf("잘못된 점수입니다.");
	}
	else {
		if (score >= 90)
			printf("A");
		else if (score >= 80)
			printf("B");
		else if (score >= 70)
			printf("C");
		else if (score >= 60)
			printf("D");
		else
			printf("F");
		if ((score % 10 >= 5 || score == 100) && score > 60)
			printf("+\n");
	}
	return 0;
}