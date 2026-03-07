#include<iostream>
using namespace std;
main(){
string name1;
cout<<"enter name1";
cin>>name1;
int age1;
cout<<"enter age1";
cin>>age1;
string name2;
cout<<"enter name2";
cin>>name2;
int age2;
cout<<"enter age2";
cin>>age2;
string name3;
cout<<"enter name3";
cin>>name3;
int age3;
cout<<"enter age3";
cin>>age3;
if(age1<age2<age3){
cout<<name1<<"is the youngest"<<age1;
}
else if(age2<age1<age3){
    cout<<name2<<"is the youngest"<<age2;
}
else{
     cout<<name3<<"is the youngest"<<age3;
}
}
