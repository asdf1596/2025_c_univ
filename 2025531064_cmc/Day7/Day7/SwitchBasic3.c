#include<stdio.h>
int main() {
	int input = 0;
	printf("���� �Է� ");
	scanf("%d%*c", &input);
	
	//����ġ �� ������ break���� ������ ��� �ǽ�
	//1. �ӿ�, 2. ���, 3.��, ��Ÿ, �湮��
	switch (input > 0)
	{
	case 1:
		printf("�ӿ�: ȸ�� ��� ���� ���� ����\n");
		break;
	case 2:
		printf("���: �系�� ����ó, ������ ���� ����\n");
		break;
	case 3:
		printf("��: �ڽ��� �ֹ� ���� ���� ����");
		break;

	default:
		printf("�湮��: ȸ����ġ, ������ ��ȭ���� ���� ����\n");
		break;
	}

	return 0;
}