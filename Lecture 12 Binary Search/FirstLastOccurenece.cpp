#include<iostream>
using namespace std ;
int FirstOccurence(int arr[] , int size , int number){
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start ) / 2;
    int ans = -1;
    while(start<= end){
      if(arr[mid] == number ){
        ans = mid ;
        end = mid - 1;
      }
      else if(arr[mid] < number){
        end = mid - 1;
      }
      else if(arr[mid] > number){
        start = mid + 1;
      }
      mid = start + (end - start ) / 2;
    }
    return ans ;
}
int LastOccurence(int arr[] , int size , int number){
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start ) / 2;
    int ans = -1;
    while(start<= end){
      if(arr[mid] == number ){
        ans = mid ;
        start = mid + 1;
      }
      else if(arr[mid] < number){
        end = mid - 1;
      }
      else if(arr[mid] > number){
        start = mid + 1;
      }
      mid = start + (end - start ) / 2;
    }
    return ans ;
}
int main(){
    int arr[6] = {1 , 2 , 3 , 3 , 3 , 5};
    int number = 3 ; 
    cout<<"Enter the number you want to find the first and last occurenece : " << endl;
    cin>>number;
    cout<<"The Firt occurence of the number is at Index : "<<FirstOccurence(arr , 6 , number)<< endl;
    cout<<"The Last occurence of the number is at Index : "<<LastOccurence(arr , 6 , number)<< endl;

}