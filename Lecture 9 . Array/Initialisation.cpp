
#include<iostream>
using namespace std;
int main(){
    int a[10]= {2,4,5};
    int b[10]= {0};
    int c[10];
    cout<<"The element at 3rd position is "<<a[2] <<endl;
    for(int i = 0 ; i<10 ; i++){
         c[i]= 5 ;
    }
    cout<<"Elements of a are " << endl ;
    for(int i = 0 ; i<10 ; i++){
        cout<<a[i] << " " ;
    }
    cout<<endl;
    cout<<"Elements of b are "<<endl ;
    for(int i = 0 ; i<10 ; i++){
        cout<<b[i] << " " ;
    }
    cout<<endl;
    cout<<"Elements of a are " <<endl ;
    for(int i = 0 ; i<10 ; i++){
        cout<<c[i] << " " ;
    }
    cout<<endl;


}