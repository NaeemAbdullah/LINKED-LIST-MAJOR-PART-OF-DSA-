#include<iostream>
using namespace std;

class node
{
	public:
		int data;
		node*next;
		
	node(int data)
	{
		this->data=data;
		this->next=NULL;
	}
};

void Insertathead(node* &head, int num) 
{

	node*temp=new node(num);
	temp->next=head;
	head=temp;
	
}
int countlength(node* &head)
{
	int count=-1;
	node*current=head;
	while(current!=NULL)
	{
		count++;
		current=current->next;
		
	}
	cout<<count;
	return count;	
}
int main()
{
	node*node1=new node(10);
	node*head=node1;
	Insertathead(head,12);
	Insertathead(head,13);
	Insertathead(head,16);
	countlength(head);
}

