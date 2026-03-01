#include<iostream>
#include<string>
using namespace std;
main(){
string name;
cout<<"Enter your name:";
cin>>name;
float Matriculation;
cout<<"Enter your Matriculation marks(out of 1100):";
cin>>Matriculation;
float Intermediate;
cout<<"Enter your Intermediate marks(out of 550):";
cin>>Intermediate;
float ECAT;
cout<<"Enter your ECAT marks)(out of 400):";
cin>>ECAT;
float Aggregate;
Aggregate=Matriculation *10.0/1100.0+Intermediate*40.0/550.0+ECAT*50.0/400.0;
cout<<"Your aggregate is" <<Aggregate<<endl;
return 0;
}
