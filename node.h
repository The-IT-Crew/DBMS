#include<iostream>
using namespace std;

struct node{
	string name;
    int roll;   // primary key
    int marks;
	struct node *link;
};

struct node* getnode(){
	struct node *temp=(struct node*)malloc(sizeof(struct node));
	return temp;
}
struct node *create(){
	 struct node *head,*ptr,*temp;
	 int choice;
	 head=NULL;
	 do
	 {
		temp=getnode();
		if(head==NULL){
			head=temp;
			ptr=temp;
		}
		else{
			ptr->link=temp;
			ptr=ptr->link;
		}
		cout<<"Enter choice(0/1) ";
		cin>>choice;
	 }while(choice==1);
	 ptr->link=NULL;
	 return head;
}