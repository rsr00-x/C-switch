#include<iostream>
using namespace std;
int main()
{
    int num1,num2;
    cin>>num1>>num2;
    char op;
    switch(op)
    {
        case 43:
         cout<<num1<<"+"<<num2<<"="<<num1+num2;
         break;
        case 45:
         cout<<num1<<"-"<<num2<<"="<<num1+num2;
         break;
        case 42:
         cout<<num1<<"*"<<num2<<"="<<num1+num2;
         break;
        case 47:
         cout<<num1<<"/"<<num2<<"="<<num1+num2;
         break;
         return 0;

    }

}
