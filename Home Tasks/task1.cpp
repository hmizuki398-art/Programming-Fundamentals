#include<iostream>
using namespace std;
main(){
    string country_name;
    cout<<"enter country name";
    cin>>country_name;
    int price;
    cout<<"enter price name";
    cin>>price;
    if(country_name=="ireland"){
        int discount;
        discount=price-(price*0.1);
        cout<<"Discount"<<discount;
    }
    else{
        int discount;
        discount=price-(price*0.05);
        cout<<"Discount"<<discount;
    }
}