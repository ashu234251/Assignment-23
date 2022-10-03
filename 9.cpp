// 9. Write a C++ program to find the maximum of two numbers.

#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter Two Numbers: "<<endl;
    cin>>a>>b;
    if(a>b)
     cout<<"Maximum is "<<a;
    else if(b>a)
     cout<<"Maximum is "<<b;
    else
     cout<<"Both are Equal Numbers";
    
    return 0;
}