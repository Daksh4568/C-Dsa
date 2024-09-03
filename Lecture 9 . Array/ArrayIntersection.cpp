#include<iostream>
using namespace std;
int ArrayIntersection(int arr1[] , int arr2[] , int n , int m ){
    int i = 0 ; int j = 0; int arr3[10];
    vector<int>ans;
    while(i<n && j<m){
        if(arr1[i] == arr2[j]){
            ans.push_back(arr1[i]);
           i++;
           j++;
        }
        else if(arr1[i] < arr2[j]){
            i++;
        }
        else{
            j++;
        }
    }
    return ans ;
;