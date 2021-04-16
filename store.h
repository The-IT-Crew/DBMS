#include<iostream>
#include<fstream>
#include<string>
#include<iomanip>
using namespace std;

void store(string name, int roll, int mark, string filename){
    // take name, roll, marks, file name as input and
    // store them in the database as append mode 
    ofstream outf(filename, ios::app);
    outf<<setw(20)<<left<<name;
    outf<<setw(5)<<left<<roll;
    outf<<setw(5)<<left<<mark<<endl;
}
bool validation(string filename, int key){
    // if primary key is valid then return true
    // if primary key is invalid then return flase
    ifstream _val(filename);
    string c;
    while(_val){
        int b=0, flag=1;
        getline(_val, c);
        for(int i=20; i<25 && c[i]!=' '; i++){
            b=(b*10)+(c[i]-48);
        }
        if(b==key){
            return false;
            break;
        }
    }
    return true;
}
void add_data(string name, int roll, int mark){
    // primary key is roll
    if(validation("DB.txt",roll)==true){
        store(name, roll, mark, "DB.txt");
        cout<<"record sucessfully inserted in <<table_name>> table"<<endl;
    }
    else{
        cout<<"Primary Key Violation"<<endl;
    }
}
