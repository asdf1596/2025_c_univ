#include<stdio.h>
int main() {
	int score = 0;
	printf("���� �Է� ");
	scanf("%d%*c", &score);
	//d
	// �ǽ� ����
	// Ű����� ���� ������ ������ �Է¹޾� ����� �Ǻ��Ѵ�.
	// �� ������ 0~100 ������ ���̾�� �Ѵ�.
	// �̿��� ������ �߸��� �����Դϴ�
	// 95 100 A+
	// 85 89 A
	// 80 84 B
	// 75 79 C+
	// 70 74 C
	// 65 69 D+
	// 60 64 D
	// ���� F
	//
	if (0 > score || score > 100) {
		printf("�߸��� �����Դϴ�.");
	}
	else {
		if (score >= 90)
			printf("A");
		else if (score >= 80)
			printf("B");
		else if (score >= 70)
			printf("C");
		else if (score >= 60)
			printf("D");
		else
			printf("F");
		if ((score % 10 >= 5 || score == 100) && score > 60)
			printf("+\n");
	}
	return 0;
}