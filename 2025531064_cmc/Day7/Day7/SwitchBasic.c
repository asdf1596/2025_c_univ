#include<stdio.h>
int main() {
	int input = 0;
	printf("Á¤¼ö ÀÔ·Â ");
	scanf("%d%*c", &input);
	switch (input) {
	case 1:
		printf("1. ±Â¸ð´×\n");
		break;
	case 2:
		printf("2. ¸ÀÁ¡\n");
		break;
	case 3:
		printf("3. Áñ¹ã\n");
		break;
	default:
		printf("¾È³ç");
		break;
	}

	return 0;
}