#include<iostream>
using namespace std;
class B;
Class A
{
    int norNum1,iNum1;
    friend void add(A,B);
    public:
    void input1()
    {
        cout<<"input first normal number";
        cin>>norNum1;
        cout<<"input complex number";
        cin>>iNum1;
    }
};
class B
{/
    int norNum2,iNum2;
    public:
    void input2()
    {
        cout<<"input first normal number";
        cin>>norNum2;
        cout<<"input complex number";
        cin>>iNum2;
    }
    friend void add(A,B);
};
void add(Aa,Bb)
{
    int sumNor=a.norNum1+b.norNum2;
    int suml=a.iNum1+b.iNum2;
    cout<<sumNor<<"+"<<suml<<"i";
}
int main()
{
    A a;
    B b;
    a.input1();
    b.input2();
    add(a,b);
}