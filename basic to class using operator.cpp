#include<iostream>
using namespace std;
class Time
{
	int hrs,min;
	public:
		void operator=(int);
		void display();
};
void Time::operator=(int t)
{
		cout<<"Basic to class type conversion..."<<endl;
			hrs=t/60;
			min=t%60;
}
void Time::display()
{
		cout<<"\n The converted time in hours and minutes are:"<<endl;
			cout<<hrs<<"hours :"<<min<<"minutes";
}
int main()
{
	Time obj;
	int duration;
	cout<<"Enter the time duration";
	cin>>duration;
	obj=duration;
	obj.display();
	return 0;
	
}
