#include<iostream>
using namespace std;
int sum(int arr[] , int n ){
    int sum = 0 ;
    for(int i = 0 ; i<n ; i++){
        sum = sum + arr[i];
    }
    return sum;
}
int main(){
    int arr[100];
    cout<<"Enter the size of the array " << endl;
    int size ;
    cin>>size;
    cout<<"Enter the elements of the array " << endl;
    for(int i = 0 ; i<size ; i++){
        cin>>arr[i];
    }
    cout<<endl;
    cout<<"The sum of all the elements of the array is " << sum(arr , size ) << endl ;
}