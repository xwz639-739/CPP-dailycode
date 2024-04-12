#include<iostream>
#include<memory>
using namespace std;

class a
{
public:
	a() {
		cout << "构造a类" << endl;
		num = new int(42);
		str = "Hello world";
	}
	~a() {
		cout << "析构a类" << endl;
		delete num;
		str.empty();
	}
	void tips() {
		cout << "做了一些操作..." << endl;
	}

private:
	int* num;
	string str;
};

class Destroya {
public:
	void operator()(a* ptr) {
		ptr->tips();
		delete ptr;
	}
};

int main() {
	/*shared_ptr<int> sp(new int);
	*sp = 1;*/

	//错误
	/*int i = 1;
	int* i1 = &i;
	shared_ptr<int> sp(i1);*/

	/*unique_ptr<int> up(new int);
	*up = 1;*/
    
	/*cout << "shared_ptr指向的值为：" << *sp << endl;
	sp.reset(new int(42));
	cout << "现在指向的值为：" << *sp << endl;
	cout << "由get()获取的值为：" << sp.get() << endl;
	sp.reset();*/


	//cout << "unique_ptr指向的值为：" << *up << endl;
	//up.reset(new int(42));
	//cout << "现在指向的值为：" << *up << endl;
	//up.reset();
	//cout << "reset()后up的get()返回值：" << up.get() << endl;

	unique_ptr<a, Destroya> up(new a);
	up.reset();

	return 0;
}