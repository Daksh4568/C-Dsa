#include<iostream>
using namespace std;
int Findkey(int arr[] , int size , int key){
   int start = 0;
   int end = size - 1;
   int mid = start + (end - start) / 2;  
   while(start<=end){
    if(arr[mid]== key){
        return mid;
    }
    if(key>mid){
        start = mid + 1;
    }
    else{ //key<mid
        end = mid - 1;
    }
    mid = start + (end - start) / 2;
   }
   return - 1;
}
int main(){
    int arr[6] = {1 , 3 , 6 , 7, 8, 9};
    int key;
    cout<<"Enter the value for the key : "<< endl;
    cin>>key;
    cout<<"The index for the key in the array is : "<<Findkey(arr , 6 , key) << endl;
}