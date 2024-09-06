#include<iostream>
using namespace std;
void PrintArray(int arr[] , int size){
    for(int i = 0 ; i<size ; i++){
        cout<<arr[i] << " ";
    }
}
void InsertionSort(int arr[] , int size){
    for(int i = 1 ; i<size ; i++){
        int temp = arr[i];
        int j = i -1;
        for( ; j>=0 ; j--){
            if(arr[j] > temp){
                arr[j+1] = arr[j];
            }
            else{
                break;
            }
        }
        arr[j+1] = temp;
    }
}
int main(){
    int arr[5] = { 64 , 25 , 12 , 22 , 11};
    InsertionSort(arr , 5);
     PrintArray(arr, 5);
}