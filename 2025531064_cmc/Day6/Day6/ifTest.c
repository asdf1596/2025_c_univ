#include <stdio.h>

int main() {
	//������ �Է¹޾� �Է������� ¦������ Ȧ������ �Ǵ��Ͻÿ�.
	int num = 0;
	printf("���� �Է�: ");
	scanf("%d%*c", &num);
	//printf(num == 0 ? "0�Դϴ�. �ٽ� �ϼ���." : (num % 2 == 0 ? "¦��" : "Ȧ��"));
	if (num > 0 && num % 2 == 0) {
		printf("¦");
	}
	else if (num > 0) {
		printf("Ȧ");
	}
	else {
		printf("�ǴܺҰ�");
	}
}