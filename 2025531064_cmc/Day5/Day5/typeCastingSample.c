#include<stdio.h>
#include<math.h>

int main() {
	int iResult = 0;
	double dResult = 0;
	double num1 = 5.27;
	double num2 = 5.22;

	//�ǽ� num1 + num2�� ����� iRsult�� ����(����ȭ �ʿ�) ��� ���

	//iResult = (int)(num1 + num2);
	//printf("%d\n", iResult);
	//�ǽ� num1 + num2�� ����� dResult��  ����
	//����ȯ �����ڸ� �����Ͽ� ���� ����� ����� ������!
	//������Ʈ 11, �Ǽ���Ʈ: 0.3�� ��µǵ��� �Ͻÿ�

	// 1.�μ��� ���� ���Ѵ�. 11.2
	//dResult = num1 + num2;
	//printf("�Ǽ� ���� ���: %.1f", dResult);
	// 2. 1���� 11.2���� �Ҽ��� �ڸ��� �����Ѵ�. 11
	//printf("������Ʈ: %d", (int)dResult);
	// 3. 1���� ������ 2���� ���� ���� 0.2�� ���´�.
	//dResult = dResult - iResult;
	//printf("�Ǽ� ��Ʈ: %.1f", dResult);

	// C������ ���а� ���õ� ����� ���̺귯���� �����Ѵ�.
	// Math.h �� include�Ͽ� ����� �� �ִ�.
	// Math ���̺귯�������� round()�Լ��� �����Ѵ�.
	//double roundValue = round(dResult * 10)/10;
	//printf("�ø� ��� : %f", roundValue);

	/*dResult = num1 + num2;
	printf("������Ʈ: %d, �Ǽ���Ʈ: %.1f", iResult, dResult-iResult);*/

	double num3 = 0.19999;
	//�ǽ����� : 1) ���� ��Ʈ���� �̿��Ͽ� 0.2�� ��µǵ��� �Ѵ�.
	// 2) num3�� �� ��ü�� 0.2�� �ǵ��� �ø��� �߻���Ų��.
	printf("%.1f\n", num3);
	num3 = round(num3 * 10) / 10;
	printf("%.1f", num3);
	return 0;
}