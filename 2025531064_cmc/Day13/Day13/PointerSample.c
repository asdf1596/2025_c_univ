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

	printf("i�� ��: %d\n", i);*/
	//int a = 1, b = 2;
	// �� �������� a �� b �� ���� ��ȯ�Ѵٸ�
	/*int temp = 0;
	temp = a;
	a = b;
	b = temp;*/	
	/*callByValue(&a, &b);
	printf("a: %d, b : %d", a, b);*/

	/*int a[5] = { 0 };
	int len = sizeof(a) / sizeof(a[0]);
	printf("a�� ���� : %d\n", len);
	sendArray(a, len);*/
	/*sendAddress(a, len);*/
	dynamicAlloc();
	return  0;
}

void pointerBasic() {
	int i = 25;

	// ������ ���� ����� ��ǥ�� ��ġ�� �ڷ����� ������ ���̿��� ������ ��
	short* p = &i;

	printf("i ��: %d\n", i);
	printf("i �ּ� ��: %p\n", &i);
	printf("p �� %p\n", p);
	printf("p �ּ� �� %p\n", &p);
	printf("p �����ϴ� ��ġ�� ��: %d\n", *p);
	printf("i �޸� ũ��: %d\n",  sizeof(i));
	printf("p �޸� ũ��: %d\n",  sizeof(p));


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

void sendArray(int a[], int len)// �Լ��� �μ��� �迭�� �����ϸ� �迭 ��ü ����, �ٸ� �迭�� ũ�⸦ �Ű������� ���� ���� �� ����.
{
	len = sizeof(a) / sizeof(a[0]);
	printf("sendArray�� ����", len);
	for (int i = 0;i < 5;i++) {
		//a[i] = i+1;
		*(a+i) = i + 1; // �� ������ �� ������� ������ ǥ������� �����Ͻÿ�.
	}
	for (int i = 0;i < 5;i++) {
		//printf("a[%d] : %d\n", a[i]);
		printf("a[%d] : %d\n", *(a+i));
	}
}

void sendAddress(int* p, int len) // �μ��� �迭 ù��° ��ġ�� ����� ���޵ȴ�. �޸� ���޷��� ����.
{// �����Ͱ� �����ϴ� �ּҸ� ����� ������ ��ü ���̸� ���� �� ����.
	for (int i = 0;i < 5;i++) {
		*(p + i) = i + 1; // �̰��� ������ ǥ������� �迭�� ������ ���̴�.
		// ������ ������ �迭ó�� ����� ���� �ִ�.
		p[i] = i + 1;
		//printf("p + %d : %d\n", i, *(p + i));
		printf("p + %d : %d\n", i, *(p+i));
		// �迭 ������� ������ ǥ������� �����ϱ�!
		// a[0] => *(a+0)
		// a[1] => *(a+1)
		// a[3] => *(a+3)
	}
}

void dynamicAlloc()
{
	// �����Ҵ翡 ���Ǵ� �Լ����� stdlib.h ���̺귯���� �����ؾ��Ѵ�.
	// �Լ����� malloc(), calloc(), realloc() �������� ��ǥ���̴�.
	int len = 5;
	int* p = (int*)malloc(5*sizeof(int)); // ��ȣ ���̴� �Ҵ�Ǵ� ��ü �޸� ũ�⸦ ���Ѵ�.
	// ���� �Ҵ�� �޸� ũ��� "���� * �ڷ����� ũ��" ���ַ� �ۼ��Ѵ�. 
	// 5 * sizeof(Ÿ��) => ��� 5���ٴ� ������ �����ϴ� ���� �ϵ��ڵ��� ���� �� �ִ�.
	// ���̺��� * sizeof(�ڷ���) �� ���¸� ���´�.
	if (p == NULL) { // �޸� ���� �Ҵ��� ������ ����� ó�� �ڵ带 �ۼ��� ����!
		perror("�޸� �Ҵ� ����!\n");
		printf("�޸� �Ҵ� ����!\n");
		return 1;
	}
	*(p + 0) = 0;
	p[0] = 1;
	printf("p�� ô���� ���� ��ġ ��: %d\n", *(p + 0));
	printf("p�� ô���� ���� ��ġ ��: %d\n", *(p + 5));

	// �迭 ǥ������� �ۼ��Ͻÿ�
	// 0�� ��ġ ���� ������ ��ġ���� ���� ��� 30���� �����ϰ� ���ڸ��� ����� ������!
	// �ݸ�� ���
	for (int i = 0;i < len;i++) {
		*(p + i) = 30;
		printf("%d��° �ڸ��� �� : %d\n", i+1, *(p + i));
	}

	// ���� �Ҵ�� �޸��� ����� ��� ������ �ݵ�� �ش� �޸𸮸� ��ȯ�ؾ� �Ѵ�.
	// �� ������ ���ٸ� �޸� ����(leek)�� �߻��Ǿ� �ý����� ������ ����� �� �ִ�.

	free(p);
}
