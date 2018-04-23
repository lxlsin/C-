// ConsoleApplication6.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>


#define ERROR 0

using namespace std;

typedef struct student
{
	int data;
	struct student *next;
	struct student *pre;
}dnode;


dnode *creat()
{
	dnode *head, *p, *s;
	int x, cycle = 1;
	head = (dnode*)malloc(sizeof(dnode));
	p = head;
	while (cycle)
	{
		printf("\n input data:");
		scanf("%d", &x);
		if (x != 0)
		{
			s = (dnode*)malloc(sizeof(dnode));
			cout << s->data;
			p->next = s;
			s->pre = p;
			p = s;
		}
		else cycle = 0;
	}
	head = head->next;
	head->pre = NULL;
	p->next = NULL;
	printf("\n yyy %d", head->data);
	return(head);

}


dnode *del(dnode *head, int num)
{
	dnode *p1, *p2;
	p1 = head;
	while (num != p1->data && p1->next != NULL)
	{
		p1 = p1->next;
	}


	if (num == p1->data)
	{
		if (p1 == head)
		{
			head = head->next;
			head->pre = NULL;
			free(p1);
		}
		else if (p1->next = NULL)
		{
			p1->pre->next = NULL;
			free(p1);
		}
		else
		{
			p1->next->pre = p1->pre;
			p1->pre->next = p1->next;
		}
	}
	else
		printf("\n%d could not been found", num);
	return(head);
}



dnode *insert(dnode *head, int num)
{
	dnode *p0, *p1;
	p1 = head;
	p0 = (dnode *)malloc(sizeof(double));
	p0->data = num;
	while (p0->data > p1->data && p1->next != NULL)
	{
		p1 = p1->next;
	}
	
	if (p0->data <= p1->data)
	{
		if (head == p1)
		{
			p0->next = p1;
			p1->next = p0;
			head = p0;
		}
		else 
		{
			p1->pre->next = p0;
			p0->next = p1;
			p0->pre = p1->pre;
			p1->pre = p0;
		}
		
	}
	else
	{
		p1->next = p0;
		p0->pre = p1;
		p0->next = NULL;
	}

	return(head);
}





int main()
{
	dnode *head, stud;
	int n, del_num, insert_num;
	//printf(head);
	cout << "\n Int  ";
	cin >> del_num;
	head = del(head, del_num);
	//print(head);
	cout << "\n isert  ";
	cin >> insert_num;
	head = insert(head, insert_num);
	//print(head);


	


}
