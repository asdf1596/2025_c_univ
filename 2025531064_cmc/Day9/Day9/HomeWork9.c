#include <stdio.h>

int findNum(int num);

int main() {
	if (findNum(55)) {
		printf("8�� ���ԵǾ��ֽ��ϴ�.");
	}
	else {
		printf("8�� ���ԵǾ����� �ʽ��ϴ�.");
	}

	return 0;
}

// �Լ� �̸� : findNum()
// �� �Լ��� �Ű������� ���� 1���� ���޹޴´�.
// ���޹��� ������ ������ 2�ڸ���� ��������!
// 2�ڸ� ������ ��� ��ġ��(ù�ڸ� �Ǵ� ��°�ڸ�) ���� 8�� ���ԵǾ��ִ��� �Ǵ��Ѵ�.
// �ϳ��� ������ 1 ��ȯ, ������ 0 ��ȯ
// �Լ��� �ۼ��Ͻÿ�
//

int findNum(int num)
{
	int isTrue = 0;
	if (num % 10 == 8 || num/10 == 8) {
		isTrue = 1;
	}
	return isTrue;
}
