#include "stdafx.h"
#include "list.h"

/*˳�����Ԫ�ز���
��ȡ��i��λ�õ�Ԫ�أ�i=1,2,3...
ֻҪi����ֵ��������±귶Χ֮�ڣ��ͷ��������±�i-1��ֵ
*/
Status GetElem_sq(SqList L, int i, ElemType* e)
{
	if (L.length == 0 || i<1 || i>L.length)
		return ERROR;
	*e = L.data[i - 1];
	return OK;
}


/*˳���������
��L�е�i��λ��֮ǰ�����µ�����Ԫ��e��L�ĳ�������1
*/
Status ListInsert(SqList *L, int i, ElemType e)
{
	int k;
	if (L->length == MAXSIZE)  //˳�������
		return ERROR;
	if (i<1 || i>L->length + 1)  //i���ڷ�Χ֮��
		return ERROR;
	if (i <= L->length)
		for (k = L->length; k >= i - 1; k--)  //��Ҫ����λ�ú����Ԫ������ƶ�һλ
			L->data[k + 1] = L->data[k];

	L->data[i - 1] = e;
	L->length++;
	return OK;
}

/*��ȡ�������i������Ԫ�ص�ֵ��i=1,2...*/
Status GetElem(LinkList L, int i, ElemType* e)
{
	// LΪ��ͷ���ĵ������ͷָ��
	int j = 1;
	LinkList p;
	p = L->next;  //pָ������L�ĵ�һ���ڵ�

	while (p && j<i)
	{
		p = p->next;
		j++;
	}

	/*
	!p:���i���������ȣ�������������������ж�
	j>i:���i=0����������������ж�
	*/
	if (!p || j > i)
		return ERROR;  //��i��Ԫ�ز�����

	*e = p->data;
	return OK;

}