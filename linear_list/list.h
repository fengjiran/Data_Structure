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
typedef struct               //线性表
{
	ElemType data[MAXSIZE]; /*数组存储数据元素，最大值为MAXSIZE*/
	int length;             /*线性表当前的长度*/
}SqList;


typedef struct Node
{
	ElemType data;
	struct Node *next;
}Node;
typedef struct Node* LinkList; //定义LinkList，结构体指针