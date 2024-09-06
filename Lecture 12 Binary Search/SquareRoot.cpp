#include<iostream>
using namespace std;
long long int SquareRoot(int number){
    int start = 0;
    int end = number;
    long long int mid = start +(end - start) / 2;
    long long int ans = -1;
    while(start<=end){
    long long int square = mid*mid;
        if(square == number){
            return mid;
        }
        if(square < number ){
            ans = mid;
            start = mid + 1;
        }
        else{
            end = mid - 1 ;
        }
        mid = start +(end - start) / 2;
    }
    return ans;
}
int main(){
    long long int number;
    cout<<"Enter the number for which square root is needed : "<< endl;
    cin>>number;
    cout<<" The square root of the number is : "<< SquareRoot(number);
} 