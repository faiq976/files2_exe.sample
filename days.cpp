#include<iostream>
#include<string>
using namespace std;
main(){
string name;
cout<<"Enter your name:";
cin>>name;
int loss;
cout<<"Enter your weight loss goal:";
cin>>loss;
float days_required;
days_required=loss*15;
cout<<"Days required for weight loss is" <<days_required<<endl;
return 0;
}