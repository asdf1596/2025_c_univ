#include<stdio.h>
int main() {
	int input = 0;
	printf("���� �Է� ");
	scanf("%d%*c", &input);
	switch (input > 0)
	{
	case 1:
		printf("�Էµ� ������ ��� �Դϴ�.\n");
		break;
	default:
		if(input < 0)
			printf("�Էµ� ������ ���� �Դϴ�.\n");
		else
			printf("�Էµ� ������ 0 �Դϴ�.\n");
		break;
	}

	return 0;
}