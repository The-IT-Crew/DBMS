// this file is for testing

#include<iostream>
#include"store.h"
#include"node.h"

int main(){
    create("suavsish",1,100);
    create("manas",2,100);
    create("sayan",1,100);

    std::cout<<"The node is : "<<std::endl;
    display_link();
    return 0;
}