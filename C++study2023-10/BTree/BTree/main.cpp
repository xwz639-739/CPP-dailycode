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
			cout << "��ʼ�����ڵ�" << "\n" << "������������" << ends;
			cin >> tmp->data.bookname;
			cout << "������ISBN��" << ends;
			cin >> tmp->data.ISBN;
			cout << "������۸�" << ends;
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
			cout << "������������" << ends;
			cin >> name;
			cout << "������ISBN��" << ends;
			cin >> isbn;
			cout << "������۸�" << ends;
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