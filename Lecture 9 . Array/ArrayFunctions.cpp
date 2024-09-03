#include<iostream>
using namespace std;
void PrintArray(int arr[] , int size){
    for(int i = 0 ; i<size ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<"Printing Done " <<endl;
}  
int main(){
    //accesing the array
    int first[15];
    cout<<"Value at index 14 is " << first[13]<<endl;
    int second[10]={2 ,7 , 5};
    PrintArray(second,10); 
    //initialising all locations with 0
    int third[10]={0};
    PrintArray(third , 10);
    int fourth[10]={1};
    PrintArray(fourth , 10 );
//we can create different type of arrays . That includes 
 double firstDouble[5];
 float FirstFloat[4];
 bool FirstBool[9];
    char arr[10]={'a', 'b' , 'c', 'd'};
    for(char i = 0; i<10 ; i++){
        cout<< arr[i] <<" ";
    }
    }