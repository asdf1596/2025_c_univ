#include<stdio.h>
int main() {
	int i = 0;
	int result = 0;

	result = ++i;// ++i 전위 표기법, i++ 후위 표기법
	printf("result: %d, i: %d\n", result, i);
	// 전위는 값을 먼저 증가하고 사용
	// 후위는 값을 사용 후 증가(해당 라인을 지나칠때 증가)

	return 0;
}