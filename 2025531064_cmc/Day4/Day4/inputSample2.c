#include <stdio.h>

int main() {
	//실습 : 자신의 이름과 친구의 이름을 입력 받는다.
	//입력된 값을 출력해보시오
	char myName[13] = "";
	char yourName[9] = "";
	printf("자신의 이름을 입력하세요 : ");
	scanf("%[^\n]%*c", myName);
	printf("친구의 이름을 입력하세요 : ");
	scanf("%[^\n]%*c", yourName);
	//printf("자신의 이름과 친구의 이름을 입력하세요 : ");
	//scanf("%s%*c%s%*c", myName, yourName);
	printf("당신의 이름과 친구의 이름은 %s, %s 입니다.", myName, yourName);
	return 0;
}