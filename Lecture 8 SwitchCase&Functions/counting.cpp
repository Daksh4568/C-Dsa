#include<iostream>
using namespace std;
//Function Signature 
int printCounting(int n){
    for(int i = 1 ; i<=n ; i++){
        cout<< i << " " ;
    }
    cout<<endl;
}
int main(){
    int n ;
    cin>>n;
    //Function Called
    printCounting(n);
    return 0;
}