#include<iostream>
using namespace std;
main(){
float current;
cout<<"Enter the value of current in amperes";
cin>>current;
float voltage;
cout<<"Enter the value of voltage in volts";
cin>>voltage;
float power=current*voltage;
cout<<"The value of power in watts is" <<power<<endl;
}