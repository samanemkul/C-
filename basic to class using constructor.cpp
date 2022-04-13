#include<iostream>
using namespace std;
class Time
{
	int hrs,min;
	public:
		Time(int t);
		{
			cout<<"Basic to class type conversion..."<<endl;
			hrs=t/60;
			min=t%60;
		}
		void display()
		{
			cout<<"\n The converted time in hours and minutes are:"<<endl;
			cin>>hrs>>"hours :">>min>>"minutes"
		}
};
int main()
{
	int minutes;
	Time obj;
	cout<<"Enter the time in minutes";
	cin>>minutes;
	Time obj=minutes;
	obj.display();
	
	
}
