#include"List.h"

int main()
{
	List L=(List)malloc(sizeof(Node));
	InitList(L);
	int choose = 1;
	while (choose)
	{
		choose = menu();
		switch (choose)
		{
		case ADD:
			Add(L);
			break;
		case DEL:
			//Del();
			break;
		case EDIT:
			//Edit();
			break;
		case EXIT:
			free(L);
			cout << "�˳���..." << endl;
			Sleep(1000);
			system("cls");
			cout << "�˳��ɹ���" << endl;
			break;
		default:
			break;
		}
	}

	return 0;
}