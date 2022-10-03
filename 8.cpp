// 8. Write a C++ program to swap values of two int variables without using third variable

#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter Two Numbers: "<<endl;
    cin>>a>>b;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"After Swapping, First Number is "<<a<<" and Second Number is "<<b;
    return 0;
}