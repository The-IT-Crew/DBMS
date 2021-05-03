#include<iostream>
#include<string>

using namespace std;

class Table{
    private:
        std::string table_name;
        std::string key;

        std::string user_input();
        std::string word1(std::string str);
        void user_input_create(std::string str);
        void user_input_primary(std::string str);
        
    public:
        void user_command();
};

string Table :: user_input(){
    string str;
    char c;
    do{
        c = getchar();
        str += c;
    }while(c!='\n');
    return str;
}

string Table :: word1(string str){
    string str1;
    for(int i=0; str[i]!=' '; i++)
        str1 += str[i];
    return str1;
}

// user input for create table
void Table :: user_input_create(string str){
    int i, count=0;
    string table_name, temp;
    for(i=0 ; count<2; i++){
        temp.push_back(str[i]);
        if(str[i]==' ') count++;
    }
    if(temp == "create table "){
        do{
            table_name.push_back(str[i]);
            i++;
        }while(str[i]!=' ');
        cout<<"Table name is : "<<table_name;
    }
    else{
        cout<<"wrong command given"<<endl;
    }
}

// user input for primary key
void Table :: user_input_primary(string str){
    int i, count=0;
    string str1, temp, _table_name;
    for(i=0 ; count<3; i++){
        temp.push_back(str[i]);
        if(str[i]==' ') count++;
    }
    if(temp == "primary key of "){
        temp = "";
        for(; str[i]!=' '; i++)
            _table_name.push_back(str[i]);
        if(_table_name == table_name){
            for(; str[i]!='('; i++)
                temp.push_back(str[i]);
            if(temp == "table is "){
                for(; str[i]!=')'; i++)
                    key.push_back(str[i]);
            }
            else cout<<"wrong command given"<<endl;
        }
        else cout<<"wrong command given"<<endl;
    }
    else cout<<"wrong command given"<<endl;
    
    cout<<"the key is: "<<key<<endl;
}

void Table :: user_command(){
    string str=user_input();
    if(word1(str)=="create"){
        user_input_create(str);
    }
    if(word1(str)=="primary"){
        user_input_primary(str);
    }
    if(word1(str)=="insert"){/*code*/}
    if(word1(str)=="show"){/*code*/}
}

int main(){
    Table t;
    t.user_command();
    t.user_command();
    return 0;
}