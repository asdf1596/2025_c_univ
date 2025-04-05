#include <stdio.h>

int main() {
	//정수 입력을 2개 받는다.
	//변수가 2개 필요하다.
	int num1 = 0, num2 = 0, result = 0;

	////안내문
	//printf("정수 입력:");
	////입력처리
	//scanf("%d", &num1);

	////안내문장
	//printf("정수 입력:");
	////입력처리
	//scanf("%d", &num2);

	//scanf() 함수를 한번만 사용해서 동일한 결과를 만들자!
	printf("정수 2개를 입력하세요! ");
	scanf("%d%*c%d%*c", &num1, &num2);
	//%*c는 버퍼에 남아있는 엔터 값을 지워라! 라는 명령이다.
	

	//간단한 연산
	result = num1 + num2;
	//결과 출력
	printf("덧셈 결과: %d\n", result);

	char name[10] = "";
	printf("이름 입력 : ");
	scanf("%s", name);
	printf("당신의 이름은 %s 입니다.\n", name);
	return 0;
}