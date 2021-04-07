#include<iostream>
#include<cstdlib>

using namespace std;

struct node{
	// dynamic data 
	int data;
	struct node *link;
}

struct node* getnode();
struct node *create();

/*----------driving code----------*/
int main(){
	// driving code
	return 0;
}

/*----------functions-----------*/
struct node* getnode(){
	struct node *temp=(struct node*)malloc(sizeof(struct node));
	cin>>temp->data;
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
		cout<<"Enter choice(0/1) "
		cin>>choice;
	 }while(choice==1);
	 ptr->link=NULL;
	 return head;
}
