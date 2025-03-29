#include<stdio.h>

int main() 
{   //커서가 위치한 줄 주석처리 단축키 : ctrl + /
	/*int age = 25;
	int num = 0;
	printf("age 값: %d\n", age);
	printf("num 값: %d", num);*/

	unsigned short s;
	s = 32768;
	printf("s값 : %u\n", s);

	char c;
	c = 65;
	printf("c 값 : %c\n", c);

	printf("c 값 : %c s 값 : %u\n", c, s);

	printf("이름 : %s", "홍길동");
	return 0;
}