#include<iostream>
using namespace std;
main(){
    string password,user_enter;
    cout<<"enter user password";
    cin>>password;
    cout<<"enter user_enter";
    cin>>user_enter;
    if(password==user_enter){
        cout<<"Finally you unlocked";
    }
    else{
        cout<<"Try again";
    }
}