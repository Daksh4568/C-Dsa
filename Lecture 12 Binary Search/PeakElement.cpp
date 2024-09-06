#include<iostream>
using namespace std;
int PeakElement(int arr[] , int size ){
    for(int i = 0 ; i<size ; i++){
        if(arr[i]>=arr[i+1] && arr[i]>=arr[i-1]){
            return arr[i];
        }
    }
}
int main(){
    int arr[6] = { 1 ,2, 3, 4, 5, 6};
    cout<<"The peak element in the array is : " << PeakElement(arr , 6 );
}