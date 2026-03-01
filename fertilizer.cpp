#include<iostream>
using namespace std;
main(){
int weight;
cout<<"Enter the weight of fertilizer bag in pounds:";
cin>>weight;
int price;
cout<<"Enter the price of fertilizer bag:";
cin>>price;
int area;
cout<<"Enter the area bag can cover in square metres:";
cin>>area;
double price_in_pound;
price_in_pound=price-weight;
cout<<"Price of fertilizer for each pound is" <<price_in_pound<<endl;
double square_foot_price;
square_foot_price=weight*area;
cout<<"Cost of using fertilizer for each square foot is" <<square_foot_price<<endl;
return 0;
} 