#include <stdio.h>

int checkScope(int num);
// �ǽ�:�Լ� �̸���  isPositive()�̴�.
// ��ȯ ������ int (0�Ǵ� 1, �� �� �Ǵ� ����)
// �Ű������� ���� 1���� �����Ѵ�.
// �Լ������� �Ű������� ���޹��� ��(�μ�)�� ����̸� 1��ȯ
// �ƴϸ� 0 ��ȯ
// ������ �ۼ��Ͻÿ�
int isPositive(int num);
int isOdd(int num);

// �Լ�������! �� �Լ��� 2���� ���� ���޹޾� �� ���� ���� ���Ͽ� �� ���� ��ȯ�ϴ� ����� ������ ����ڴ�.
int plus(int num1, int num2); // �Ű������� ���� �ڷ����̶� �ݵ�� Ÿ���� ����Ѵ�.
float div(float num1, float num2);

int main() {
	int returnValue = checkScope(195);// �Լ��� ȣ���� ���� �ǹ��Ѵ�.
	printf("��ȯ ��: %d\n", returnValue);
	printf("��ȯ ��: %d\n", checkScope(5));

	if (checkScope(5)) {
		printf("0~100�� ���Դϴ�.\n");
	}
	else {
		printf("��ȿ�� ���� �ƴմϴ�.\n");
	}

	if (isPositive(5)) {
		printf("����Դϴ�.\n");
	}
	else {
		printf("����� �ƴմϴ�.\n");
	}
	int num = 5;
	if (isPositive(num)) {
		if (isOdd(5)) {
			printf("Ȧ���Դϴ�.\n");
		}
		else {
			printf("Ȧ���� �ƴմϴ�.\n");
		}
	}

	printf("%f", div(1, 2));

	return 0;
}
// checkScope() �Լ��� �Ű������� ���޵� ���� ������ �Ǵ��ؼ� �� ����� ��ȯ�ϵ���
// �����ϴ� �Լ��� ������� ���̴�. 0~100 ���� ���� �Ǵ�.
int checkScope(int num) // �Լ� ������ ������ �ش� �Լ� ���ο����� �����ϴ� ���� �����̴�.
{
	int isTrue = 0;
	if (num >= 0 && num <= 100) {
		isTrue =  1;
	}
	return isTrue;
}

int isPositive(int num)
{
	int isPositive = 0;
	if (num > 0) {
		isPositive = 1;
	}
	return isPositive;
}

int isOdd(int num)
{
	int isTrue = 0;
	if (isPositive(num)) {
		if (num % 2 == 1) {
			isTrue = 1;
		}
	}
	return isTrue;
	//return (num%2);
}

int plus(int num1, int num2)
{
	return num1+num2;
}
float div(float num1, float num2)
{
	float ans = 0.0f;
	if (num2 != 0) {
		ans = num1 / num2;
	}
	return ans;
}
// �ǽ� : �Լ��̸��� div()�̴�.
// �� �Լ��� �ΰ��� ������ ���޹޾� �������� ����� ��ȯ�Ѵ�.
//

// �ǽ�: �Լ� �̸��� isOdd()�̴�.
// ����� ���� 1���� ���� �޾�
// �� ���� Ȧ������ �Ǵ��Ѵ�
// Ȧ���� 1 ��ȯ, �ƴϸ� 0 ��ȯ
// �Լ��� �ۼ��Ͻÿ�
