#pragma once
#include<stdio.h>
#include<malloc.h>
#include<iostream>
#include<Windows.h>
using namespace std;


enum {
	EXIT,
	ADD,
	DEL,
	EDIT
};

typedef struct node Node;
typedef Node* List;
typedef List Postion;
typedef List sNode;

typedef struct data
{
	char name[10];
	int age;
	char sex[2];
	char ID[15];
}Data;//��������

struct node
{
	Data datas;
	Node* next;
};//����


int menu();
void InitList(List& L);//��ʼ������
Postion FindLast(List& L);//Ѱ�ұ�β
void Insert(List& L,Postion P);//����
void Find(List& L);//Ѱ�Ҹýڵ�
void FindPessocer(List& L);//Ѱ��ǰ��
void Delet(List& L);//ɾ���ڵ�
void Edit(List& L);//�޸���Ϣ
void Add(List& L);// ��Ӻ���
int AddMenu();
