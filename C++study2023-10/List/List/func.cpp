#include"List.h"

int menu()
{
	int choose;
	cout << "**********************" << endl;
	cout << "**1. ADD  *** 2. DEL**" << endl;
	cout << "**3. EDIT ***0. EXIT**" << endl;
	cout << "��ѡ��" << ends;
	cin >> choose;
	return choose;
}

int AddMenu()
{
	int choose;
	cout << "**1. ǰ��  *** 2. ���**" << endl;
	cout << "**0. ����  **" << endl;
	cout << "��ѡ��" << ends;
	cin >> choose;
	return choose;
}

void Add(List& L)
{
	int choose=1;
	while(choose)
	{
		choose=AddMenu();
		switch (choose)
		{
		case 1:
			Insert(L, L);
			break;
		case 2:
			Insert(L, FindLast(L));
			break;
		case 0:
			cout << "������..." << endl;
			Sleep(500);
			system("cls");
			break;
		default:
			break;
		}
	}
}

void InitList(List& L)
{
	L->datas = { "",0,"",""};
	sNode tmp = (sNode)malloc(sizeof(Node));
	if (tmp)
		L->next = tmp,tmp->next=NULL;
	else
		perror("out of space:");
}

Postion FindLast(List& L)
{
	if (L)
	{
		Postion p;
		p = L->next;
		while (p->next == NULL)
			p->next = p->next->next;
		return p;
	}
	else
		perror("empty list!");
	return NULL;
}

void Insert(List& L,Postion P)
{
	if (L)
	{
		sNode tmp = (sNode)malloc(sizeof(Node));
		if (tmp)
		{
			int i;
			cout << "������������" << ends;
			cin >> tmp->datas.name;
			cout << "���������䣺" << ends;
			cin >> tmp->datas.age;
			cout << "�������Ա�" << ends;
			cin >> tmp->datas.sex;
			cout << "���������֤��" << ends;
			cin >> tmp->datas.ID;
			tmp->next = NULL;
			Postion p1 = P,p2=P->next;
			p1->next = tmp;
			tmp->next = p2;
		}
		else
			perror("out of space!");
	}
	else
		perror("empty list!");
}