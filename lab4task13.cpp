#include<iostream>
using namespace std;
main(){
    int num1,num2;
    char op;
    cout<<"enter first number";
    cin>> num1;
    cout<<"enter the operator";
    cin>>op;
    cout<<"enter second number";
    cin>>num2;
    if(op=='+'){
        cout<<num1<<"-"<<num2<<"="<<num1-num2;
    }
    if(op=='-'){
        cout<<num1<<"+"<<num2<<"="<<num1+num2;
    }
    if(op=='/'){
       cout<<num1<<"*"<<num2<<"="<<num1*num2;
    }
    if(op=='*'){
        cout<<num1<<"/"<<num2<<"="<<num1/num2;
    }
}
    
