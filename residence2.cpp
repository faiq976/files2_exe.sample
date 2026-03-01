#include<iostream>
using namespace std;
main(){
int age;
cout<<"Enter your current age:";
cin>>age;
int house_changed;
cout<<"Enter the number of times you have moved the house:";
cin>>house_changed;
int average_duration;
average_duration=age/house_changed+1;
cout<<"Your average_duration of living is" <<average_duration<<endl;
return 0;
}