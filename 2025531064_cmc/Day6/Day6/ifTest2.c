#include <stdio.h>
int main() {
	int num = 0;
	printf("2자리 정수를 입력하시오: ");
	scanf("%d%*c", &num);
	printf((num % 10 == 8 && num / 10 == 8) ? "1의 자리에 8이 존재한다.\n10의 자리에 8이 존재한다.\n" : ((num % 10 == 8) ? "1의 자리에 8이 존재한다.\n" : ((num / 10 == 8) ? "10의 자리에 8이 존재한다.\n" : "8이 존재하지 않는다.")));
	return 0;
}