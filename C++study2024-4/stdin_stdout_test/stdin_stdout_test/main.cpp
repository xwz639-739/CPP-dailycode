#include<iostream>
using namespace std;

void my_read(string& str, istream& in)
{
	in >> str;
}

void my_write(const string str, ostream& out)
{
	out << str << "my_write" << endl;
}

int main()
{
	string str;
	my_read(str, istream);
	my_write(str, ostream);

}