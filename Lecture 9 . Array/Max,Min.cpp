#include<iostream>
using namespace std;
int GetMax(int num[] , int n ){
      int maxi = INT8_MIN;
      for(int i = 0 ; i<n ; i++){
        if(num[i]>maxi){ // or we can do this / maxi = max(num[i] , maxi) 
            maxi = num[i];
        }
      }
      return maxi ;
}
int GetMin(int num[] , int n ){
    int min = INT8_MAX;
    for(int i = 0 ; i<n ; i++){
        if(num[i]<min){   // or we can do this / mini = min(num[i] , mini) 
            min = num[i];
        }
    }
    return min;
}
int main(){
    int size ;
    cout<<"Enter the size of array you want " << endl;
    cin>>size ;
    int num[100];
    cout<<"Enter the element of the array " << endl;
    for(int i = 0 ; i < size ; i++){
        cin>>num[i];
    }
    cout<<"The max element in the array is " << GetMax(num,size) << endl;
    cout<<"The min element of the array is " << GetMin(num , size) << endl;
}