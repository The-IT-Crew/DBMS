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

