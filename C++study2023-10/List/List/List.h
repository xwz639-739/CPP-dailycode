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
}Data;//数据类型

struct node
{
	Data datas;
	Node* next;
};//链表


int menu();
void InitList(List& L);//初始化链表
Postion FindLast(List& L);//寻找表尾
void Insert(List& L,Postion P);//插入
void Find(List& L);//寻找该节点
void FindPessocer(List& L);//寻找前驱
void Delet(List& L);//删除节点
void Edit(List& L);//修改信息
void Add(List& L);// 添加函数
int AddMenu();
