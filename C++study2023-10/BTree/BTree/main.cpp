#include"BTree.h"

int main()
{
	int choose = 1,count=0;
	BTree test{0,0,0};
	while (choose)
	{
		choose = menu();
		if (count == 0 && choose != 0)
		{
			Node tmp=new node;
			cout << "初始化根节点" << "\n" << "请输入书名：" << ends;
			cin >> tmp->data.bookname;
			cout << "请输入ISBN：" << ends;
			cin >> tmp->data.ISBN;
			cout << "请输入价格：" << ends;
			cin >> tmp->data.price;
			BTree test(tmp);
		}
		switch (choose)
		{
		case ADD:
		{
			string name;
			string isbn;
			int price;
			cout << "请输入书名：" << ends;
			cin >> name;
			cout << "请输入ISBN：" << ends;
			cin >> isbn;
			cout << "请输入价格：" << ends;
			cin >> price;
			test.AddNode(name, isbn, price);
		}
			break;
		case DEL:
			break;
		case SEARCH:
			break;
		case EDIT:
			break;
		default:
			break;
		}
	}
}