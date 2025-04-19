#include<stdio.h>
int main() {
	int input = 0;
	printf("정수 입력 ");
	scanf("%d%*c", &input);
	switch (input > 0)
	{
	case 1:
		printf("입력된 정수는 양수 입니다.\n");
		break;
	default:
		if(input < 0)
			printf("입력된 정수는 음수 입니다.\n");
		else
			printf("입력된 정수는 0 입니다.\n");
		break;
	}

	return 0;
}