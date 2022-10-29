#include<iostream>
using namespace std;

class shop{
int itemid[100];
int itemprice[100];
int counter;
public:
void initcounter(void){
    counter = 0;
}
void displayprice(void);
void setprice(void);

};

void shop :: setprice(void){
    cout << "Enter the id of your item : "<<counter+1 <<endl;
    cin >> itemid[counter];
    cout << "Enter the price of your item : "<< endl;
    cin >> itemprice[counter];
        counter ++;
}
void shop:: displayprice(void){
    for(int i =0; i< counter ;i++){
        cout << " The price id item woth its id : "<< itemid[i]<<"  is  "<<itemprice[i] << endl;
    }
}
int main(){
int u;
cout<< "Enter the number of items :"<<endl;
cin >>u;
shop b1;
b1.initcounter();
for(int j=1;j<=u;j++){
 b1.setprice();
    }
b1.displayprice();
    return 0;
}