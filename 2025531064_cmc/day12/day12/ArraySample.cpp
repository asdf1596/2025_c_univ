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
	// 배열의 이름을 인수로 전달하면 할당된 메모리 전체가 전달된다.
	// 만약에 배열의 크기가 크다면 메모리 이동량이 많아지게 된다.
	// 대부분의 C 언어 예제에서는 배열을 인수로 전달하지 않는다.
	// 배열을 전달하고자 한다면 받는 쪽을 포인터로 하면 첫 주소만 전달된다.
	//printf("a[0]: %d\n", a[0]);
	doubleArray();
	return 0;
}
void arrayBasic() {
	int a[5] = { 0 }; // 배열의 모든 요소를 0으로 초기화 한다.
	//int a[] = {1,2,3,4,5}; // 배열 요소의 개수만큼 메모리를 설정한다.
	// 배열의 대괄호 값을 생략할 수 있는 경우가 존재한다.
	//int len = 5;
	//int a[len]; // 배열의 크기는 정수형 상수만 사용 가능(변수로 메모리 할당 불가)
	//int a[3] = { 1,2,3,4 }; // 할당된 배열 메모리를 참조

	//printf("a[5] : %d\n", a[5]);
	//printf("a[4] : %d\n", a[-1]); // 파이썬에서의 사용법은 적용이 안됌
	// 스코프 연산자 사용 불가 a[0:4] => 문법 사용 불가!
	// index 번호는 0~n+1 사이만 사용 가능

	for (int i = 0;i < 5;i++) {
		a[i] = i + 1;
		printf("a[%d]: %d\n", i, a[i]);
	}
}
void memSize() {
	//C언어에는 변수 또는 자료형의 메ㅁ리 크기를 확인할 수 있는 연산자를 제공한다.
	// sizeOf() 연산자를 이용하면 배열 전체 메모리 크기를 알 수 있다
	int a[5] = { 0 };
	printf("배열 a의 메모리 크기 : %d\n", sizeof(a));
	printf("배열 a[0]의 메모리 크기 : %d\n", sizeof(a[0]));

	int length = sizeof(a) / sizeof(a[0]);
	printf("a 배열의 요소 길이 : %d\n", length);

	for (int i = 0;i < length;i++) {
		a[i] = i + 1;
		printf("%d\t", a[i]);
	}

	printf("자료형의 메모리 크기 : %d\n", sizeof(int));

}
void arrayValue() {
	int a[5] = { 0 };
	printf("a의 값: %p\n", a);
	printf("a의 주소값: %p\n", &a);
	printf("a[0]의 주소값: %p\n", &a[0]);
}
void callByValue(int i) {
	i = 25;

}
//매개변수로 배열을 사용한 경우 함수 내부에서 값을 변경할 시 원본에 영향을 준다.
void callByReference(int a[]) { //이곳에 main함수의 배열 a의 주소가 전달된다.
	a[0] = 25;
}
void doubleArray() {
	// 배열은 2차원 3차원 등의 다차원이 가능하다
	//int a[2][3] = { {1,2,3},{4,5,6} };
	//int arr[2][3] = { 1,2,3,4,5,6 };
	int a2[3][3] = { 0 };

	printf("a2배열의 메모리 크기: %d\n", sizeof(a2));
	printf("a2배열 0번 행의 메모리 크기: %d\n", sizeof(a2[0]));
	printf("a2배열 0번 행의 배열 요소의 수(길이): %d\n", sizeof(a2[0]) / sizeof(a2[0][0]));

	int column = sizeof(a2[0]) / sizeof(a2[0][0]);
	int row = sizeof(a2) / sizeof(a2[0]);
	printf("a2의 행 수: %d, a2의 열 수: %d\n", row, column);
	int num = 0; 
	for (int i = 0;i < row;i++) {// 행 번호를 증가하는 반복문
		for (int j = 0;j < column;j++) {// 열 번호를 증가하는 반복문
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