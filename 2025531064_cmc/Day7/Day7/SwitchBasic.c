#include<stdio.h>
int main() {
	int input = 0;
	printf("���� �Է� ");
	scanf("%d%*c", &input);
	switch (input) {
	case 1:
		printf("1. �¸��\n");
		break;
	case 2:
		printf("2. ����\n");
		break;
	case 3:
		printf("3. ���\n");
		break;
	default:
		printf("�ȳ�");
		break;
	}

	return 0;
}