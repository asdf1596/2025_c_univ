#include<stdio.h>
#include<string.h>
// 구조체(structure) : 키워드는 struct 사용
// 구조체 사용 이유: 변수 또는 배열의 한계를 극복하기 위함
// 변수, 배열의 한계는?
// 동일 자료형만 취급하는 문제가 있다
// 만약 다양한 자료형을 취급하고자 한다면 일반적인 변수나 배열로는 해결할 수 없다
// 구조체는 새로운 자료형을 사용자가 만드는 것이다.
// 구조체 선언은 함수 외부에 있어야 한다
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

	// 문자열 배열에 직접적으로 값을 대입할 수 없다.
	//alice.name = "홍길동";
	strcpy(alice.name, "홍길동");
	printf("alice 이름: %s\n", alice.name);

	strcpy(mark.name, "마크");
	printf("mark 이름: %s\n", mark.name);

	Person p1 = { "홍길동", 25 };

	Person* p = &alice;
	p->age = 55;
	int a[3][3] = { 0 };
	int** pp = a;

	return 0;
}