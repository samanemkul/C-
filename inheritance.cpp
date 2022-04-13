#include<iostream>
using namespace std;
#include<iomanip>
class Shape
{
	protected:
		int width;
		int height;
		public:
			void setWidth(int w)
			{
				width=w;
			}
			void setHeight(int h)
			{
				height=h;
			}
};
class Rectangle:public Shape
{
	public:
		int getArea()
		{
			return (width*height);
		}
		void display()
		{
			cout<<"The area of rectangle is"<<getArea()<<endl;
		}
};
int main()
{
	Rectangle obj1;
	obj1.setWidth(5);
	obj1.setHeight(3);
	obj1.display();
	return 0;
	
}
