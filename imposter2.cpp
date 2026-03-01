#include<iostream>
using namespace std;
main(){
int i;
cout<<"Enter the imposter count:";
cin>>i;
float p;
cout<<"Enter the player count:";
cin>>p;
float imposter_count;
imposter_count=100*i/p;
cout<<"Chance of being an imposter is" <<imposter_count <<" %" <<endl;
return 0;
} 
