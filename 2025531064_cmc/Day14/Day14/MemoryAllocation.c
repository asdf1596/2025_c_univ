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
		//malloc()�� �޸� �Ҵ� ���� 
		return 1;
	}

	printf("malloc()���� �Ҵ�� p[0] : %d\n", p[0]); // malloc()���� �Ҵ�� �޸��� �� ��ҵ��� ������ �� ������

	if (p != NULL) {
		free(p);
	}

	p = (int*)calloc(size, sizeof(int));

	if (p == NULL) {
		//calloc()�� �޸� �Ҵ� ���� 
		return 1;
	}

	printf("calloc�� �Ҵ�� p[0] : %d\n", *(p+0)); // malloc()���� �Ҵ�� �޸��� �� ��ҵ��� ������ �� ������
	printf("calloc�� �Ҵ�� p[1] : %d\n", *(p+1)); // malloc()���� �Ҵ�� �޸��� �� ��ҵ��� ������ �� ������

	if (p != NULL) {
		free(p);
	}
}

void reAllocTest()
{
	// int Ÿ���̸� �ε��� ���� 3���� �޸𸮸� �Ҵ��Ѵ�
	// �� �ε��� ���뿡 1 2 3���� ���� �ʱ�ȭ �Ѵ�.
	// ����ϴٺ��� �޸� ũ��(�ε��� ��)�� ������ ��Ȳ�� �ȴ�.
	// �޸� ũ�⸦ 5ĭ���� �ø����� �Ѵٸ�???
	
	int length = 3;
	int* p = (int*)malloc(length * sizeof(int));

	if (p == NULL) {
		return 1;
	}
	
	p[0] = 1;
	p[1] = 2;
	p[2] = 3;

	// �� ��ġ���� 2ĭ�� �� �ʿ��ϴٸ�?
	// ���ο� �޸� ��ġ�� �Ҵ��ϰ� �� ��ġ�� p�� �����ϴ� �޸��� ���� �����ϰ� p�� ���ο� ��ġ�� ����Ű���� �����Ѵ�.
	//
	int newLen = 5;
	int* new_p = (int*)realloc(p, newLen * sizeof(int));
	if (new_p == NULL) {
		return 1;
	}

	p = new_p;
	new_p = NULL;

	printf("p[0] : %d\n", p[2]);
	// realloc()���� �Ҵ�� �޸𸮴� p�� ���� ����ϴ� ��ġ�� �������� ���� �ְ�
	// ������ ���� ���ο� ��ġ�� �Ҵ�ް� �ȴ�.
	if (p != NULL) {
		free(p);
	}

	p = new_p;

	
}
