//
#include<iostream>
using namespace std;
class asc
{
	int a[10];
	public:
		friend void order(asc);
};
 void order(asc b)
{
			int i,j,temp;
			cout<<"enter the numbers";
			for(i=0;i<10;i++)
			{
				cin>>b.a[i];
			}
			for(i=0;i<10;i++)
			{
				for(j=i+1;j<10;j++)
				{
					if(b.a[i]>b.a[j])
					{
						temp=b.a[i];
						b.a[i]=b.a[j];
						b.a[j]=temp;
					}
				}
			}
			for(i=0;i<10;i++)
			{
				cout<<b.a[i]<<endl;
			}
}
int main()
{
	asc x;
	order(x);
	return 0;
}

