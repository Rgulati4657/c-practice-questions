// insertion sort
#include<iostream>
using namespace std;
class insertion{
    public: 
    int i,c;
    int arr[5];
int array(){
     int arr[5];
    cout<< " Enter the array Elements :"<<endl;
    for(int i=0;i<5;i++){
       cin >> arr[i];
    }
    for(int i=0;i<5;i++){
       cout << arr[i]<<" ";
    }
    int j,key,temp;
    arr[j]=key;
    for(int j=1; j<5;j++){
        for(int i=0;i<5;i++){
            if(arr[i]<=key){
            cout << "no action";
            }
            else{
                temp=arr[i];
                arr[i]=arr[i+1];
                arr[i]=temp;
            }
        }
    }

    for(int i=0;i<5;i++){
       cout << arr[i]<<" ";
    }
    
}
// int print(){
//     }
    // void insert(){
    //     int key;
    //     for (int j=0;j<5;j++){
    //         arr[j]=key;
    //         i=j-1;
    //         while(i>=0 && arr[i]>key){
    //             arr[i+1] = arr[i]; 
    //             j--;
    //         }
    //     arr[j+1]=key;

    //     }
    // }
}bb;
int main(){
    bb.array();
    // bb.print();
    // bb.insert();
    // bb.print();
return 0;
}