#include <stdio.h>

int main(){
	// 1.���� ���� �� �ʱ�ȭ
	int  input = 0;
	// 2.�ȳ��� ���
	printf("���� �Է� : ");
	// 3.�Է� ó��
	scanf("%d%*c", &input);
	// 4.�� �Ǵ�
	// if�� �ؿ� ������ ��ɹ��� �ϳ���� ��ȣ ���� ����
	if (input > 0) {
		// 5.True�� �� ��
		printf("�Էµ� %d��  ����Դϴ�.", input);
	}
	else {
		// 6.False�� �� ��
		printf("�Էµ� ���� %d�� ����� �ƴմϴ�.", input);
	}
	// �񱳿����� �ʹ� ��ȿ�������� �ؼ��� �ȉ´�.
	if (input > 0) {
		printf("�Էµ� %d�� ����Դϴ�.", input);
	}if (input == 0) {
		printf("�Էµ� %d�� 0�Դϴ�.", input);
	}
	if (input < 0) {
		printf("�Էµ� %d�� �����Դϴ�.", input);
	}
return 0;
}