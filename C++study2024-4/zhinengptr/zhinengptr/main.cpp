#include<iostream>
#include<memory>
using namespace std;

class a
{
public:
	a() {
		cout << "����a��" << endl;
		num = new int(42);
		str = "Hello world";
	}
	~a() {
		cout << "����a��" << endl;
		delete num;
		str.empty();
	}
	void tips() {
		cout << "����һЩ����..." << endl;
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

	//����
	/*int i = 1;
	int* i1 = &i;
	shared_ptr<int> sp(i1);*/

	/*unique_ptr<int> up(new int);
	*up = 1;*/
    
	/*cout << "shared_ptrָ���ֵΪ��" << *sp << endl;
	sp.reset(new int(42));
	cout << "����ָ���ֵΪ��" << *sp << endl;
	cout << "��get()��ȡ��ֵΪ��" << sp.get() << endl;
	sp.reset();*/


	//cout << "unique_ptrָ���ֵΪ��" << *up << endl;
	//up.reset(new int(42));
	//cout << "����ָ���ֵΪ��" << *up << endl;
	//up.reset();
	//cout << "reset()��up��get()����ֵ��" << up.get() << endl;

	unique_ptr<a, Destroya> up(new a);
	up.reset();

	return 0;
}