#include<stdio.h>
#include<string.h>
// ����ü(structure) : Ű����� struct ���
// ����ü ��� ����: ���� �Ǵ� �迭�� �Ѱ踦 �غ��ϱ� ����
// ����, �迭�� �Ѱ��?
// ���� �ڷ����� ����ϴ� ������ �ִ�
// ���� �پ��� �ڷ����� ����ϰ��� �Ѵٸ� �Ϲ����� ������ �迭�δ� �ذ��� �� ����
// ����ü�� ���ο� �ڷ����� ����ڰ� ����� ���̴�.
// ����ü ������ �Լ� �ܺο� �־�� �Ѵ�
//

struct Point
{
	int x;
	int y;
};

typedef struct Point point;

struct Circle {
	int radius;
	double pi;
};

typedef struct person {
	char name[32];
	int age;
} Person;

typedef struct Circle circle;

int main() {
	struct Point myPoint;
	point p1;

	p1.x = 5;
	p1.y = 5;

	circle c1;
	c1.pi = 3.141592653589793238;
	c1.radius = 25;

	circle c2;
	c2.pi = 3.14;
	c2.radius = 55;

	Person alice;
	Person mark;

	alice.age = 20;
	mark.age = 25;

	// ���ڿ� �迭�� ���������� ���� ������ �� ����.
	//alice.name = "ȫ�浿";
	strcpy(alice.name, "ȫ�浿");
	printf("alice �̸�: %s\n", alice.name);

	strcpy(mark.name, "��ũ");
	printf("mark �̸�: %s\n", mark.name);

	Person p1 = { "ȫ�浿", 25 };

	Person* p = &alice;
	p->age = 55;
	int a[3][3] = { 0 };
	int** pp = a;

	return 0;
}