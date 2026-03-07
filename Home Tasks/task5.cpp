#include<iostream>
using namespace std;
main(){
    int holidays;
    cout<<"Holidays";
    cin>>holidays;
    int working_days;
    working_days=365-holidays;
    int timeforgames;
    timeforgames=(working_days*63)+(holidays*127);
    if(timeforgames>30000){
        int difference;
        difference=(timeforgames-30000);
        int hours;
        hours=difference/60;
        int minutes;
        minutes=difference%60;
        cout<<"tom sleeps well"<<endl;
        cout<<hours<<"Hours and"<<minutes<<"minutes more for play<<endl";
    }
    if(timeforgames<30000){
        int difference;
        difference=(30000-timeforgames);
        int hours;
        hours=difference/60;
        int minutes;
        minutes=difference%60;
        cout<<"tom sleeps well"<<endl;
        cout<<hours<<"Hours and"<<minutes<<"minutes more for play<<endl";
    }
}
    