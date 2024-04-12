#pragma once

#include<iostream>
using namespace std;

class person {
private:
	int ID;
	string name;
	int age;
	char sex;
	int height;
	int weight;

public:
	inline void nameGive();
	inline void ageGive();
	inline void sexGive();
	inline void heightGive();
	inline void  weightGive();
	inline int IDGive();
	inline ostream& infoPrint(ostream& os, const person& tmp_info);
	inline istream& infoInput(istream& is,person& tmp_info);
};

void person::nameGive()
{
	string tmp_name;
	cout << "please enter the name: ";
	cin >> tmp_name;
	person::name = tmp_name;
}

void person::ageGive()
{
	int tmp_age;
	cout << "please enter the age: ";
	cin >> tmp_age;
	person::age = tmp_age;
}

void person::sexGive()
{
	char tmp_sex;
	cout << "please enter the sex(m/f): ";
	cin >> tmp_sex;
	person::sex = tmp_sex;
}

void person::heightGive()
{
	int tmp_height;
	cout << "please enter the height(cm): ";
	cin >> tmp_height;
	person::height=tmp_height;
}

void person::weightGive()
{
	int tmp_weight;
	cout << "please enter the weight(kg): ";
	cin >> tmp_weight;
	person::weight = tmp_weight;
}

int person::IDGive()
{
	int tmp_ID;
	cout << "please enter the ID: ";
	cin >> tmp_ID;
	return tmp_ID;
}

ostream& person::infoPrint(ostream& os,const person& tmp_info)
{
	os << tmp_info.name << " " << tmp_info.age << " " << tmp_info.sex << endl;
	return os;
}

istream& person::infoInput(istream& is,person& tmp_info)
{
	/*tmp_info.nameGive();
	tmp_info.ageGive();
	tmp_info.sexGive();
	tmp_info.heightGive();
	tmp_info.weightGive();
	tmp_info.IDGive();*/
	is >> tmp_info.name >> tmp_info.age;
	return is;
}