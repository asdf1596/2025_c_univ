#include <stdio.h>

int main() {
	int input = 0;

	printf("���� �Է�: ");
	scanf("%d%*c", &input);

	// ��� ����� ��ø�� �����ϴ�!
	// ��� ���ο� �� �ٸ� ����� �ۼ��� �� �ִ�.
	if (input < 0) {
		printf("����");
	}
	else {
		printf((input == 0 ? "0�Դϴ�." : "���"));
		
	}
}