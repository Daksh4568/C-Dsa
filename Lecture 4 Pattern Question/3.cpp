//sum of two numbers using constructor
#include <iostream>
using namespace std;
class dakshsum
{
private: 
int x, y;
public:
dakshsum(int a1, int b1)
{
x = a1;
y = b1;
cout<<"x ="<<x<<endl;
cout<<"y ="<<y<<endl;
cout<<"X + Y ="<<x + y;
}
};
int main()
{
dakshsum t1 = dakshsum(45, 20);      
return 0;
}