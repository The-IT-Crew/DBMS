#include<iostream>
#include<string.h>
#include<stdlib.h>
using namespace std;

struct Header
{
    string attribute_name;
    struct Header* next;
};

struct Header* createHeader(string a1, string a2, string a3)
{
        struct Header* ptr1=(struct Header*)malloc(sizeof(struct Header));
        struct Header* ptr2=(struct Header*)malloc(sizeof(struct Header));
        struct Header* ptr3=(struct Header*)malloc(sizeof(struct Header));

        ptr1->attribute_name=a1;
        ptr2->attribute_name=a2;
        ptr3->attribute_name=a3;

        ptr1->next=ptr2;
        ptr2->next=ptr3;
        ptr3->next=nullptr;

        struct Header *head;
        return(head);
}

void showHeader(struct Header *head)
{
    struct Header *ptr;
    ptr=head;

    while(ptr!=nullptr)
    {
        cout<<ptr->attribute_name;
        cout<<"\n";
    }
}

void setPrimaryKey(struct Header *ptr, string at_name)
{
    struct Header *p;
    p=ptr;

    while(1)
    {
        if(p->attribute_name==at_name)
        {
            p->attribute_name=at_name+"key";
            break;
        }
    }

    cout<<at_name<<" is set as the primary key";
}

int main()
{
    struct Header *ptr;
    ptr=createHeader("NAME", "ROLL", "MARKS");
    showHeader(ptr);

    return(0);
}

