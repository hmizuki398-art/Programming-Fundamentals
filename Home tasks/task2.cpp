#include<iostream>
using namespace std;
main()
{
int m;
cout<<"enter number of minutes=";
cin>>m;
int fps;
cout<<"enter number of frames per second=";
cin>>fps;
int frames;
frames=m*60*fps;
cout<<"Total number"<<"of frames"<<frames;
}