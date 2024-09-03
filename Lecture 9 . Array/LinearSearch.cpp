#include<iostream>
using namespace std;
bool search(int arr[] , int size , int key){
    for(int i = 0 ; i<size ; i++){
        if(key==arr[i]){
         return 1;
        }
    }
    return 0;
}
int main(){
    int arr[10] = {1 ,2 , 4 , 6 , 87 , -98 , 21 , 76, 65 , 4 };
    int key ;
    cin>>key;
    bool found = search(arr , 10 , key);
    if(found){
        cout<<"Key is Present " << endl;
    }
    else{
        cout<<"Key is absent " << endl;
    }
}