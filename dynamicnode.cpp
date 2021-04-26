//Code for Dynamic header Attributes


#include<iostream>
#include<string.h>
#include<stdlib.h>
using namespace std;

struct Header
{
	string atr_name;
	struct Header *link;
};


//struct Header* getNode(){
//    struct Header *temp;
//    temp = (struct Header*) malloc(sizeof(struct Header));
//    return temp;
//}

struct Header* createHeader(struct Header* head, string at_name)
{
	struct Header *temp;
	temp=(struct Header*)malloc(sizeof(struct Header));

	if(head==nullptr)
    {
        head=temp;
        temp->atr_name=at_name;
        temp->link=nullptr;
    }
    else
    {
        struct Header *p;
        p=head;
        temp->atr_name=at_name;

            while(p->link!=nullptr)
            {
                p=p->link;

            }
            p->link=temp;
            p=p->link;
            p->link=nullptr;
    }
    return(head);
}

void show_data(struct Header *p)
{
    struct Header *ptr;
    ptr=p;
    while(ptr!=NULL)
    {
        cout<<ptr->atr_name<<endl;
        ptr=ptr->link;
    }
}

//int main()
//{
//    struct Header *head;
//    head=nullptr;

//    head=createHeader(head, "NAME");
//    head=createHeader(head, "ROLL");
//    head=createHeader(head, "MARKS");

//    show_data(head);

//    return 0;
//}
