#include<iostream>
#include<cstdlib>
#include<string>
#include<sstream>
#include<vector>

using namespace std;

void query_driver(){
    string query;
    size_t found;
    cin >> query; // create table student (NAME(STRING),ROLL(INTEGER),MARK(INTEGER))
    query = "create table student (NAME(STRING),ROLL(INTEGER),MARK(INTEGER))";
    while(true){
        found = query.find_first_of("(),");
        cout << found << endl;
        if(found != string::npos){
            query[found] = ' '; // Replace (), with space
        }
        else
            break;
    }
    string tmp; // A string to store the word on each iteration.
    stringstream str_strm;
    str_strm << query;
    vector<string> words; // Create vector to hold our words
    while (str_strm >> tmp) {
        // Provide proper checks here for tmp like if empty
        // Also strip down symbols like !, ., ?, etc.
        // Finally push it.
        if(tmp[0] != '(')
            words.push_back(tmp);
        else if(tmp[0] == '('){
            
        }
    }
    for(int i = 0; i<words.size(); i++)
        cout << words[i] << endl;
    cout << query;

}