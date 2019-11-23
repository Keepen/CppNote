#include <iostream>
#include <string.h>
using namespace std;
class B {
public:
	B() {
		cout << "default constructor" << " ";
	}
	~B() {
		cout << "destructed" << " ";
	}
	B(int i) :data(i) {
		cout << "constructor by parameter" << data << " ";
	}
private:
	int data;
};

B Play(B b) {
	return b;
}


struct str_t {
	long long len;
	char data[32];
};

struct data1_t {
	long long len;
	int data[2];
};

struct data2_t {
	long long len;
	char* data[1];
};

struct data3_t {
	long long len;
	void* data[];
};

void test() {
	str_t str;
	memset((void*)&str, 0, sizeof(str));
	str.len = sizeof(str_t) - sizeof(int);
	snprintf(str.data, str.len, "hello");
	
	data3_t* pdata3 = (data3_t*)&str;
	printf("data3 :%s%s\n", str.data, (char*)&((pdata3->data[0])));

	data2_t* pdata2 = (data2_t*)&str;

	//printf("data2 :%s%s\n", str.data, (char*)(pdata2->data[0]));
	
	data1_t* pdata1 = (data1_t*)&str;
	printf("data1 :%s%s\n", str.data, (char*)(pdata1->data));
	str_t* pdata = (str_t*)&str;
	printf("str   :%s%s\n", str.data, (char*)(pdata->data));
}






int main() {
	//B temp = Play(5);
	test();
	system("pause");
	return 0;
}