#include <stdio.h>

int main() {
	//���� �Է��� 2�� �޴´�.
	//������ 2�� �ʿ��ϴ�.
	int num1 = 0, num2 = 0, result = 0;

	////�ȳ���
	//printf("���� �Է�:");
	////�Է�ó��
	//scanf("%d", &num1);

	////�ȳ�����
	//printf("���� �Է�:");
	////�Է�ó��
	//scanf("%d", &num2);

	//scanf() �Լ��� �ѹ��� ����ؼ� ������ ����� ������!
	printf("���� 2���� �Է��ϼ���! ");
	scanf("%d%*c%d%*c", &num1, &num2);
	//%*c�� ���ۿ� �����ִ� ���� ���� ������! ��� ����̴�.
	

	//������ ����
	result = num1 + num2;
	//��� ���
	printf("���� ���: %d\n", result);

	char name[10] = "";
	printf("�̸� �Է� : ");
	scanf("%s", name);
	printf("����� �̸��� %s �Դϴ�.\n", name);
	return 0;
}