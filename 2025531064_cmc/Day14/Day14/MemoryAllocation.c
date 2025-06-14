#include<stdio.h>
#include<stdlib.h>

void memoryAllocTest();
void reAllocTest();

int main() {
	//memoryAllocTest();
	reAllocTest();

	return 0;

}

void memoryAllocTest()
{
	int size = 5;
	int* p = (int*)malloc(size * sizeof(int));
	if (p == NULL) {
		//malloc()을 메모리 할당 실패 
		return 1;
	}

	printf("malloc()으로 할당된 p[0] : %d\n", p[0]); // malloc()으로 할당된 메모리의 각 요소들은 쓰레기 값 보관됨

	if (p != NULL) {
		free(p);
	}

	p = (int*)calloc(size, sizeof(int));

	if (p == NULL) {
		//calloc()을 메모리 할당 실패 
		return 1;
	}

	printf("calloc로 할당된 p[0] : %d\n", *(p+0)); // malloc()으로 할당된 메모리의 각 요소들은 쓰레기 값 보관됨
	printf("calloc로 할당된 p[1] : %d\n", *(p+1)); // malloc()으로 할당된 메모리의 각 요소들은 쓰레기 값 보관됨

	if (p != NULL) {
		free(p);
	}
}

void reAllocTest()
{
	// int 타입이며 인덱스 수는 3개인 메모리를 할당한다
	// 각 인덱스 위취에 1 2 3으로 수동 초기화 한다.
	// 사용하다보니 메모리 크기(인덱스 수)가 부족한 상황이 된다.
	// 메모리 크기를 5칸으로 늘리려고 한다면???
	
	int length = 3;
	int* p = (int*)malloc(length * sizeof(int));

	if (p == NULL) {
		return 1;
	}
	
	p[0] = 1;
	p[1] = 2;
	p[2] = 3;

	// 이 위치에서 2칸이 더 필요하다면?
	// 새로운 메모리 위치를 할당하고 그 위치에 p가 참조하는 메모리의 값을 복사하고 p가 새로운 위치를 가리키도록 변경한다.
	//
	int newLen = 5;
	int* new_p = (int*)realloc(p, newLen * sizeof(int));
	if (new_p == NULL) {
		return 1;
	}

	p = new_p;
	new_p = NULL;

	printf("p[0] : %d\n", p[2]);
	// realloc()으로 할당된 메모리는 p가 원래 사용하던 위치에 연속적일 수도 있고
	// 보통의 경우는 새로운 위치를 할당받게 된다.
	if (p != NULL) {
		free(p);
	}

	p = new_p;

	
}
