#include<iostream>
#include<stdlib.h>
using namespace std;

struct node
{
    string name;
    int roll;
    int mark;
	struct node *link;
};

struct node* getnode(string name, int roll, int mark){
	struct node *temp=(struct node*)malloc(sizeof(struct node));
	temp->name=name;
	temp->roll=roll;
	temp->mark=mark;
	return temp;
}

struct node* createNode(string name, int roll, int mark)
{
    struct node *head, *ptr, *temp;
    head=nullptr;
    temp=getnode(name, roll, mark);
     if(head==NULL){
	    	head=temp;
	    	ptr=temp;
	    }
	    else{
	    	ptr->link=temp;
	    	ptr=ptr->link;
	    }
	    ptr->link=NULL;

	    return head;
}

void show_data(struct node *p)
{
    struct node *ptr;
    ptr=p;
    while(ptr!=NULL)
    {
        cout<<ptr->name<<endl;
        cout<<ptr->roll<<endl;
        cout<<ptr->mark<<endl;

        ptr=ptr->link;
    }
}

int main()
{
    struct node *ptr;
    struct node *p;
    ptr=createNode("Sayan", 7,94);

    show_data(ptr);

    return 0;
}
