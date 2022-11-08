            // single and multidimentional array;
// basic syntax  for __ARRAY 

// data_type array_name[arraysize];

// baisc representation

// #include<iostream>
// using namespace std;
// int main(){
    // int array[3];
    // array[0]=63;
    // array[1]=53;
    // array[2]=43;
    // array[2]=33;
     // cout << array[0]<<endl;
    // cout << array[1]<<endl;
    // cout << array[2]<<endl;
    // cout << array[2]<<endl;
// return 0;
// }


// #include<iostream>
// using namespace std;
// int main(){
//     int array[3]={1,2,2,3};
//     cout << array[0]<<endl;
//     cout << array[1]<<endl;
//     cout << array[2]<<endl;
//     cout << array[2]<<endl;
 
// return 0;
// }





// PRINT THE SINGLE DIMANSIONAL ARRAY 
// #include<iostream>
// using namespace std;
// int main(){
//     int i,n;
//     int arr[3];
//     for(i=0;i<3;i++){
//         cin>>arr[i];
//     }
//     for(i=0;i<3;i++){
//         cout<<arr[i]<<" ";
//     }

// return 0;
// }



// sum and average 
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     int sum=0;
//     double avg;
//     cout<<"Enter the total numbers of elements you want to enter:"<<endl;
//     cin >> n;
//     int x[n];
//     cout<<" Enter the array elements :"<<"\n";
//     for(int i=0;i<n;i++){
//         cin>>x[i];

//         sum+=x[i];
//     }
//         for(int i=0;i<n;i++){
//         cout<<x[i]<<" ";
//     }
//     avg=sum/n;
// cout << " the sum is "<< sum<<endl;
// cout << " the average is "<< avg;

// }


// multidimentional array;
// 2d array;
// int n[2][3];
// 2 represent rows ;
// 3 represents columns ;



// #include<iostream>
// using namespace std;
// int main(){
// int arr[2][3];
// cout<< " enter the array elements :";
// for(int i=0;i<2;i++){
//     for(int j=0;j<3;j++){
//         cin >> arr[i][j];
//     }
// }
// for(int i=0;i<2;i++){
//     for(int j=0;j<3;j++){
//         cout << arr[i][j]<<" ";

//     }
//     cout<< endl;
// }
// for(int i=0;i<2;i++){
//     for(int j=0;j<3;j++){
//         cout<<"arr"<<"["<<i<<"]"<<"["<<j<<"]"<< arr[i][j]<<"  ";
//     }
//     cout << endl;
// }

// return 0;
// }





#include<iostream>
using namespace std;
int main(){
int arr[2][3];
int arre[2][3];
int sum[2][3];
cout<< " enter the first array elements :";
for(int i=0;i<2;i++){
    for(int j=0;j<3;j++){
        cin >> arr[i][j];
    }
}
// for(int i=0;i<2;i++){
//     for(int j=0;j<3;j++){
//         cout << arr[i][j]<<" ";

//     }
//     cout<< endl;
// }
cout<< " enter the second array elements :";
for(int i=0;i<2;i++){
    for(int j=0;j<3;j++){
        cin >> arre[i][j];
    }
}
for(int i=0;i<2;i++){
    for(int j=0;j<3;j++){
        cout<<"arr"<<"["<<i<<"]"<<"["<<j<<"]"<< arr[i][j]<<"  ";
    }
    cout << endl;
}
for(int i=0;i<2;i++){
    for(int j=0;j<3;j++){
        cout<<"arre"<<"["<<i<<"]"<<"["<<j<<"]"<< arre[i][j]<<"  ";
    }
    cout << endl;
}
for(int i=0;i<2;i++){
    for(int j=0;j<3;j++){
       sum[i][j]=arr[i][j]+arre[i][j];
    }
    // cout << endl;
}
for(int i=0;i<2;i++){
    for(int j=0;j<3;j++){
        cout<<"sum"<<"["<<i<<"]"<<"["<<j<<"]"<< sum[i][j]<<"  ";
    }
    cout << endl;
}
return 0;
}