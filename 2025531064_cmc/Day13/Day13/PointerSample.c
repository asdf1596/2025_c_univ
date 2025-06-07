#include <stdio.h>
#include <stdlib.h>

void pointerBasic();
void callByRef(int* p);
void callByValue(int* a, int *b);
void sendArray(int a[], int len);
void sendAddress(int* p, int len);
void dynamicAlloc();

int main() {
	//pointerBasic();
	/*int i = 25;

	callByRef(&i);

	printf("i의 값: %d\n", i);*/
	//int a = 1, b = 2;
	// 이 지역에서 a 와 b 의 값의 교환한다면
	/*int temp = 0;
	temp = a;
	a = b;
	b = temp;*/	
	/*callByValue(&a, &b);
	printf("a: %d, b : %d", a, b);*/

	/*int a[5] = { 0 };
	int len = sizeof(a) / sizeof(a[0]);
	printf("a의 길이 : %d\n", len);
	sendArray(a, len);*/
	/*sendAddress(a, len);*/
	dynamicAlloc();
	return  0;
}

void pointerBasic() {
	int i = 25;

	// 포인터 변수 선언시 별표의 위치는 자료형과 변수명 사이에만 있으며 됨
	short* p = &i;

	printf("i 값: %d\n", i);
	printf("i 주소 값: %p\n", &i);
	printf("p 값 %p\n", p);
	printf("p 주소 값 %p\n", &p);
	printf("p 참조하는 위치의 값: %d\n", *p);
	printf("i 메모리 크기: %d\n",  sizeof(i));
	printf("p 메모리 크기: %d\n",  sizeof(p));


}

void callByRef(int* p)
{
	*p = 25;

}

void callByValue(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*a = temp;
}

void sendArray(int a[], int len)// 함수의 인수로 배열을 전달하면 배열 전체 전달, 다만 배열의 크기를 매개변수를 통해 얻을 수 없다.
{
	len = sizeof(a) / sizeof(a[0]);
	printf("sendArray의 길이", len);
	for (int i = 0;i < 5;i++) {
		//a[i] = i+1;
		*(a+i) = i + 1; // 이 문장의 뱅ㄹ 포기법을 포인터 표기법으로 변경하시오.
	}
	for (int i = 0;i < 5;i++) {
		//printf("a[%d] : %d\n", a[i]);
		printf("a[%d] : %d\n", *(a+i));
	}
}

void sendAddress(int* p, int len) // 인수로 배열 첫번째 위치의 수고사 전달된다. 메모리 전달량이 적다.
{// 포인터가 참조하는 주소만 갖고는 ㅐ열의 전체 길이를 수할 수 없다.
	for (int i = 0;i < 5;i++) {
		*(p + i) = i + 1; // 이것은 포인터 표기법으로 배열을 참조한 것이다.
		// 포인터 변수를 배열처럼 사용할 수도 있다.
		p[i] = i + 1;
		//printf("p + %d : %d\n", i, *(p + i));
		printf("p + %d : %d\n", i, *(p+i));
		// 배열 포기법을 포인터 표기법으로 변경하기!
		// a[0] => *(a+0)
		// a[1] => *(a+1)
		// a[3] => *(a+3)
	}
}

void dynamicAlloc()
{
	// 동적할당에 사용되는 함수들은 stdlib.h 라이브러리를 포함해야한다.
	// 함수들은 malloc(), calloc(), realloc() 세가지가 대표적이다.
	int len = 5;
	int* p = (int*)malloc(5*sizeof(int)); // 괄호 사이는 할당되는 전체 메모리 크기를 뜻한다.
	// 동적 할당시 메모리 크기는 "길이 * 자료형의 크기" 혀애로 작성한다. 
	// 5 * sizeof(타입) => 상수 5보다는 변수로 설정하는 것이 하드코딩을 막을 수 있다.
	// 길이변수 * sizeof(자료형) 의 형태를 갖는다.
	if (p == NULL) { // 메모리 동적 할당이 실패한 경우의 처리 코드를 작성해 주자!
		perror("메모리 할당 실패!\n");
		printf("메모리 할당 실패!\n");
		return 1;
	}
	*(p + 0) = 0;
	p[0] = 1;
	printf("p의 척번쨰 참조 위치 값: %d\n", *(p + 0));
	printf("p의 척번쨰 참조 위치 값: %d\n", *(p + 5));

	// 배열 표기법으로 작성하시오
	// 0번 위치 부터 마지막 위치까지 값을 모두 30으로 설정하고 각자리를 출력해 보세요!
	// 반목분 사용
	for (int i = 0;i < len;i++) {
		*(p + i) = 30;
		printf("%d번째 자리의 값 : %d\n", i+1, *(p + i));
	}

	// 동적 할당된 메모리의 사용이 모두 끝나면 반드시 해당 메모리를 반환해야 한다.
	// 이 과정이 없다면 메모리 누수(leek)가 발생되어 시스템이 비정상 종료될 수 있다.

	free(p);
}
