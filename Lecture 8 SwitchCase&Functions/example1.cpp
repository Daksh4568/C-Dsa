#include<iostream>
using namespace std;
int main(){
    int num = 1;
    char ch = '1';
    cout<<endl;
    switch(num){
        case 1 : cout<<"Its First "<<endl; //we can write multiple statement in 1 case 
                 cout<<"Its First again " <<endl;
                 break;
        case '1' : switch(num) {
                  case 1 : cout<<"Its Second "<<endl;
                 break;
        default : cout<<"Its Default "<<endl;
    } 
}
cout<<endl;
}