#include<iostream>
using namespace std;
int main(){
    int n ; 
    cin>>n;
    int i = 1;
    for( ; ;){ //for(int i = 1 ; i<=n ; i ++;)
        if(i<=n){
         cout<< i << endl;
        }
        else{
            break;
        }
        i++;
    }
}