#include<iostream>
using namespace std;
inline void sum()
{
	int x;
	int y;
	cout<<"input two numbers";
	cin>>x>>y;
	int add=x+y;
	cout<<"sum of"<<x<<"and"<<y<<"is"<<add;
}
int main()
{
	sum();
	return 0;
}
