#include<iostream>
using namespace std;
main(){
float paint;
cout<<"Enter the amount of paint:";
cin>>paint;
float area;
cout<<"Enter the area in square metres you can paint:";
cin>>area;
int width;
cout<<"Enter the width of single wall i metres:";
cin>>width;
int height;
cout<<"Enter the length of single wall in metres:";
cin>>height;
double number_of_walls;
number_of_walls=area/width*height;
cout<<"Total number of walls you can paint is" << number_of_walls<<endl;
return 0;
}
