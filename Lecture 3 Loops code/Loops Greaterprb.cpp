#include<iostream>
using namespace std;
int main(){
  /*  int a,b;
    cout<<"Enter the value of A "<< endl;
    cin>>a;
    cout<<"Enter the value of B"<< endl;
    cin>>b;
    if(a>b){
        cout<<"A is greater" << endl;
    }
    if(b>a){
        cout<<"B is Greater"<< endl;
    }
    */
   //Code for negative and positive . Method 1//
   /*int a ;
   cout<<"Enter the value of A"<< endl;
   cin>>a;
   if(a>0){
    cout<<"A is positive"<< endl;
   }
   else{
   if(a<0){
    cout<<"A is negative"<<endl;
   }
   else{
    cout<<"A is 0"<<endl;
   }
   }*/
   // Method 2 OPTIMIZED if else if
   int a ;
   cout<< " Enter the value of A "<< endl;
   cin>> a;
    if (a>0){
        cout<<"A is positive"<< endl;
    }
    else if (a<0){
        cout<<" A is negative"<< endl;
    }
    else{
        cout<<" A is 0"<< endl;
    }
   
}   