#include<iostream>
#include<initializer_list>
#include<string>
using namespace std;

//int fun(initializer_list<int> lst)
//{
//	int sum = 0;
//	for (auto k : lst)
//		sum += k;
//	return sum;
//}
//int main()
//{
//	initializer_list<int> lst{1,2,3,4,5};
//	for (auto k : lst)
//		cout << k << endl;
//	int sum = fun(lst);
//	cout << "sum= " << sum << endl;
//	system("pause");
//	return 0;
//}

//constexpr int new_sz()
//{
//	return 42;
//}
//constexpr size_t scale(size_t cnt)
//{
//	return new_sz() * cnt;
//}
//int main()
//{
//	int arr[scale(2)];
//	constexpr int i = new_sz();
//	arr[1] = 20, arr[0] = 30;
//	cout << "i= " << i << endl;
//	cout << "arr[0]= " << arr[0] << " arr[1]= " << arr[1] << endl;
//	system("pause");
//	return 0;
//}

//bool lengthCompare(const string&, const string&);
//int main()
//{
//	bool (*pf)(const string&, const string&);
//	pf = lengthCompare;
//	string a, b;
//	cin >> a >> b;
//	bool result;
//	result = pf(a, b);
//	if (1 == result)
//		cout << "a is longer" << endl;
//	else
//		cout << "b is longer" << endl;
//	system("pause");
//	return 0;
//}
//bool lengthCompare(const string& a, const string& b)
//{
//	return a.size() >= b.size() ? 1 : 0;
//}

//int main()
//{
//	using F = int(int*, int);
//	using PF = int(*)(int*, int);
//	PF f1(int);
//	PF a=(PF)malloc(sizeof(PF));
//	cout << **a << endl;
//	system("pause");
//	return 0;
//}
//int f1(int)
//{
//	return 1;
//}
//int PF(int*, int a)
//{
//	return a * 2;
//}