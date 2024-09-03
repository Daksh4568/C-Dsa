#include<iostream>
using namespace std;
int FindUnique(int arr[] , int size){
    int ans = 0 ;
    for(int i = 0 ; i<size ; i++){
        ans = ans^arr[i] ;
    }
    return ans ;
}
int main(){
    int arr[100];
    cout<<"Enter the size of the array :" << endl;
    int size ;
    cin>>size;
    cout<<"Enter the elements you want in array : " <<endl;
    for(int i = 0 ; i<size ; i++){
        cin>>arr[i];
    }
    cout<<"The elements in the array are :" <<endl;

    for(int i = 0 ; i<size ; i++){
        cout<<arr[i] << " ";
    }
    cout<<endl;
    FindUnique(arr , size);
    cout<<"The unique element in the given array is " << FindUnique(arr,size) ;
}