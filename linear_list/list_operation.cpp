#include "stdafx.h"
#include "list.h"

/*顺序表获得元素操作
获取第i个位置的元素，i=1,2,3...
只要i的数值在数组的下标范围之内，就返回数组下标i-1的值
*/
Status GetElem_sq(SqList L, int i, ElemType* e)
{
	if (L.length == 0 || i<1 || i>L.length)
		return ERROR;
	*e = L.data[i - 1];
	return OK;
}


/*顺序表插入操作
在L中第i个位置之前插入新的数据元素e，L的长度增加1
*/
Status ListInsert(SqList *L, int i, ElemType e)
{
	int k;
	if (L->length == MAXSIZE)  //顺序表已满
		return ERROR;
	if (i<1 || i>L->length + 1)  //i不在范围之内
		return ERROR;
	if (i <= L->length)
		for (k = L->length; k >= i - 1; k--)  //将要插入位置后面的元素向后移动一位
			L->data[k + 1] = L->data[k];

	L->data[i - 1] = e;
	L->length++;
	return OK;
}

/*获取单链表第i个数据元素的值，i=1,2...*/
Status GetElem(LinkList L, int i, ElemType* e)
{
	// L为带头结点的单链表的头指针
	int j = 1;
	LinkList p;
	p = L->next;  //p指向链表L的第一个节点

	while (p && j<i)
	{
		p = p->next;
		j++;
	}

	/*
	!p:如果i大于链表长度，可以用这个条件进行判断
	j>i:如果i=0，可以用这个条件判断
	*/
	if (!p || j > i)
		return ERROR;  //第i个元素不存在

	*e = p->data;
	return OK;

}