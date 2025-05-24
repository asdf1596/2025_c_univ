#include<stdio.h>

void forBasic(int len);

void printRect(int len);

void printLeftTriangle(int len);

void printBelowLeftTriangle(int len);

void printRightTiangle(int len);

void whileBasic();

void forToWhile();

int countDigit(int num);

int find8(int num);

int main() {
	//forBasic(10);
	//printRect(3);
	//printLeftTriangle(3);
	//printBelowLeftTriangle(3);
	//printRightTiangle(5);
	//whileBasic();
	//forToWhile();
	//int cnt = countDigit(100);
	//printf("100�� %d�� �ڸ��� �� �Դϴ�.\n", cnt);
	if (find8(508)) {
		printf("8�� ������ �� �Դϴ�.");
	}
	else {
		printf("8�� �������� ���� ���Դϴ�.");
	}
	return 0;
}

void forBasic(int len){
	//�� 10�� ���
	for (int i = 0; i < len; i++){
		printf("*");
	}

	printf("\n");
	//0���� 9���� ���
	for (int i = 0; i < len; i++)
	{
		printf("%d", i+1);
	}
	printf("\n");
	//1���� 10������ ������ ����Ͻÿ�
	int sum = 0;
	for (int i = 0;i < len;i++) {
		sum += i + 1;
	}
	printf("1~10�� ������ %d", sum);
	printf("\n");

	//�ǽ�����: 1���� 10���� ���� ¦���� ���� ���Ͻÿ�
	int oddSum = 0, evenSum = 0;
	for (int i = 0; i < len; i+=1)
	{
		if ((i + 1) % 2 == 0) {
			evenSum += i + 1;
		}
		else {
			oddSum += i + 1;
		}
	}
	printf("1~10�� Ȧ���� ������ %d\n", oddSum);
	printf("1~10�� ¦���� ������ %d\n", evenSum);
}

void printRect(int len)
{
	for (int i = 0; i < len; i++)
	{
		for (int j = 0; j < len; j++)
		{
			printf("*");
		}printf("\n");
	}
}

void printLeftTriangle(int len)
{
	for (int i = 0; i < len; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	printf("\n");
}

void printBelowLeftTriangle(int len)
{
	for (int i = 0; i < len; i++)
	{
		for (int j = 0; j < len-i; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	printf("\n");
}

void printRightTiangle(int len)
{
	for (int i = 0; i < len; i++)
	{
		for (int j = 0; j < len; j++)
		{
			if (j < len - i - 1) {
				printf(" ");
			}
			else {
				printf("*");
			}
		}
		printf("\n");
	}
	printf("\n");
}

void whileBasic()
{
	int num = 1;
	while (num != 0) {
		printf("���� �Է� : ");
		scanf("%d", & num);
		printf("�Է� �� : %d\n", num);
	}
}

void forToWhile() {
	for (int i = 0; i < 10; i++){
		printf("%d", i + 1);
	}printf("\n");
	int i = 0;
	while (i < 10) {
		printf("%d", i+1);
		i++;
	}
}

int countDigit(int num)
{
	// 1. ����� ī��Ʈ�ϴ°� ���ϴ�.
	// ������� ����� �����
	//
	if (num < 0) {
		num *= -1;
	}
	int cnt = 0;

	// 2. 0�� ���޹����� 1�ڸ���� �ν��Ѵ�.
	if (num == 1) {
		cnt += 1;
	}
	else {
		while (num > 10) {
			num /= 10;
			cnt++;
		}
	}

	return cnt;
}

// �ǽ����� : �ڸ����� �������� �ʴ� ������ �Ű������� ���޹޾� 
// �ش� ������ 8�� ���Եž��ִ��� �Ǵ��� ����� ��ȯ�ϴ� �Լ��� �ۼ��Ͻÿ�.
// �Լ��� �̸��� find8()

int find8(int num) {
	while (num > 10) {
		if (num % 10 == 8) {
			return 1;
		}
		else {
			num /= 10;
		}
	}
	return 0;
}