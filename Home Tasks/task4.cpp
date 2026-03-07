#include<iostream>
using namespace std;
main(){
    int red;
    cout<<"red rose";
    cin>>red;
    int blue;
    cout<<"blue rose";
    cin>>blue;
    int tulip;
    cout<<"tulips";
    cin>>tulip;
    int totalprice;
    totalprice=(red*2.00)+(blue*4.10)+(tulip*2.50);
    cout<<"Total price"<<totalprice;
    if(totalprice>200){
        int discount;
        discount=totalprice-(totalprice*0.2);
        cout<<"Discount"<<discount;
    }
}