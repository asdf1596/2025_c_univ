#include <stdio.h>
int main() {
	char str1[1],str2[10];
	/*printf("문자열 2개 입력 : ");
	scanf("%s %s", str1, str2);
	printf("str1 : %s str2 : %s\n", str1, str2);*/
	//공백을 기준으로 두개의 문자열 입력

	//특정 구분자(, 또는 -) 기준으로 입력처리
	// %[^,] -> ,를 구분자로 사용한다고 선언
	printf("문자열 2개 입력 : ");
	scanf("%[^,]%*c%[^\n]", str1, str2);
	printf("str1 : %s / str2 : %s\n", str1, str2);
	return 0;
}