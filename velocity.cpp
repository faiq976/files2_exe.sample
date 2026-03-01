#include<iostream>
using namespace std;
main(){
float time;
cout<<"Enter the time in seconds";
cin>>time;
float initial_velocity;
cout<<"Enter the initial velocity in m/s";
cin>>initial_velocity;
float acceleration;
cout<<"Enter the acceleration in m/s^2";
cin>>acceleration;
float final_velocity;
final_velocity=initial_velocity+acceleration*time;
cout<<"The value of final velocity is" <<final_velocity<<endl;
}