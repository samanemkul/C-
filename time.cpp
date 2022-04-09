#include<iostream>
using namespace std;
class time
{
	int minute,hour,resulthrs,resultMin;
	public:
		void sum(time x,time y)
		{
			resultMin=x.minute+y.minute;
			resulthrs=x.hour+y.hour;
		}
		void input()
		{
			cout<<"input minutes(<60)";
			cin>>minute;
			cout<<"input hrs(<24)";
			cin>>hour;
		}
		friend void output(time,time);
};
void output(time c,time d)
{
	cout<<"addition between"<<c.hour<<"hour"<<c.minute<<"minute and"<<d.hour<<"hour"<<d.minute<<"minute is"<<c.resulthrs<<"hour and"<<c.resultMin<<"minute";
}
int main()
{
	time clock,fclock;
	clock.input();
	fclock.input();
	clock.sum(clock,fclock);
	output(clock,fclock);
	return 0;
}
