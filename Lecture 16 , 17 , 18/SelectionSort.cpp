#include<iostream>
using namespace std;
void PrintArray(int arr[] , int size){
    for(int i = 0 ; i<size; i++) {
        cout<<arr[i] << " ";
    }
}
void SelectionSort(int arr[] , int size){
    for(int i = 0 ; i<size -1; i++){
        int min = i;
        for(int j = i + 1 ; j<size ; j++){
            if(arr[j]< arr[min]){
                min = j;
            }
        }
        swap(arr[i] , arr[min]);
    }

}
int main(){
    int arr[5] = { 64 , 25 , 12 , 22 , 11};
    SelectionSort(arr , 5);
    PrintArray(arr , 5);
}