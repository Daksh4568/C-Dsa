#include<iostream>
using namespace std;
int main(){
    int ch ;
    cin>>ch;
    if(ch>='a'&& ch<='z'){
        cout<<"Lowercase";
    }
    else if(ch>='A'&& ch<='Z'){
        cout<<"Uppercase";
    }
    else{
        cout<<"Its a number ";
    }
}