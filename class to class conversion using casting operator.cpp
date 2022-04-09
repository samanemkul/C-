#include<iostream>
using namespace std;
class Rectangle
{
	int width,length,area;
	public:
		Rectangle(int l,int w)
		{
			length=l;
			width=w;
			area=length*width;
		}
		void output()
		{
			cout<<"length:"<<length<<endl;
			cout<<"width:"<<width<<endl;
			cout<<"Area of rectangle:"<<area<<endl;
		}
};
class Triangle
{
	int base,height;
	float area;
	public:
		Triangle(int b, int h)
		{
			base=b;
			height=h;
			area=0.5*base*height;
		}
		void print()
		{
			cout<<"base:"<<base<<endl;
			cout<<"height:"<<height<<endl;
			cout<<"Area of triangle:"<<area<<endl;
		}
		operator Rectangle()
		{
			Rectangle temp(base,height);
			return temp;
		}
};
int main()
{
	Triangle t(10,20);
	Rectangle r=t;
	t.print();
	r.output();
	return 0;
	
}
