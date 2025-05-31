#include <stdio.h>
void arrayBasic();
void memSize();
void arrayValue();
void callByValue(int i);
void callByReference(int a[]);
void doubleArray();
int main() {
	//arrayBasic();
	//memSize();
	//arrayValue();
	//int i = 55;
	//callByValue(i);
	//printf("i : %d\n", i);
	//int a[5] = { 0 };
	//callByReference(a);
	// �迭�� �̸��� �μ��� �����ϸ� �Ҵ�� �޸� ��ü�� ���޵ȴ�.
	// ���࿡ �迭�� ũ�Ⱑ ũ�ٸ� �޸� �̵����� �������� �ȴ�.
	// ��κ��� C ��� ���������� �迭�� �μ��� �������� �ʴ´�.
	// �迭�� �����ϰ��� �Ѵٸ� �޴� ���� �����ͷ� �ϸ� ù �ּҸ� ���޵ȴ�.
	//printf("a[0]: %d\n", a[0]);
	doubleArray();
	return 0;
}
void arrayBasic() {
	int a[5] = { 0 }; // �迭�� ��� ��Ҹ� 0���� �ʱ�ȭ �Ѵ�.
	//int a[] = {1,2,3,4,5}; // �迭 ����� ������ŭ �޸𸮸� �����Ѵ�.
	// �迭�� ���ȣ ���� ������ �� �ִ� ��찡 �����Ѵ�.
	//int len = 5;
	//int a[len]; // �迭�� ũ��� ������ ����� ��� ����(������ �޸� �Ҵ� �Ұ�)
	//int a[3] = { 1,2,3,4 }; // �Ҵ�� �迭 �޸𸮸� ����

	//printf("a[5] : %d\n", a[5]);
	//printf("a[4] : %d\n", a[-1]); // ���̽㿡���� ������ ������ �ȉ�
	// ������ ������ ��� �Ұ� a[0:4] => ���� ��� �Ұ�!
	// index ��ȣ�� 0~n+1 ���̸� ��� ����

	for (int i = 0;i < 5;i++) {
		a[i] = i + 1;
		printf("a[%d]: %d\n", i, a[i]);
	}
}
void memSize() {
	//C���� ���� �Ǵ� �ڷ����� �ޤ��� ũ�⸦ Ȯ���� �� �ִ� �����ڸ� �����Ѵ�.
	// sizeOf() �����ڸ� �̿��ϸ� �迭 ��ü �޸� ũ�⸦ �� �� �ִ�
	int a[5] = { 0 };
	printf("�迭 a�� �޸� ũ�� : %d\n", sizeof(a));
	printf("�迭 a[0]�� �޸� ũ�� : %d\n", sizeof(a[0]));

	int length = sizeof(a) / sizeof(a[0]);
	printf("a �迭�� ��� ���� : %d\n", length);

	for (int i = 0;i < length;i++) {
		a[i] = i + 1;
		printf("%d\t", a[i]);
	}

	printf("�ڷ����� �޸� ũ�� : %d\n", sizeof(int));

}
void arrayValue() {
	int a[5] = { 0 };
	printf("a�� ��: %p\n", a);
	printf("a�� �ּҰ�: %p\n", &a);
	printf("a[0]�� �ּҰ�: %p\n", &a[0]);
}
void callByValue(int i) {
	i = 25;

}
//�Ű������� �迭�� ����� ��� �Լ� ���ο��� ���� ������ �� ������ ������ �ش�.
void callByReference(int a[]) { //�̰��� main�Լ��� �迭 a�� �ּҰ� ���޵ȴ�.
	a[0] = 25;
}
void doubleArray() {
	// �迭�� 2���� 3���� ���� �������� �����ϴ�
	//int a[2][3] = { {1,2,3},{4,5,6} };
	//int arr[2][3] = { 1,2,3,4,5,6 };
	int a2[3][3] = { 0 };

	printf("a2�迭�� �޸� ũ��: %d\n", sizeof(a2));
	printf("a2�迭 0�� ���� �޸� ũ��: %d\n", sizeof(a2[0]));
	printf("a2�迭 0�� ���� �迭 ����� ��(����): %d\n", sizeof(a2[0]) / sizeof(a2[0][0]));

	int column = sizeof(a2[0]) / sizeof(a2[0][0]);
	int row = sizeof(a2) / sizeof(a2[0]);
	printf("a2�� �� ��: %d, a2�� �� ��: %d\n", row, column);
	int num = 0; 
	for (int i = 0;i < row;i++) {// �� ��ȣ�� �����ϴ� �ݺ���
		for (int j = 0;j < column;j++) {// �� ��ȣ�� �����ϴ� �ݺ���
			a2[i][j] = ++num;
		}
	}
	for (register int i = 0;i < row;i++) {
		for (register int j = 0;j < column;j++) {
			printf("%d\t", a2[i][j]);

		}
		printf("\n");
	}

}