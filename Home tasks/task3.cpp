#include<iostream>
using namespace std;
main()
{
int Vi;
cout<<"enter initial velocity (m/s)=";
cin>>Vi;
int a;
cout<<"enter acceleration (m/s^2)=";
cin>>a;
int t;
cout<<"enter time (s)=";
cin>>t;
int Vf;
Vf=(a*t)+Vi;
cout<<"Final velocity (m/s^2)="<<Vf;
}
