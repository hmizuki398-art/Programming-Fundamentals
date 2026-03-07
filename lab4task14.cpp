#include<iostream>
using namespace std;
main(){
    char n;
    cout<<"enter any character in lower case";
    cin>>n;
    if(n>='0'&&n<='9'){
        cout<<"It is a number"<<n;
    }
    if(n=='a'|| n=='e'||n=='i'||n=='o'||n=='u'){
        cout<<"It is vowel"<<n;
    }
    if(n<'a'&& n>'z'){
        cout<<"It is consonant"<<n;
    }
    }