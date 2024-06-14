# include<iostream>
using namespace std;
class A {
public:
	virtual void showdata() {
		cout << "a is called" << endl;
	}
};
class B :public A  {
public:
	void showdata()
	{
		cout << "b is called" << endl;
}
};
int main()
{
	A* aptr;
	B b1;
	aptr = &b1;
	aptr->showdata();

}