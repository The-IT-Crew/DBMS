#include<iostream>
#include<string>
#include"store.h"
using namespace std;

struct node{
	string name;
    int roll;   // primary key
    int mark;
	struct node *link;
}*head=NULL,*ptr,*temp;

struct header
{
	string attr_name;
	struct header* next;
};


struct header* createHeader(string attr1, string attr2, string attr3)
{
	struct header *head, *ptr, *temp1, *temp2, *temp3;
	temp1=(struct header*)malloc(sizeof(struct header));
	temp1->attr_name=attr1;
	head=temp1;
	temp2->attr_name=attr2;
	temp3->attr_name=attr3;
	temp1->next=temp2;
	temp2->next=temp3;
	temp3->next=NULL;

	return(head);
}

struct node* getnode(string name, int roll, int mark){
	struct node *temp=(struct node*)malloc(sizeof(struct node));
	temp->name=name;
	temp->roll=roll;
	temp->mark=mark;
	return temp;
}
void create(string name, int roll, int mark){
    if(add_data(name, roll, mark)==true){
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
    }
}
void display_link(){
	ptr = head;
	while(ptr!=NULL){
		cout<<ptr->name<<endl;
		ptr = ptr->link;
	}
}

