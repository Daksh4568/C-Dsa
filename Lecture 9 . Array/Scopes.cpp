#include<iostream>
using namespace std;
void update(int arr[] , int n ){
    cout<<"Inside the update function " << endl;
    // updating the first element of the array 
    arr[0] = 120;
    arr[1] = 56 ;
    for(int i = 0 ; i<n ; i++){
        cout<<arr[i] << " ";
    }
    cout<<endl;
    cout<<"Going back to the main function " << endl;
}
int main(){
     int arr[3] = {1,2,3};
     update(arr , 3 );
     cout<<"Inside the main function " << endl;
     //printing the array 
     cout<<endl<<"Printing the main function "<<endl;
     for(int i = 0 ; i<3 ; i++){
        cout<<arr[i] << " ";
     }
}