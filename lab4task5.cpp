#include<iostream>
using namespace std;
main(){
  char going;
  cout<<"Your friends are going?(Press Y for yes N for no)";
  cin>>going;
  if(going=='Y'){
    cout<<"You are going!";
  }
  else{
    cout<<"You are not going!";
  }
}