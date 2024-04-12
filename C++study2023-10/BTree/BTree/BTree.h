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
	//���캯��
	BTree(string book_name, string _ISBN, int _price);
	BTree(const BTree& ps);
	BTree(Node);
	BTree& operator=(const BTree&);
	//��ӽڵ�
	void AddNode(string book_name,string _ISBN,int _price);
	Node Insert(node* ps, Node& root);
	//�ҳ��ڵ�
	//void FindNode();
	//���鲢���
	void ShowTreeByPrecedenceTraversal(Node);
	void ShowTreeByMiddleOrderTraversal(Node);
	void ShowTreeBySequentialTraversal(Node);
	//�޸���Ϣ
	//void EditInfo();
private:
    Node booklist;
	static int count;
	bool IsEmpty();//�Ƿ�Ϊ��
	bool IsLast();//�Ƿ�ΪҶ�ӽڵ�
	bool IsEqure(node n1,node n2);
};


