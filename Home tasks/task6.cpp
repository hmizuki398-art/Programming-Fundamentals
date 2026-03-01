#include<iostream>
using namespace std;
main()
{
int w;
cout<<"enter weight of the fertilizer bag in pounds=";
cin>>w;
int c;
cout<<"cost of a bag=";
cin>>c;
int a;
cout<<"the area of bag=";
cin>>a;
int p;
p=c/w;
cout<<"price of fertilizer per pound"<<p;
int s;
s=w*a;
cout<<"cost of fertilizing bag per square meter"<<s;
}
