#include <stdio.h>
#include "MyFunctions.h"

int main() {
	func1();
	
	return 0;
}

//�Ʒ��ʿ� �Լ��� ������� �Ѵ�
//1�� �Լ��� ������
void func1() {
	printf("1�� ������ �Լ��Դϴ�.\n");
}
//2�� ������ ������
int func2() {
	printf("2�� ������ �Լ��Դϴ�.");
	return 100;
}
//3�� ������ ������
void func3(int r) {
	printf("�Ű������� ���޵� �� : %d\n", r);
}
//4�� ������ ������
char func4(char c) {
	return c;
}