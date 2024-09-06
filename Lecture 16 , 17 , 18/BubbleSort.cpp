#include<iostream>
using namespace std;
void PrintArray(int arr[] , int n){
    for(int i = 0 ; i<n ; i++){
        cout<<arr[i]<<" ";
    }
}
void BubbleSort(int arr[] , int n){
      for(int i = i ; i<n ; i++){
        for(int j = 0 ; j<n-i;j++){
            if(arr[j]> arr[j+1]){
                swap(arr[j] , arr[j+1]);
            }
        }
      }
}
int main(){
    int arr[5] = { 64 , 25 , 12 , 22 , 11};
    BubbleSort(arr , 5);
    PrintArray(arr , 5);
}