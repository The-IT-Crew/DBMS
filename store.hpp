#include<iostream>
#include<fstream>
#include<string>
#include<iomanip>

using namespace std;

void store(string name, int roll, int mark, string filename){
    // take name, roll, marks, file name as input and
    // store them in the database as append mode 
    ofstream outf(filename, ios::app);
    outf<<name<<","<<roll<<","<<mark<<endl;
    outf.close();
}
bool validation(string filename, int key){
    // if primary key is valid then return true
    // if primary key is invalid then return flase
    ifstream _val(filename);
    string c;
    while(_val){
        int i, b=0, count=0;
        getline(_val, c);
        for(i=0; count<1; i++){
            if(c[i]==',') count++;
        }
        for( ;c[i]!=',';i++){
            b=(b*10)+(c[i]-48);
        }
        if(b==key){
            return false;
            break;
        }
    }
    _val.close();
    return true;
}
bool add_data(string name, int roll, int mark){
    // primary key is roll
    if(validation("DB.txt",roll)==true){
        store(name, roll, mark, "DB.txt");
        cout<<"record sucessfully inserted in <<table_name>> table"<<endl;
    }
    else{
        cout<<"Primary Key Violation"<<endl;
        return false;
    }
    return true;
}
