#include<iostream>
using namespace std;

class node
{
	public:
		int data;
		node*next;
	node(int val)
	{
		data=val;
		next=NULL;
	}
};
void insertNode(node*&tail,int elem,int val)
{
	if(tail==NULL)
	{
		node*newnode=new node(val);
		tail=newnode;
		newnode->next=newnode;
	}
	else
	{
		node*curr=tail;
		while(curr->data!=elem)
		{
			curr=curr->next;
		}
		node*temp=new node(val);
		temp->next=curr->next;
		curr->next=temp;
	}
}
void print(node*&tail)
{
	node*temp=tail;
	do
	{
		cout<<temp->data;
		temp=temp->next;
	}
	while(temp!=tail);
}
void checkcircular(node*& tail)
{
	node*temp=tail;
	do
	{
		if(temp->next=NULL)
		{
			cout<<"LINK LIST IS NOT CIRCULAR "<<endl;
		}
		else
		{
			cout<<"LINK LIST IS CIRCULAR "<<endl;
		}
		temp=temp->next;
	}
	while(temp!=tail);
}
int main()
{
	node*tail=NULL;
	insertNode(tail,3,12);
	print(tail);
	insertNode(tail,12,32);
	print(tail);
	checkcircular(tail);
}
