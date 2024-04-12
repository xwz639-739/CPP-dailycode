#pragma once

#include<iostream>
#include<string>

using namespace std;


struct data {
	string bookname;
	string ISBN;
	int price;
	int ID;
};
typedef struct data Data;
struct node;
typedef struct node* Node;
struct node {
	Node Left;
	Data data;
	Node Right;
};

enum {
	EXIT,
	ADD,
	DEL,
	SEARCH,
	EDIT
};

int menu();

class BTree {
public:
	//构造函数
	BTree(string book_name, string _ISBN, int _price);
	BTree(const BTree& ps);
	BTree(Node);
	BTree& operator=(const BTree&);
	//添加节点
	void AddNode(string book_name,string _ISBN,int _price);
	Node Insert(node* ps, Node& root);
	//找出节点
	//void FindNode();
	//历遍并输出
	void ShowTreeByPrecedenceTraversal(Node);
	void ShowTreeByMiddleOrderTraversal(Node);
	void ShowTreeBySequentialTraversal(Node);
	//修改信息
	//void EditInfo();
private:
    Node booklist;
	static int count;
	bool IsEmpty();//是否为空
	bool IsLast();//是否为叶子节点
	bool IsEqure(node n1,node n2);
};


