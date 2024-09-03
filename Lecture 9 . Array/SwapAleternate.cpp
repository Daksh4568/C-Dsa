#include<iostream>
using namespace std;
void printArray(int arr[] , int n ){
    for(int i = 0 ; i<n ; i++){
    cout<<arr[i] << " " ;
}
  cout<<endl;
}
int SwapAlternate(int arr[] , int n ){
    for(int i = 0 ; i<n ; i=i+2){
        if(i+1<n){
         swap(arr[i] , arr[i+1]);

        }
    }
}
int main(){
   int arr[6] = { 1 , 3 , 4 , 5 , 78 , 87} ;
   int brr[5] = { 45 , 67 , 76 , 89 , 9 } ;
   SwapAlternate(arr , 6 ) ;
   SwapAlternate(brr , 5) ;
   printArray(arr , 6);
   printArray(brr , 5) ;
}