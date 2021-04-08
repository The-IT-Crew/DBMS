#include <iostream>
#include <cstdlib>
#include <map>
#include <string>

using namespace std;

struct node{
	map<int, int> data1;
	struct node *link;
};
struct node *getnode();
struct node *create();

/*----------driving code----------*/
int main(){
	struct node *l1, *ptr;
	l1 = create();
	ptr = l1;
	map<int, int> ::iterator itr; 
	while(ptr!= NULL){
		itr = ptr->data1.begin();
		cout<<(*itr).first;
		ptr = ptr->link;
	}
	return 0;
}

/*----------functions-----------*/
struct node *getnode(){
	int a;
	int b;
	struct node *temp = (struct node *)malloc(sizeof(struct node));
	cout << "Enter data1: ";
	cin>>a>>b;
	// cin >> temp->data1;
	temp->data1.insert({a,b});
	return temp;
}
struct node *create(){
	struct node *head, *ptr, *temp;
	int choice;
	head = NULL;
	while (1){
		temp = getnode();
		if (head == NULL){
			head = temp;
			ptr = temp;
		}
		else{
			ptr->link = temp;
			ptr = ptr->link;
		}
		cout << "Enter choice(0/1) ";
		cin >> choice;
		if (choice == 0)
			break;
	}
	ptr->link = NULL;
	return head;
}
