#include<iostream>
using namespace std;
main()
{
string m;
cout<<"enter movie name=";
cin>>m;
int c;
cout<<"enter price of child ticket=";
cin>> c;
int a;
cout<<"enter price of adult ticket=";
cin>>a;
int AT;
cout<<"enter no of adults's tickets=";
cin>>AT;
int CT;
cout<<"enter no of child's tickets=";
cin>>CT;
int PoC;
cout<<"Percentage of total money donate to charity=";
cin>>PoC;
int t;
t=(c*CT)+(a*AT);
double CH;
CH=(PoC/100.0)*t;
int ACh;
ACh=t-CH;
cout<<"------------------------------"<<endl;
cout<<"Movie"<<m<<endl;
cout<<"total amount of money generated from sales"<<t<<endl;
cout<<"Charity"<<CH<<endl;
cout<<"money after charity"<<ACh<<endl;
}
