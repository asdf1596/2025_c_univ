#include<stdio.h>
//1�� ������ �Լ�
void func1() {
	printf("1�� ������ �Լ��Դϴ�.\n");
}
//2�� ������ �Լ�
int func2() {
	printf("2�� ������ �Լ��Դϴ�.");
	return 100;
}
//3�� ������ �Լ�
void func3(int r) {
	printf("�Ű������� ���޵� �� : %d\n", r);
}
//4�� ������ �Լ�
char func4(char c) {
	return c;
}
int main() {
	func1();
	int r = func2();
	printf("func2�� ��ȯ �� %d\n", r);
	int v = 25;
	func3(v); // �Լ��� �Ű������� �μ��� ������ ������ ���
	// ���� ��ü�� ���޵Ǵ� ���� �ƴ϶� ������ ���� ���޵ȴ�.
	char c = func4('a');
	printf("func4()�� ������ �� ȸ��: %c\n", c);
	return 0;
}