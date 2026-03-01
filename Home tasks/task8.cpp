#include<iostream>
using namespace std;
main()
{
float v;
cout<<"Price of vegetables per kilogram=";
cin>>v;
float f;
cout<<"Price of fruits per kilogram=";
cin>>f;
int VK;
cout<<"total kilograms of Vegetables=";
cin>>VK;
int FK;
cout<<"total kilograms of Fruits=";
cin>>FK;
double total_coins;
total_coins=(v*VK)+(f*FK);
double total_rupees;
total_rupees=total_coins/1.94;
cout<<"Total earnings in Rupees"<<total_rupees;
}