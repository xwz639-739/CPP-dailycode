#include"BTree.h"

int menu()
{
	cout << "************************" << endl;
	cout << "***1. ���� ***2. ɾ��***" << endl;
	cout << "***3. ���� ***4. �޸�***" << endl;
	cout << "***0. �˳�" << endl;
	cout << "��ѡ���ܣ�" << ends;
	int choose;
	cin >> choose;
	return choose;
}


BTree::BTree(string book_name,string _ISBN,int _price)
{
	this->booklist->data.bookname = book_name;
	this->booklist->data.ISBN = _ISBN;
	this->booklist->data.price = _price;
	count = 0;
	this->booklist->data.ID = count + 1;
}

BTree::BTree(const BTree& ps)
{
	this->booklist->data.bookname = ps.booklist->data.bookname;
	this->booklist->data.ISBN = ps.booklist->data.ISBN;
	this->booklist->data.price = ps.booklist->data.price;
	this->count = ps.count;
	this->booklist->data.ID = this->count;
	booklist->Left = nullptr;
	booklist->Right = nullptr;
}

BTree& BTree::operator=(const BTree& ps)
{
	booklist->data.bookname = ps.booklist->data.bookname;
	booklist->data.ISBN = ps.booklist->data.ISBN;
	booklist->data.price = ps.booklist->data.price;
	count = ps.count;
	booklist->data.ID = count;
	return *this;
}

BTree::BTree(Node ps)
{
	booklist->data.bookname = ps->data.bookname;
	booklist->data.ISBN = ps->data.ISBN;
	booklist->data.price = ps->data.price;
	booklist->data.ID = 1;
}

bool BTree::IsEmpty()
{
	if (booklist != nullptr)
		return false;
	else return true;
}

bool BTree::IsLast()
{
	if (booklist->Left == nullptr && booklist->Right == nullptr)
		return true;
	else return false;
}

bool BTree::IsEqure(node n1, node n2)
{
	if (n1.data.ISBN == n2.data.ISBN)
		return true;
	else return false;
}

Node BTree::Insert(Node ps, Node& root)
{
	if (!root->Left) {
		root->Left = ps;
		return root;
	}
	else if (!root->Right) {
		root->Right = ps;
		return root;
	}
	int lrh = 0;
	int rrh = 0;
	Node pNode = root->Left;
	while (pNode) {
		lrh++;
		pNode = pNode->Right;
	}
	pNode = root->Right;
	while (pNode) {
		rrh++;
		pNode = pNode->Right;
	}
	if (lrh != rrh) {
		return Insert( ps,root->Right);
	}
	else
		return Insert(ps,root->Left);
}

void BTree::AddNode(string book_name,string _ISBN,int _price)
{
	Node tmp = new node;
	if (tmp == nullptr)
		cerr << "����ʧ�ܣ�" << endl;
	count++;
	tmp->data.bookname = book_name;
	tmp->data.ISBN = _ISBN;
	tmp->data.price = _price;
	tmp->data.ID = count;
	Insert(tmp, this->booklist);
}

void BTree::ShowTreeByPrecedenceTraversal(Node booklist)
{
	if (booklist->data.ID == 1)
		cout<<"����\t\t\t"<<"ISBN\t\t\t"<<"�۸�\t\t" << endl;
	 cout << booklist->data.bookname<<"\t\t\t" << booklist->data.ISBN <<"\t\t\t" << booklist->data.price<<"\t\t" << endl;
	ShowTreeByPrecedenceTraversal(booklist->Left);
	ShowTreeByPrecedenceTraversal(booklist->Right);
}

void BTree::ShowTreeByMiddleOrderTraversal(Node booklist)
{
	if (booklist->data.ID == 1)
		cout << "����\t\t\t" << "ISBN\t\t\t" << "�۸�\t\t" << endl;
	ShowTreeByPrecedenceTraversal(booklist->Left);
	cout << booklist->data.bookname << "\t\t\t" << booklist->data.ISBN << "\t\t\t" << booklist->data.price << "\t\t" << endl;
	ShowTreeByPrecedenceTraversal(booklist->Right);
}

void BTree::ShowTreeBySequentialTraversal(Node booklist)
{
	if (booklist->data.ID == 1)
		cout << "����\t\t\t" << "ISBN\t\t\t" << "�۸�\t\t" << endl;
	ShowTreeByPrecedenceTraversal(booklist->Left);
	ShowTreeByPrecedenceTraversal(booklist->Right);
	cout << booklist->data.bookname << "\t\t\t" << booklist->data.ISBN << "\t\t\t" << booklist->data.price << "\t\t" << endl;
}