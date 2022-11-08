// lets use functions
// syntax
// return_type  functon_name(parameter1,.........){
//     function body
// }

// basic program using function
// these are some user defined functions :
// #include <iostream>
// using namespace std;
// void sample(){
//     cout<<"Here i'll show some sample programs using functions "<<endl;
// }
// int add(int a,int b){
// return a+b;
// }
// int subtract(int a,int b){
// return a-b;
// }
// int divide(int a,int b){
// return a/b;
// }
// int multiply(int a,int b){
// return a*b;
// }
// int factorial(int n){
// int sum=1;
//    for (int i = 1; i <= n; i++)
//    {
//     /* code */sum=sum*i;
//    }
//    return sum;
// }
// int main(){
//     sample();
//  cout<<"add   : "<< add(6,5)<<endl;
//  cout<<"subtract   : "<<subtract(6,5)<<endl;
//  cout<<"multiply   : "<< multiply(6,5)<<endl;
//  cout<<"divide   : "<< divide(33,4)<<endl;
// cout<< "Factorial    : "<<factorial(6);
//     return 0;
// }



// now lets do some library functions
#include<iostream>
#include<cmath>
using namespace std;
int main(){
int n=169;
int x=1000;
int rr=1;
cout<<"Sqaureroot of 169 is "<< sqrt(n)<<endl;
cout<<"cuberoot of 1000 is "<< cbrt(x)<<endl;
double result;
result=cos(rr);
cout << "result cosx is "<< result<<endl;

    return 0;
}