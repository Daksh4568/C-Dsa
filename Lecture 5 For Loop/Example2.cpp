#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int a = 2 ,b = 3 ,c = 4; a>=0 && b>=1 && c >=1; a--,b--, c++){
        cout<<a << " "<<b<< " "<<c<<endl;
    }

}