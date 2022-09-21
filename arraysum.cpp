// i make a program to check the duplicateor common element in two arrays
// is it right 
#include<iostream>
using namespace std;
int main(){
int arr[9]={1,2,3,4,5,6,7,8,9};
int arre[9]={1,25,3,47,5,67,7,88,9};
for(int i=0;i<9;i++){
    for(int j=0;j<9;j++){
        if(arr[i]==arre[j]){
            cout << arr[i]<<endl;
        }
    }
}

return 0;
}
