#include <stdio.h>
int main() {
	char str1[1],str2[10];
	/*printf("���ڿ� 2�� �Է� : ");
	scanf("%s %s", str1, str2);
	printf("str1 : %s str2 : %s\n", str1, str2);*/
	//������ �������� �ΰ��� ���ڿ� �Է�

	//Ư�� ������(, �Ǵ� -) �������� �Է�ó��
	// %[^,] -> ,�� �����ڷ� ����Ѵٰ� ����
	printf("���ڿ� 2�� �Է� : ");
	scanf("%[^,]%*c%[^\n]", str1, str2);
	printf("str1 : %s / str2 : %s\n", str1, str2);
	return 0;
}