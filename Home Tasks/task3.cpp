#include<iostream>
using namespace std;
main(){
    int city1;
    cout<<"enter city 1 ";
    cin>>city1;
    int city2;
    cout<<"enter city 2";
    cin>>city2;
    int difference;
    difference=city1-city2;
    if(difference>10){
        cout<<"Difference is too big";
    }
else{
    cout<<"Program ends";
}
}