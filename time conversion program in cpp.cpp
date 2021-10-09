#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int seconds;
	int hours;
	int minutes;
	cout <<"input time in seconds : ";
	cin >> seconds;
	hours =seconds/3600;
	seconds=seconds%3600;	
	minutes= seconds/60;
	seconds=seconds%60;
	
	cout<<hours<<" hours :"<< minutes<<" minutes :"<< seconds<<" seconds "<<endl;
}
