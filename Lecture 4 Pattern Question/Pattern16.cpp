#include<iostream>
using namespace std;
int main(){
    int n ;
    cin>>n;
    char value = 'A';
    int i = 1;
    while(i<=n){
        int j = 1;
        while(j<=i){
            cout<<value;
            value++;
            j++;
        }
        cout<<endl;
        i++;
    }
}