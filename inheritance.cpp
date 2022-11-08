// // C++ program to demonstrate inheritance

// #include <iostream>
// using namespace std;

// // base class
// class human {

//    public:
//     void eat() {
//         cout << "I can eat!" << endl;
//     }

//     void sleep() {
//         cout << "I can sleep!" << endl;
//     }
// };

// // derived class
// class man : public human {
 
//    public:
//     void intelligent() {
//         cout << "I know 2+2 = 4" << endl;
//     }
// };

// int main() {
//     // Create object of the man class
//     man man1;
//     // Calling members of the base class
//     man1.eat();
//     man1.sleep();

//     // Calling member of the derived class
//     man1.intelligent();

//     return 0;
// }


// #include<iostream>
// using namespace std;

// class record{
//     public:
//     long roll_no;
//     char std_name[30];
//     int semester;
//     void record1(void);
//     void display(void){
//         cout<<std_name<<"\n";
//         cout<<roll_no<<"\n";
//         cout << semester<<"\n";

//     }

// };
// void record::record1(){
// cout <<"Enter the student name"<<endl;
// cin.getline(std_name,30);
// cout <<"Enter the student rollnumber "<<endl;
// cin >> roll_no;
// cout <<"Enter the current semester "<<endl;
// cin >> semester;

// }
// class dept : public record{
//     public:
// dept(void){
//     char dept_name[30];
//     cout << " Enter your department "<<endl;
//     cin.getline(dept_name,30);
// }
// };
// int main(){
//     dept d1;
//     d1.record1();
//     d1.display();
//     return 0;
// }


// #include<iostream>
// using namespace std;
// class rect{
// public:
// int length;
// int breadth;
// // friend perimeter;
// // friend Area;
// rect(){
//     int l,b;
//     length=l;
//     breadth=b;
// cout<<"Enter the value of length"<<endl;
// cin>>length;
//     cout<<"Enter the value of breadth"<<endl;
//     cin>>breadth;
// }
// };
// class perimeter:public rect{
// public:
// perimeter(){
//     cout<<2*(length+breadth);
// }
// };
// class Area:public rect{
// public:
// Area(){
//     cout<<length*breadth;
// }
// };
// int main(){
//     int c;
//     cout << "What you wana find in a rectangle its pera or area "<<endl;
//     cout << "press 1 for pera & 2 for area"<<endl;
//     cin >> c;
//     if(c==1){
//     perimeter p1;
    
//     }

//     if(c==2){
//     Area A1;
    
//     }
//     return 0;
// }





// #include<iostream>
// using namespace std;
// class btech{
//     private:
//     long pass;
//     public:
//     char name[30];
//    int rlno;
//     long pp;
//     void ppp(void){
//         cout<< "Enter password : \n";
//         cin >> pp;
//         pass=pp;
//     }
//     btech(void){
//         cout << "Enter your name :\n";
//         cin >> name;
//         cout << "Enter your roll no. :\n";
//         cin >> rlno;
//     }
   
// };
// class marks :public btech{
// public:

// int mark;

// int marky(){
//     cout << " Enter your marks :"<<endl;
//     cin >> mark;

// }


//  void display(void){
//         cout << name<<endl;
//         cout <<rlno<<endl;
//         cout << mark<<endl;
//         cout<<pp<<endl;
//     }
// };
// int main ()
// {
//     marks m1;
//     m1.ppp();
//     m1.marky();
//     m1.display();
//     return 0 ;
// }
