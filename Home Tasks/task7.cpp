#include<iostream>
using namespace std;
main(){
    string figure;
    cout<<"figure";
    cin>>figure;
    if(figure=="square"){
        int A,l;
        cout<<"enter lenght";
        cin>>l;
        A=l*l;
        cout<<"Square"<<A;
    }
    if(figure=="rectangle"){
        int A,L,W;
        cin>>L;
        cin>>W;
        A=L*W;
        cout<<"Rectangle"<<A;
    }
    if(figure=="circle"){
        int A,r;
        double pi;
        pi=3.14;
        A=(pi)*(r^2);
     }
     if(figure=="triangle"){
        int A,b,h;
        cin>>b;
        cin>>h;
        A=1/2*(b*h);
        cout<<"Triangle"<<A;
    }
}
