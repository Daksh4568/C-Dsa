#include<iostream>
using namespace std;
int printArray(int arr[] , int n){
    for(int i = 0 ; i<n ; i++){
        cout<<arr[i] << " ";
    }
    cout<<endl;
}
int Sort01(int arr[] , int n){
    int left = 0 , right = n-1;
    int step = 0;
    while(left<right){
         cout<<"Step"<< step++<< endl;
    printArray(arr , 8);
        while(arr[left]==0 && left<right){
            left++;
        }
        while(arr[right]==1 && left<right){
            right--;
        }
// arr[left]==1 && arr[right] == 0 . In this condition we will swap
   if(left<right){
     swap(arr[left] , arr[right]);
        left++;
        right--;
     }
}
    cout<<"Returining the sorted array"<< endl;
    printArray(arr,8);
    
}
int main(){
    int arr[8]={1,1,0,0,0,0,1,0};
    Sort01(arr , 8);
    cout<<"Printing after the function call" <<endl;
    printArray(arr, 8);
}

