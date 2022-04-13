#include<iostream>
using namespace std;
class Triangle
{
	int base,height;
	float area;
	public:
		Triangle(int b,int h)
		{
			base=b;
			height=h;
			area=0.5*base*height;
		}
		void display()
		{
			cout<<"\n base:"<<base;
			cout<<"\n height:"<<height;
			cout<<"\n area:"<<area;
		}
		int getBase()
		{
			return base;
		}
			int getHeight()
		{
			return height;
		}		
};
class Rectangle
{
	int width,length,area;
	public:
		void output()
		{
			cout<<"\n length:"<<length;
			cout<<"\n width:"<<width;
			cout<<"\n area:"<<area;
		}
		Rectangle(Triangle t)
		{
			width=t.getBase();
			length=t.getHeight();
			area=width*length;
		}
};
int main()
{
	Triangle t(5,10);
	Rectangle r=t;
	t.display();
	r.output();
	return 0;
}
