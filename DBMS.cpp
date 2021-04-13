
#include<iostream>
#include<cstdlib>
#include<string>
#include<sstream>
#include<vector>

using namespace std;

struct node{
	// dynamic data 
	int data;
	struct node *link;
};

struct node* getnode();
struct node *create();

// Query Handler
void query_handler(){
    string query;
    size_t found;
    //cin >> query; // create table student (NAME(STRING),ROLL(INTEGER),MARK(INTEGER))
    query = "create table student (NAME(STRING),ROLL(INTEGER),MARK(INTEGER))";
    while(true){
        found = query.find_first_of("(),");
        cout << found << endl;
        cout << query << endl;
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
}

/*----------functions-----------*/
struct node* getnode(){
	struct node *temp=(struct node*)malloc(sizeof(struct node));
	cin>>temp->data;
	return temp;
}
struct node *create(){
	 struct node *head,*ptr,*temp;
	 int choice;
	 head=NULL;
	 do
	 {
		temp=getnode();
		if(head==NULL){
			head=temp;
			ptr=temp;
		}
		else{
			ptr->link=temp;
			ptr=ptr->link;
		}
		cout<<"Enter choice(0/1) ";
		cin>>choice;
	 }while(choice==1);
	 ptr->link=NULL;
	 return head;
}

/*----------driving code----------*/
int main(){
	// driving code
    query_handler();
	return 0;
}