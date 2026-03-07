#include<iostream>
using namespace std;
main(){
    int salary=10000;
    int price=50000;
    int monthly_salary;
    monthly_salary=salary*6;
    int discount=(monthly_salary)*0.5;
    if(discount>=price){
      cout<<"You can buy the laptop";
    }
    else{
      int months;
      months=price/(salary*0.5);
      cout<<"enter the months"<<months;
    }
}

