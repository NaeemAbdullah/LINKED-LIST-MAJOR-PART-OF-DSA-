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

void Insertathead(node* &head, int num) //insert at first function
{
	//create new node
	node*temp=new node(num);
	temp->next=head;
	head=temp;
	
}

void Insertattail(node* &tail,int num)  //insert at last function
{
	node*temp=new node(num); //create new node
	tail->next=temp;
	tail=temp;	
}

void InsertSpecific(node* &head,int position,int num)  //insert at specific position
{
	//if insert node in start
	if(position == 1)
	{
		Insertathead(head,num);
		return;
	}

	node*temp=head;
	int count=1;
	while(count<position-1)
	{
		temp=temp->next;
		count++;
	}
		
	node*nodetoinsert=new node(num);
	nodetoinsert->next=temp->next;
	temp->next=nodetoinsert;
	
	
	
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
void display(node* &head)  //print  function
{
	node*temp=head;
	
	while(temp != NULL)
	{
		cout<<temp->data<<endl;
		temp = temp->next;
	}
	cout<<endl;
}
int main()
{
	//create a new node
	node*node1=new node(10);
	
	cout<<"-----------INSERT AT FIRST----------------"<<endl;
	node*head=node1;
	Insertathead(head,12);
	Insertathead(head,13);
	Insertathead(head,16);
	display(head);//display function
		
	cout<<"----------INSERT AT LAST--------------"<<endl;
	//node*tail=node1;
///	display(tail);
	//Insertattail(tail,12);
//	display(tail);
//	Insertattail(tail,13);	
	//display(tail);//display function
	
	//cout<<"----------INSERT AT SPECIFIC POSITION--------------"<<endl;
	//InsertSpecific(head,4,11);
	//display(head);//display function
	
	cout<<"----------COUNT LEGNTH OF LINKED LIST--------------"<<endl;
	countlength(head);
	
	return 0;
	
	
}
