// basic program using constructor

// #include<iostream>
// using namespace std;
// class vehicle{
//     public:
//  vehicle(void);
// } car;
//  vehicle :: vehicle(void){
//     cout << "Here we talk about some basic features "<<endl;
//     cout << "Speed "<<endl;
//     cout << "fuel efficiency "<<endl;
//     cout << "Gear boxSpeed "<<endl;
//     cout << " Engine power "<<endl;
// }

// int main(){
//     return 0 ;
// }

// calculate factorial using constructor

// #include<iostream>
// using namespace std;
// class fact{
//     int n;
//     public:
//     int i,result;
//     fact(int x);
//     void getdata(void);
//     void display(void);
// };
// fact :: fact(int x){
//     n=x;
//     result = 1;
// }
// void fact:: getdata(void){
//         for(i=1;i<=n;i++){
//             result=result*i;
//         }
//     }
// void fact :: display(void){
//     cout << "\n The required result is : "<< result;
// }
// int main(){
//     int x;
//     cout << " Enter the value :"<<endl;
//     cin >> x;
//     fact f1(x);
//     f1.getdata();
//     f1.display();
//     return 0 ;
// }

// record using constructor
// #include<iostream> 
// using namespace std;
// class player{
//     public:
//     int i=1;
//     long  player_num;
//     int num_matches;
//     char player_name[30];
//     int goal[];
// player(void);
// void display(void);
// };
// player :: player(void){
// cout<<"Enter the player name \n";
// cin.getline(player_name,30);

// cout<<"Enter the player number \n";
// cin >> player_num;
// cout<<"Enter the Number of matches \n";
// cin >> num_matches;

// for(int i=0;i<num_matches;i++){
//     cout<<"Enter goals in "<<i+1 << "match :\n"; 
//     cin >>goal[i];
// }



// }

// void player :: display(void){
//     cout << player_name<<endl;
//     cout << player_num<<endl;
//     cout << num_matches<<endl;

// for(int i=0;i<num_matches;i++){
//     cout<<" goals in "<<i+1 << "match is :"<<goal[i]<<"\n";
// }
// }
// int main(){
// player p1;
// p1.display();
//     return 0;
// }


// #include<iostream>
// using namespace std;

// class Player
// {
//         int player_no, no_of_matches;
//         char player_name[100];
//         int *goals;
//     public:
//         Player()
//         {
//                 int i;
//                 cout<<"\n Enter Player No. : ";
//                 cin>>player_no;
//                 cout<<"\n Enter Player Name : ";
//                 cin>>player_name;
//                 cout<<"\n Enter No. of Matches : ";
//                 cin>>no_of_matches;
//                 goals=new int [no_of_matches];
//                 for(i=0; i<=no_of_matches - 1; i++)
//                 {
//                         cout<<"\n Enter No. of Goals in Match "<<i+1<<" : ";
//                         cin>>goals[i];
//                 }
//         }
//         void display()
//         {
//                 int i;
//                 cout<<"\n --------------------------------";
//                 cout<<"\n Player No. : "<<player_no;
//                 cout<<"\n Player Name : "<<player_name;
//                 cout<<"\n No. of Matches Played : "<<no_of_matches;
//                 for(i=0; i<=no_of_matches - 1; i++)
//                 {
//                         cout<<"\n Match "<<i+1<<" Goals : "<<goals[i];
//                 }
//         }
// };
// int main()
// {
//         Player P;
//         P.display();
//         return 0;
// }


// basic program using destructor
#include <iostream>
using namespace std;
class rr{
    int x;
public:

rr(void){
    x=36;
    x++;
    ++x;
}
void display(){
    cout << x;
}
~rr(void){
    cout <<" bye now you are free ";
}
};
int main(){
    rr r1;
    r1.display();
    return 0;

}