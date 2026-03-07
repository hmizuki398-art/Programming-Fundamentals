#include<iostream>
using namespace std;
main(){
    int bill;
    cout<<"Enter your bill";
    cin>>bill;
    if(bill>=5000){
        int discount;
        discount=bill-(bill*5)/100;
        cout<<"your discounted bill"<<discount;
    }
    else{
        int discount;
        discount=bill-(bill*10)/100;
        cout<<"your discounted bill"<<discount;
    }
}