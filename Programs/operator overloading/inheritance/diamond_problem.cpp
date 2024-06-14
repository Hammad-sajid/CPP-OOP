#include<iostream>
using namespace std;
/*class A {
public:
void showdata() {

	}
};
class B {
	public:
	void showdata() {

	}

};
class C :public A, public B {

};*/
//multiple inheritance 
class A {
public:
	void showdata() {
		cout << "virtual inheritance" << endl;

	}

};
class B :virtual public A {

};
class C :virtual public A {

};
class D :public B, public C {

};
//diamond problem solution is virtual inheritance.
int main()
{
	D d1;
	d1.showdata();
	return 0;
}
