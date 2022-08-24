#include<iostream>
using namespace std;
int main(){
    int num,lentab;
    cout<<"Enter the  value to get desires multiples  "<<endl;
    cin>>lentab;
    cout<<"enter the table number : "<<endl;
    cin >> num;
    for(int i =1; i <= lentab; i++)
    cout<<num<<" x "<<i<<" = "<<num*i<<endl;
    return 0 ;
}
