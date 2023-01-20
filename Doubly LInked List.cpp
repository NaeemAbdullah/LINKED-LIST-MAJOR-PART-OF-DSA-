#include<iostream>
using namespace std;

class Node
{
	public:
		int data;
		Node*next;
		Node*prev;
	Node(int value)
	{
		data=value;
		next=NULL;
		prev=NULL;
	}
};
	void InsertHead(Node*& head,int data)
	{
		Node*temp=new Node(data);
		temp->next=head;
		head->prev=temp;
		head=temp;
	}
	void display(Node*& head)
	{
		Node*temp=head;
		while(temp!=NULL)
		{
			cout<<temp->data;
			temp=temp->next;
		}
	}
	void InsertAtTail(Node*&tail,int data)
	{
		Node*temp=new Node(data);
		tail->next=temp;
		temp->prev=tail;
		tail=temp;
	}	
	void Position(Node*&head,Node*&tail,int position,int data)
	{
		if(position==1)
		{
			InsertHead(head,data);
			return;
		}
		Node*temp=head;
		int count=1;
		while(count<position-1)
		{
			temp=temp->next;
			count++;
		}
		if(temp->next==NULL)
		{
			InsertAtTail(tail,data);
			return;
		}
		Node*nodetoinsert=new Node(data);
		nodetoinsert->next=temp->next;
		temp->next->prev=nodetoinsert;
		temp->next=nodetoinsert;
		nodetoinsert->prev=temp;
	}

int main()
{
	Node*node1=new Node(10);
	Node*head;
	head=node1;
	Node*tail=head;
	InsertHead(head,12);
	InsertHead(head,14);
	InsertAtTail(tail,122);
	Position(head,tail,3,999);
	display(head);
}
