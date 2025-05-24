#include<stdio.h>

int findPosition(int srcNum);
void print8Position(int mask);

int main() {
	// ���� �ݺ������� �Ʒ� 3���� �۾��� ����Ѵ�.
	// Ű����� ���� 1���� �Է¹޴´�.
	// findPosition() �Լ��� ���� ���� �����ϸ� ȣ���Ѵ�.
	// ��ȯ ���� ����� ȭ�鿡 ����Ѵ�
	//

	int input = 0;
	while (1) {
		printf("���� �Է� : ");
		scanf("%d", &input);
		int result = findPosition(input);
		printf("ã�� ��� ��: %d\n", result);
		print8Position(result);
	}
	return 0;
}

int findPosition(int srcNum) {
	int result = 0, data = 1;
	while (srcNum > 0) {
		if (srcNum % 10 == 8) {
			result += data;
		}
		srcNum = srcNum / 10;
		//printf("%d", data);
		data <<=1;
	}
	return result;
}

void print8Position(int mask) {
	int num = 1;
		if (mask == 0) {
			printf("8�� ���Ե��� ���� ���Դϴ�.\n");
	}
	while (mask > 0) {
		if ((mask & 1)	 == 1) {
			printf("8�� %d�� �ڸ��� �ֽ��ϴ�.\n", num);
		}
		mask >>= 1;
		num *= 10;
	}
}