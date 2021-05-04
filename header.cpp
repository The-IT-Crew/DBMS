#include<iostream>
#include<string>
#include<stdlib.h>

#include "header.hpp"

using namespace std;

//struct Header{
//	string atr_name;
//	struct Header *link;
//};

struct Header* createHeader(struct Header* head, string at_name){
	struct Header *temp;
	temp=(struct Header*)malloc(sizeof(struct Header));
	if(head==NULL){
        head=temp;
        head->atr_name=at_name;
        head->link=NULL;
    }
    else{
        struct Header *p;
        p=head;
        temp->atr_name=at_name;
        while(p->link!=NULL){
            p=p->link;
        }
        p->link=temp;
        p=p->link;
        p->link=NULL;
    }
    return head;
}

void show_data(struct Header *p){
    struct Header *ptr;
    ptr=p;
    while(ptr!=NULL){
        cout<<ptr->atr_name<<endl;
        ptr=ptr->link;
    }
}
