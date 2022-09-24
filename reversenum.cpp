// program to reverse the number;
#include <iostream>
using namespace std;
int main(){
    int n,remainder,reverse_no=0;
    cout << "Enter the integer  : "<<endl;
    cin >> n;
    while(n!=0){
        remainder= n % 10;
        reverse_no= reverse_no * 10 + remainder ;
        n/=10;
    }
    cout << " reversed number is : " << reverse_no;
    return 0;
}