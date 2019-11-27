#include <iostream>
using namespace std;

//class A {
//public:
//	~A() {
//		//delete this;
//	}
//};

void Swap(int* a, int* b) {
	*a = *a + *b;
	printf("%d\n", *a);
	*b = *a - *b;
	*a = *a - *b;
}

void test1() {
	int a = 2100000000;
	int b = 1000000000;
	Swap(&a, &b);
	printf("a == %d\nb == %d\n", a, b);
}

void test2() {
	//int a[4] = { 1,2,3,4 };
	//int *p[4] = { 0 ,1 ,2,3 };	//指针数组
	//int(*p1)[4] = (int*)0x1;	//数组指针
	//int *(p2[4]) = { 1,2,3,4 };	//指针数组
}
void print(char* s) {
	if (*s != '\0') {
		print(++s);
		printf("%c", *s);
	}
}

void test3() {
	char str[] = "Geneius";
	print(str);
}

void test4() {
	const int volatile a = 10;	//保持内存可见性，每次从内存中读取，
	int* p = (int*)&a;
	*p = 20;
	cout << a << endl;
	cout << "a = " << a << "*p = " << *p << endl;
	cout << a << " " << *p << endl;
}



void test5() {
	struct Test {
		Test(int){}
		Test(){}
		void fun(){}
	};
	Test a(1);
	a.fun();
	Test b();
	//b.fun();
}

int main() {
	//test1();
	//test2();
	test3();
	//test4();
	//A a;
	//a.~A();
	//A* a = new A();
	//a->~A();
	system("pause");
	return 0;
}