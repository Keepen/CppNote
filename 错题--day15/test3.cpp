#include <iostream>
using namespace std;


class A {
public:
	A() {
		cout << "A()" << endl;
	}
	void f() {
		cout << "A" << endl;
	}
	~A() {
		cout << "~A()" << endl;
	}
};


class B :public A {
public:
	B() {
		cout << "B()" << endl;
	}
	virtual void f() {
		cout << "B" << endl;
	}
	~B() {
		cout << "~B()" << endl;
	}
};

void test() {
	A* a = new B;
	a->f();
	//delete a;		//�ᵼ��A��������������������
}

int main() {
	test();
	system("pause");
	return 0;
}