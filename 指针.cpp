// ָ��.cpp : �������̨Ӧ�ó������ڵ㡣
//
#include "stdafx.h"
#include<iostream>
using namespace std;
struct student
{
	char name[50];
	char num[12];
	int age;
	struct student *next;
};
int main()
{
	int s;
	struct student *p,*q,*head;
	head=new student;
	q=head;
	p=q;
	s=1;
	head=NULL;
	while(cout<<"1or2",cin>>s,s==1)
	{
		p=new student;
		cout<<"����������:"<<endl;
		cin>>p->name;
		cout<<"������ѧ�ţ�"<<endl;
		cin>>p->num;
		cout<<"���������䣺"<<endl;
		cin>>p->age;
		if(head==NULL)
		{
			head=p;
		}
		else
		{
			q->next=p;
		}
		q=p;
		p->next=NULL;
	}
	p=head;
	while(p!=NULL)
	{
		cout<<"������"<<p->name<<endl<<"ѧ�ţ�"<<p->num<<endl<<"����;"<<p->age<<endl;
		p=p->next;
	}
	p=head;
	do
	{
		q=p->next;
		delete p;
		p=q;
	}while(q);
}
