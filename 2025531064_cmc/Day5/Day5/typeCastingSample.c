#include<stdio.h>
#include<math.h>

int main() {
	int iResult = 0;
	double dResult = 0;
	double num1 = 5.27;
	double num2 = 5.22;

	//실습 num1 + num2의 결과를 iRsult에 저장(형변화 필요) 결과 출력

	//iResult = (int)(num1 + num2);
	//printf("%d\n", iResult);
	//실습 num1 + num2의 결과를 dResult에  보관
	//형변환 연산자를 응용하여 다음 결과를 출력해 보세요!
	//정수파트 11, 실수파트: 0.3이 출력되도록 하시오

	// 1.두수의 합을 구한다. 11.2
	//dResult = num1 + num2;
	//printf("실수 연산 결과: %.1f", dResult);
	// 2. 1번의 11.2에서 소수점 자리를 제거한다. 11
	//printf("정수파트: %d", (int)dResult);
	// 3. 1번의 값에서 2번의 값을 빼면 0.2가 나온다.
	//dResult = dResult - iResult;
	//printf("실수 파트: %.1f", dResult);

	// C언어에서는 수학과 관련된 기능의 라이브러리를 제공한다.
	// Math.h 를 include하여 사용할 수 있다.
	// Math 라이브러리에서는 round()함수를 제공한다.
	//double roundValue = round(dResult * 10)/10;
	//printf("올림 결과 : %f", roundValue);

	/*dResult = num1 + num2;
	printf("정수파트: %d, 실수파트: %.1f", iResult, dResult-iResult);*/

	double num3 = 0.19999;
	//실습문제 : 1) 포멧 스트링을 이용하여 0.2가 출력되도록 한다.
	// 2) num3의 값 자체를 0.2가 되도록 올림을 발생시킨다.
	printf("%.1f\n", num3);
	num3 = round(num3 * 10) / 10;
	printf("%.1f", num3);
	return 0;
}