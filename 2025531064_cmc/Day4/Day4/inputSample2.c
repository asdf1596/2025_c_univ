#include <stdio.h>

int main() {
	//�ǽ� : �ڽ��� �̸��� ģ���� �̸��� �Է� �޴´�.
	//�Էµ� ���� ����غ��ÿ�
	char myName[13] = "";
	char yourName[9] = "";
	printf("�ڽ��� �̸��� �Է��ϼ��� : ");
	scanf("%[^\n]%*c", myName);
	printf("ģ���� �̸��� �Է��ϼ��� : ");
	scanf("%[^\n]%*c", yourName);
	//printf("�ڽ��� �̸��� ģ���� �̸��� �Է��ϼ��� : ");
	//scanf("%s%*c%s%*c", myName, yourName);
	printf("����� �̸��� ģ���� �̸��� %s, %s �Դϴ�.", myName, yourName);
	return 0;
}