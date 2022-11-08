// STRINGS
#include <iostream>
#include<string.h>
using namespace std;
int main(){

// string name;
// name = " Hello i am a beginner \n";
// cout <<name;

// for taking full name  or string
// string name;
// cout<< "Enter your name\n";
// getline(cin,name);
// cout << name<<endl; 


// adding at last 
// string name;
// name = " Hello i am a beginner ";
// name.push_back('@');
// cout<<name;


// deleting a last character
// string name;
// name = " Hello i am a beginner";
// name.pop_back();
// cout<<name;


// for resizing
// string name;
// name = " Hello i am a beginner ";
// cout<<name<<endl;
// name.resize(7);
// cout<<name;

// string name;
// name = " Hello i am a beginner for coding \n";

// cout<<name;
// cout << name.capacity()<<endl;

// cout << "The length of the string is :" << name.length()
//          << endl; 
//          name.shrink_to_fit();
//              cout << "The new capacity after shrinking is : ";
//     cout << name.capacity() << endl;
  


  string name;
name = "Hello i am a beginner for coding\n";
string name1;
name1 = " hewuhrejggvhureguerug\n";

// cout << name[3];
// cout << name.at(5);


//  name.back() = '@';
// name.front() ='@';

// cout<<name;
// string :: iterator it_begin= name.begin();
// string :: iterator it_end= name.end();

// for(string::iterator it = it_begin; it!=it_end;it++){
//     cout << *it;
// }
// cout<<endl;


// string :: reverse_iterator it_begin= name.rbegin();
// string :: reverse_iterator it_end= name.rend();

// for(string::reverse_iterator it = it_begin; it!=it_end;it++){
//     cout << *it;
// }
// cout<<endl;


char ch_arr[5];
ch_arr[4]='\0';
// starting
name.copy(ch_arr,4,0);
cout<<ch_arr<<endl;
// last 
name.copy(ch_arr,4,name.length()-4);
cout<< ch_arr;



name.swap(name1);
cout << name;

name.append(name1);
cout << name;
    return 0;
}