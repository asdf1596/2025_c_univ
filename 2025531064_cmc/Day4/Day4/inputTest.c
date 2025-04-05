// 오늘은 2025년 3월 29일 토요일 입니다.
// 입력을 년, 월, 일 을 정수로 입력받고
// 요일을 char day[7] 로 정의하고 
// 모든 값을 한번에 입력바아 위 첫문장이 되도록 출력하시오.
// 단, 요일 값은 엔터까지를 구분자로 하여 입력받도록 포멧 문자열을 작성!
#include <stdio.h>
int main() {
	/*int y = 0, m = 0, d = 0;
	char day[7] = "";
	printf("년 월 일 요일을 순서대로 입력하세요 : ");
	scanf("%d %d %d %[^\n]", &y, &m, &d, day);
	printf("오늘은 %d년 %d월 %d일 %s입니다.", y, m, d, day);*/
	short y = 0, m = 0, d = 0;
	char day[7] = "";
	printf("년 월 일 요일을 순서대로 입력하세요 : ");
	scanf("%hu %hu %hu %[^\n]", &y, &m, &d, day);
	printf("오늘은 %hd년 %hd월 %hd일 %s입니다.", y, m, d, day);
	return 0;
}