#include<iostream>
#include<stack>
using namespace std;

//bool isValid(string s) {
//    stack<char> a ;
//    for (int i = 0; i < s.size(); i++)
//    {
//        if (s[i] == '(' || s[i] == '[' || s[i] == '{')
//            a.push(s[i]);
//        else if (s[i] == ')' || s[i] == ']' || s[i] == '}')
//        {
//            if (!a.empty() && s[i] != ')' &&  a.top() == '(' )
//                return false;
//            else if (!a.empty() && a.top() == '(' && s[i] == ')')
//                a.pop();
//            if ( !a.empty() && s[i] != '}' && a.top() == '{')
//                return false;
//            else  if (!a.empty() && a.top() == '{' && s[i] == '}')
//            a.pop();
//            if (!a.empty() && s[i] != ']' && a.top() == '[')
//                return false;
//            else if (!a.empty() && a.top() == '[' && s[i] == ']')
//            a.pop();
//        }
//    }
//    return true;
//}
//
//int main()
//{
//    string test= "{[]}";
//    cout << isValid(test) << endl;
//    return 0;
//}

#define L 0.234
#define D 0.09
#define N 526
#define H 0.145

int main()
{
	int U2;
	int I;
	cin >> U2 >> I;
	cout << U2 * (pow(L, 2) + pow(D, 2)) / (2 * pow(N, 2) * pow(I, 2) * pow(H, 2)) << ends;
	return 0;
}