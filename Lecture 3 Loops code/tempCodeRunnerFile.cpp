#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    //for (int i = 1; i <=n; i++){//1 2 3 4
    //    for (int j = i; j>=1; j--) {
    //        cout<<j<<" ";
    //    }
    //    cout<<endl;
    //}
    int i = 1;
    while(i<=n){
        int j = i;
        while(j<=i){
            cout<<j<<" " ;
            j++;
        }
        cout<<endl;
        i++;
    }
}