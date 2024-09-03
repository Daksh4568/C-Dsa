
#include<iostream>
using namespace std;
int primeNo(int n){
    for(int i = 1; i<n ; i++){
    if(n%i== 0){
        cout<<"Its not a prime no." <<endl;
    }
    else{
        cout<<"Its a prime no."<<endl;
    }
}
}
int main(){
    int n;
    cin>>n;
    cout<<primeNo;
}