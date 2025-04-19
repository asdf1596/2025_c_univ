#include<stdio.h>
int main() {
	int input = 0;
	printf("정수 입력 ");
	scanf("%d%*c", &input);
	
	//스위치 문 내부의 break문을 생략할 경우 실습
	//1. 임원, 2. 사원, 3.고객, 기타, 방문객
	switch (input > 0)
	{
	case 1:
		printf("임원: 회사 기밀 정보 접근 가능\n");
		break;
	case 2:
		printf("사원: 사내내 연락처, 고객정보 연함 가능\n");
		break;
	case 3:
		printf("고객: 자신의 주문 내역 연람 가능");
		break;

	default:
		printf("방문자: 회사위치, 고객센터 전화전요 연람 가능\n");
		break;
	}

	return 0;
}