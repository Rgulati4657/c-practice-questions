// PROGRAMS USING CLASS AND OBJECTS.

/*
#include<iostream>
#include<char[10]>
using namespace std;
class Employee{
private :
 int a, b, c;
public :
int d,e; 
void setdata(int a1 ,int b1 ,int c1 );
void getdata(){
    cout << "The value of a is :"<< a << endl;
    cout << "The value of b is :"<< b << endl;
    cout << "The value of c is :"<< c << endl;
    cout << "The value of d is :"<< d << endl;
    cout << "The value of e is :"<< e << endl;
}
};
void Employee :: setdata(int a1 ,int b1 ,int c1 ){
    a=a1;
    b=b1;
    c=c1;
}
int main() {
Employee raghav ,anu ;
raghav.d = 85;
raghav.e = 8548;
anu.d = 856;
anu.e = 78;
raghav.setdata(12,45,20);
anu.setdata(14,52,02);
raghav.getdata();
anu.getdata();
    return 0;
}*/



/*
#include<iostream>
#include<string>
using namespace std;
class emmm {
    private :
    string name;
	int age ;
    public : 
    int a, b;
    void record();
    void input(){
        
        cout << "write any two symptoms numbers\n";
        cout << "1 for cold "<<endl << "2 for alergii "<<endl << "3 for headache "<<endl << "4 for pain in temples "<<endl << "5 for weekness "<<endl << "6 for back pain "<<endl;    
      
    }
       int result();

                 

};
void emmm::record(){
	int age1;
    string name1;
    cout << "Enter your name : "<< endl;
    cin >> name1;
	name=name1;
    cout << "Your name is : "<< name <<endl;
    cout << "Enter your age : "<< endl;
    cin >> age1;
    age = age1;
    cout << "Your age is : "<< age <<endl;
}
int emmm:: result(){
	int a,b;
//	a=a1;
//	b=b1;
        cin >>a;
        cin >>b;
                if( a==1 &&  b == 2)
                cout << " go to see  a doctor plz";
                
                else if( a==2 &&  b == 1)
                    cout << " go to see  a doctor";
                
                else if( a==1 &&  b == 3)
                    cout << " go from away";
                   
                else if( a==3 &&  b == 1)
                    cout << " go to see  a doctor";
                
                else if( a==1 &&  b == 4)
                    cout << " go from away";
                   
                else if( a==4 &&  b == 1)
                    cout << " go to see  a doctor";
                
                else if( a==1 &&  b == 5)
                    cout << " go from away";
                   
                else if( a==5 &&  b == 1)
                    cout << " go to see  a doctor";
                
                else if( a==1 &&  b == 6)
                    cout << " go from away";
                   
                else if( a==6 &&  b == 1)
                    cout << " go to see  a doctor";
                
                else if( a==2 &&  b == 3)
                    cout << " go from away";
                   
                else if( a==3 &&  b == 2)
                    cout << " go to see  a doctor";
                
                else if( a==2 &&  b == 4)
                    cout << " go from away";
                   
                else if( a==4 &&  b == 2)
                    cout << " go to see  a doctor";
                
                else if( a==2 &&  b == 5)
                    cout << " go from away";
                   
                else if( a==5 &&  b == 2)
                    cout << " go to see  a doctor";
                
                else if( a==2 &&  b == 6)
                    cout << " go from away";
                   
                else if( a==6 &&  b == 2)
                    cout << " go to see  a doctor";
                
                else if( a==3 &&  b == 4)
                    cout << " go from away";
                   
                else if( a==4 &&  b == 3)
                    cout << " go to see  a doctor";
                
                else if( a==3 &&  b == 5)
                    cout << " go from away";
                   
                else if( a==5 &&  b == 3)
                    cout << " go to see  a doctor";
                
                else if( a==3 &&  b == 6)
                    cout << " go from away";
                   
                else if( a==6 &&  b == 3)
                    cout << " go to see  a doctor";
                
                else if( a==4 &&  b == 5)
                    cout << " go from away";
                   
                else if( a==5 &&  b == 4)
                    cout << " go to see  a doctor";
                
                else if( a==4 &&  b == 6)
                    cout << " go from away";
                   
                else if( a==6 &&  b == 4)
                    cout << " go to see  a doctor";
                
                else if( a==5 &&  b == 6)
                    cout << " go from away";
                   
                else if( a==6 &&  b == 5)
                    cout << " go to see  a doctor";
                
                
                else{
                    cout << " Improve skills";
                }
                    
              return 0;  
		}

int main (){
    emmm user;
    user.record();
    user.input();
	user.result();

    return 0;
}

*/





#include<iostream>
#include<string>
using namespace std;
class binary{

     string s;
     void checkbin(void);
     public:
     void read(void);
     void ones_compliment(void);
     void display(void);
} bb ;
void binary::read(void){
    cout << " Enter the number : "<< endl;
    cin >> s;
}
void  binary :: checkbin(void){
    for(int i=0;i< s.length();i++){
        if(s.at(i)!='1' && s.at(i)!='0' ){
        cout <<"Incorrect binary number " <<endl;
        exit(0);
        }

    }
}
void binary:: ones_compliment(){
     checkbin();
     for(int i=0;i< s.length();i++){
        if(s.at(i)=='0'){
            s.at(i)='1';
        }
        else{
            s.at(i)='0';
        }

     }
}

void binary:: display(){
 for(int i=0;i< s.length();i++){
    cout << s.at(i);
 }   
 cout<< endl;
}


int main(){

 bb.read();
//  bb.checkbin();
 bb.display();
 bb.ones_compliment();
 bb.display();

    return 0;
}