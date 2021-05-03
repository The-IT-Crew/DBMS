#include<iostream>
#include<string>
using namespace std;

void user_input_create(string str){
    int i, count=0;
    string str1, temp;
    for(i=0 ; count<2; i++){
        temp.push_back(str[i]);
        if(str[i]==' ') count++;
    }
    do{
        str1.push_back(str[i]);
        i++;
    }while(str[i]!=' ');
    cout<<"Table name is : "<<str1;
}

int main(){
    string str="create table student";
    user_input_create(str);
    return 0;
}