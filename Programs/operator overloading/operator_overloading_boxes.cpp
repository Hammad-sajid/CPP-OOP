#include<iostream>
using namespace std;
class Box
{
private:
	double lenght, breath, height;
public:
	Box();
	Box(double, double, double);
	void setLenght(double);
	void setBreath(double);
	void setHeight(double);
	double getLenght();
	double getBreath();
	double getHeight();
	double volume();
	bool operator<(Box);
	bool operator>(Box);
	bool operator<=(Box);
	bool operator>=(Box);
	bool operator==(Box);
	bool operator!=(Box);

};
Box::Box()
{
	lenght = 3.0;
	breath = 2.0;
	height = 3.0;
}
Box::Box(double l,double b,double h)
{
	lenght = l;
	breath = b;
	height = h;
}
void Box::setLenght(double l)
{
	lenght = l;
}
void Box::setBreath( double b)
{
	breath=b;
}
void Box::setHeight( double h)
{
	height=h;
}
double Box::getLenght()
{
	return lenght;
}
double Box::getBreath()
{
	return breath;
}
double Box::getHeight()
{
	return height;
}
double Box::volume()
{
	return lenght * breath * height;
}
bool Box::operator<(Box aBox)
{
	return volume() < aBox.volume();
}
bool Box::operator>(Box aBox)
{
	return volume() > aBox.volume();
}
bool Box::operator<=(Box aBox)
{
	return volume()<=  aBox.volume();
}
bool Box::operator>=(Box aBox)
{
	return volume() >= aBox.volume();
}
bool Box::operator==(Box aBox)
{
	return volume() == aBox.volume();
}
bool Box::operator!=(Box aBox)
{
	return volume() != aBox.volume();
}
int main()
{
	Box boxes[10];
	int i;
	for (i = 0; i< 10; i++)
	{
		boxes[i] = Box(i,i*2,i*3);
	}
	//operator <
	Box largest = boxes[0];
	for (i = 0; i < 10; i++)
	{
		if (largest < boxes[i])
			largest = boxes[i];
	}
	cout << "result of < operator is:" << endl;
	cout << largest.getLenght() << endl;
	cout << largest.getBreath() << endl;
	cout << largest.getHeight() << endl;
	//opeartor >
	Box smallest = boxes[0];
	for (i = 0; i < 10; i++)
	{
		if (smallest > boxes[i])
			smallest = boxes[i];
	}
	cout << "result of > operator is :" << endl;
	cout << smallest.getLenght() << endl;
	cout << smallest.getBreath() << endl;
	cout << smallest.getHeight() << endl;
	//opeartor<=
	for (i = 0; i < 10; i++)
	{
		if (largest <= boxes[i])
			largest = boxes[i];
	}
	cout << "result of <= operator is :" << endl;
	cout << largest.getLenght() << endl;
	cout << largest.getBreath() << endl;
	cout << largest.getHeight() << endl;
	//operator >=
	for (i = 0; i < 10; i++)
	{
		if (largest >= boxes[i])
			largest = boxes[i];
	}
	cout << "result of >= operator is :" << endl;
	cout << largest.getLenght() << endl;
	cout << largest.getBreath() << endl;
	cout << largest.getHeight() << endl;
	//operator ==
	for (i = 0; i < 10; i++)
	{
		if (largest == boxes[i])
			largest = boxes[i];
	}
	cout << "result of == operator is :" << endl;
	cout << largest.getLenght() << endl;
	cout << largest.getBreath() << endl;
	cout << largest.getHeight() << endl;
	//operator !=
	for (i = 0; i < 10; i++)
	{
		if (largest != boxes[i])
		largest = boxes[i];
	}
	cout << "result of != operator is :" << endl;
	cout << largest.getLenght() << endl;
	cout << largest.getBreath() << endl;
	cout << largest.getHeight() << endl;

	return 0;
}


