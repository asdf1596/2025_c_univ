#include <stdio.h>

int main() {
	int num1 = 0; //해당 자료형의 기본값 (정수형 9)

	//입력 안내문장
	printf("정수 입력 : ", num1);
	//입략 처리;
	scanf("%d", &num1);

	printf("num1 : %d\n", num1); //입력 후 변수 상태 상태 확인을 위한 출력
	return 0;
}
//실행시 프로젝트 빌드 후 실행단계로 진행한다.
// ctrl + shift + b : 빌드 단축키
// ctrl + F5 : 실행 단축키