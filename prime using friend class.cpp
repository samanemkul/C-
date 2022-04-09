#include<iostream>
using namespace std;
class sol;
class prime
{
	int num;
	public:
		friend class sol;
		void input()
		{
			cout<<"input number ";
			cin>>num;
		}
};
class sol
{
	public:
		primecal(prime a)
		{
			int i,j,c=0;
			for(i=1;i<=a.num;i++)
			{
				if(a.num%i==0)
				{
					c++;
				}
			}
			if(c==2)
			{
				cout<<"it is prime";
			}
			else
			{
				cout<<"it is not prime";
			}
		}
};
int main()
{
	prime number;
	sol out;
	number.input();
	out.primecal(number);
	return 0;
}
