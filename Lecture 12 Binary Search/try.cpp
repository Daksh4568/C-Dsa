#include<iostream>
using namespace std;
int FirstOccurence(int arr[] , int size , int key){
    int start = 0 ;
    int end = size - 1;
    int mid = start + (end - start)/ 2;
    int ans = -1;
    while(start<=end){
        if(arr[mid] == key){
            ans = mid ;
            end = mid - 1;
        }
        else if(key<arr[mid]){
            end = mid - 1;
        }
        else if(key>arr[mid]){
            start = mid + 1;
        }
        mid = start + (end - start)/2;
    }
    return ans ;
}
int LastOccurence(int arr[] , int size , int key){
    int start = 0 ;
    int end = size - 1;
    int mid = start + (end - start)/ 2;
    int ans = -1;
    while(start<=end){
        if(arr[mid] == key){
            ans = mid ;
            start = mid + 1;
        }
        else if(key<arr[mid]){
            end = mid - 1;
        }
        else if(key>arr[mid]){
            start = mid + 1;
        }
        mid = start + (end - start)/2;
    }
    return ans ;
}
int main(){
    int arr[7] = { 1 , 2 , 3 , 3,  3, 3 , 5};
    int key;
    cout<<"Enter the number you want to find the first and last occurence : " << endl;
    cin>>key;
    cout<<"THe first occurence of the key is : " <<FirstOccurence(arr , 7 , key)<<endl;
    cout<<"THe Last occurence of the key is : " <<LastOccurence(arr , 7 , key)<<endl;
    cout<<"The total number of occurence is : "<<LastOccurence(arr , 7 , key)-FirstOccurence(arr , 7 , key)+1;

}