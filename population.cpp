 #include<iostream>
using namespace std;
main(){
int pop;
cout<<"Enter the current pop";
cin>>pop;
int birth;
cout<<"Enter the monthly birth rate";
cin>>birth;
int fut_pop;
cout<<"Enter increment of population";
cin>>fut_pop;
fut_pop=birth*360;
cout<<"Population in 3 decades will be" <<fut_pop<<endl;
} 