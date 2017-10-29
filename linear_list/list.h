#pragma once

#define TRUE 1
#define FALSE 0
#define OK 1
#define ERROR 0
// #define INFEASIBLE -1
// #define OVERFLOW -2

#define MAXSIZE 20
typedef int Status;
typedef int ElemType;
typedef struct               //���Ա�
{
	ElemType data[MAXSIZE]; /*����洢����Ԫ�أ����ֵΪMAXSIZE*/
	int length;             /*���Ա�ǰ�ĳ���*/
}SqList;


typedef struct Node
{
	ElemType data;
	struct Node *next;
}Node;
typedef struct Node* LinkList; //����LinkList���ṹ��ָ��