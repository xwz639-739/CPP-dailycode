#pragma once

#include<iostream>
#include<string>
#include<vector>
#include<map>
#include<set>
#include<sstream>
#include<fstream>
using namespace std;

class QueryResult;
class TextQuery {
public:
	using line_no = vector<string>::size_type;
	TextQuery(ifstream&);
	QueryResult query(const string&) const;
private:
	shared_ptr<vector<string>> file;
	map<string, shared_ptr<set<line_no>>> wm;
};

class QueryResult {
	friend ostream& print(ostream&, const QueryResult&);
public:
	QueryResult(string s, shared_ptr<set<TextQuery::line_no>> p, shared_ptr<vector<string>> f)
		:sought(s), lines(p), file(f) { };
private:
	string sought;//²éµ¥´Ê
	shared_ptr<set<TextQuery::line_no>> lines;
	shared_ptr<vector<string>> file;
};

ostream& print(ostream& os, const QueryResult& qr);
void runQueries(ifstream& infile);

