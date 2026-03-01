#include<iostream>
using namespace std;
main(){
double length_in_minutes;
cout<<"Enter the length of video in minutes:";
cin>>length_in_minutes;
double frames_per_second;
cout<<"Enter the number of frames per second:";
cin>>frames_per_second;
double number_of_frames;
number_of_frames=length_in_minutes*frames_per_second*60;
cout<<"Total number of frames in video is" <<number_of_frames<<endl;
return 0;
}