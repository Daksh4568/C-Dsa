#include<iostream>
using namespace std;
void printArray(int arr[] , int n){
    for(int i = 0 ; i<n ; i++){
        cout<<arr[i] << " ";
    }
    cout<<endl;
}
int reverse(int arr[] , int n){
    int start = 0 ;
    int end = n - 1;
    while(start<=end){
        swap(arr[start] , arr[end]) ;
        start ++;
        end--;
    }
}
int main(){
    int arr[6] = { 1, 2 , 6 , -9 , 7 , 98} ;
    int brr[5] = { 4 , 5 , 98 , 76 , -98 } ;
    reverse(arr , 6) ;
    reverse(brr , 5) ;
    printArray(arr , 6) ;
    printArray(brr , 5);
}