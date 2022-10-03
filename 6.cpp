// 6. Write a C++ program to calculate an average of 3 numbers.

#include<iostream>
using namespace std;
int main()
{
    int a,b,c,sum;
    cout<<"Enter Three Numbers: "<<endl;
    cin>>a>>b>>c;
    sum=a+b+c;
    cout<<"Average of Three Numbers is: "<<sum/3.0;
    return 0;
}