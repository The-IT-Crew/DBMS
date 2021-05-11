#include<iostream>
#include<string>
#include<stdlib.h>

#include "header.h"

using namespace std;

class Table{
    private:
        std::string table_name;
        std::string key;
        struct Header *header=NULL;

        std::string user_input();
        std::string word1(std::string str);
        void user_input_create(std::string str);
        void user_input_primary(std::string str);
        
    public:
        void user_command();
        
        // constractor
        Table(){
            table_name = "mydatabase";
            header = NULL;
        }
};


string Table :: user_input(){
    // status: working
    // taking the command string form user
    // store the string in str
    
    string str;
    char c;
    do{
        c = getchar();
        str.push_back(c);
    }while(c!='\n');
    return str;
}

string Table :: word1(string str){
    // status: working
    // fetch 1st word from user input
    // return the 1st word as string
    string str1;
    int i=0;
    while(str[i]!=' '){
        str1.push_back(str[i]);
        i++;
    }
    return str1;
}

// user input for create table
void Table :: user_input_create(string str){
    /*
    int count1=0,count2=0, a=0;
    string table_name, str_array[3], st="";
    for(int i=13; i<str.length()-1; i++){
        if(count1<1){    // table name
            table_name.push_back(str[i]);
            if(str[i]==' '){
                count1++;
                i++;
            }
        }
        else{
            if(count2<1){
                if(str[i]!=','){
                    st.push_back(str[i]);
                    if(str[i]=='(') count2++;
                }
            }
            else{
                if(str[i]==')'){
                    if(str[i+1]!=')') count2--;
                }
                str_array[a++] = st;
                st = "";
            }
        }
    }*/
    header = createHeader(header, "Name");
    header = createHeader(header, "Roll");
    header = createHeader(header, "Mark");
    show_data(header);
    /*
    for(int j=0; j<3; j++){
        cout<<"Test: "<<str_array[j]<<endl;
    }
    cout<<"Table name: "<<table_name<<endl;
    */
}


// this function will call by external methods
void Table :: user_command(){
    string str=user_input();

    if(word1(str)=="create"){
        user_input_create(str);
    }
    if(word1(str)=="primary"){
        //user_input_primary(str);
    }
    if(word1(str)=="insert"){/*code*/}
    if(word1(str)=="show"){/*code*/}
}

int main(){
    Table t;
    t.user_command();
    return 0;
}