#include<iostream>
using namespace std;
int printArray(int arr[] , int size){
    for(int i = 0 ; i<size ; i++){
        cout<<arr[i] << " ";
    }
    cout<<endl;
}
int FindDuplicate(int arr[] , int size){
     int ans = 0;
     for(int i = 0; i<size ; i++){
        ans = ans^arr[i] ;
     }     
     for(int i = 1 ; i<size ; i++){
        ans = ans^i;
     }
     return ans;
}
int main(){
    int arr[100] ;
    cout<<"Enter the size of the array "<< endl;
    int size ;
    cin>>size;
    cout<<"Enter the elements of the array " << endl;
    for(int i = 0 ; i<size ; i++){
        cin>>arr[i];
    }
    
    cout<<"The duplicate element in the array is "<< FindDuplicate(arr , size)<< endl ;
}