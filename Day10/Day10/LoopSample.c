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
	//printf("100은 %d의 자리의 수 입니다.\n", cnt);
	if (find8(508)) {
		printf("8을 포함한 수 입니다.");
	}
	else {
		printf("8을 포함하지 않은 수입니다.");
	}
	return 0;
}

void forBasic(int len){
	//별 10개 출력
	for (int i = 0; i < len; i++){
		printf("*");
	}

	printf("\n");
	//0에서 9까지 출력
	for (int i = 0; i < len; i++)
	{
		printf("%d", i+1);
	}
	printf("\n");
	//1에서 10까지의 총합을 출력하시오
	int sum = 0;
	for (int i = 0;i < len;i++) {
		sum += i + 1;
	}
	printf("1~10의 총합은 %d", sum);
	printf("\n");

	//실습문제: 1에서 10범위 내의 짝수의 합을 구하시오
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
	printf("1~10의 홀수의 총합은 %d\n", oddSum);
	printf("1~10의 짝수의 총합은 %d\n", evenSum);
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
		printf("정수 입력 : ");
		scanf("%d", & num);
		printf("입력 값 : %d\n", num);
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
	// 1. 양수로 카운트하는게 편하다.
	// 음수라면 양수로 만든다
	//
	if (num < 0) {
		num *= -1;
	}
	int cnt = 0;

	// 2. 0을 전달받으면 1자리라고 인식한다.
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

// 실습문제 : 자리수가 정해지지 않는 정수를 매개변수에 전달받아 
// 해당 정수에 8이 포함돼어있는지 판단한 결과를 반환하는 함수를 작성하시오.
// 함수의 이름은 find8()

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