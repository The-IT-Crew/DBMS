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

struct node* getnode( string name, int roll, int mark){
	fflush(stdin);
	struct node *temp=(struct node*)malloc(sizeof(struct node));
	temp->name=name;
	temp->roll=roll;
	temp->mark=mark;
	return temp;
}

struct node* createNode(struct node *head, string name, int roll, int mark)
{
    struct node  *ptr, *temp;
    //head=nullptr;
    temp=getnode(name, roll, mark);
     if(head==NULL){
	    	head=temp;
	    	ptr=temp;
	    	ptr->link=nullptr;
	    }
	    else{
	    	struct node* p;
	    	p=head;

	    	while(p->link!=nullptr)
            {
                p=p->link;

            }
            p->link=temp;
            p=p->link;
            p->link=nullptr;

	    }
	    //ptr->link=NULL;

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
    struct node  *head=nullptr;

    head=createNode(head, "Sayan", 1, 91);
    head=createNode(head, "Suva", 2, 95);
    head=createNode(head, "manas", 3, 100);


    show_data(head);

    return 0;
}
