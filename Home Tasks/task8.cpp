#include<iostream>
using namespace std;
main()
{
    int n;
    cin>>n;
    int tens=n/10;
    int ones=n%10;
    if(n==0){cout<<"zero";}
   else if(n==100){cout<<"one hundred";}
    else if(n==10){cout<<"ten";}
    else if(n==11){cout<<"eleven";}
    else if(n==12){cout<<"twelve";}
    else if(n==13){cout<<"thirteen";}
    else if(n==14){cout<<"fourteen";}
    else if(n==15){cout<<"fifteen";}
    else if(n==16){cout<<"sixteen";}
    else if(n==17){cout<<"seventeen";}
    else if(n==18){cout<<"eighteen";}
    else if(n==19){cout<<"nineteen";}
    if (tens==2){cout<<"twenty";}
     if else(tens==3){cout<<"thirty";}
      if else(tens==4){cout<<"forty";}
      if else(tens==5){cout<<"fifty";}
      if else(tens==6){cout<<"sixty";}
      if else(tens==7){cout<<"seventy";}
      if else(tens==8){cout<<"eighty";}
      if else(tens==9){cout<<"ninety";}
    if(ones==1){cout<<"ones";}
      if else (ones==2){cout<<"two";}
      if else (ones==3){cout<<"three";}
      if else (ones==4){cout<<"four";}
      if else (ones==5){cout<<"five";}
      if else (ones==6){cout<<"six";}
      if else (ones==7){cout<<"seven";}
      if else (ones==8){cout<<"eight";}
      if else (ones==9){cout<<"nine";}
}
    
      
      
      

   
    
