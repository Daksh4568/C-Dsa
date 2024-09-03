#include<iostream>
using namespace std;
int main(){
    for(int i = 0 ; i < 5; i++){
        cout<<"Hi"<<endl;
        cout<<"Hey"<<endl;
        continue; //continue will make the next statement unreachable
        cout<<"Reply"<<endl;
    }
}