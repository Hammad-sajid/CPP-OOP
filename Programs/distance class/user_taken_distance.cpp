#include<iostream>
using namespace std;
class Distance {
private:
	int feet;
	float inches;
public:
	Distance();
	Distance(int, float);
	void setFeet(int);
	void setInches(float);
	int getFeet();
	float getInches();
	void addDistances(Distance, Distance);
};
Distance::Distance() 
{
	feet = 0;
	inches = 0;
}
Distance::Distance(int f, float i)
{
	feet = f;
	inches = i;
}
void Distance::setFeet(int f)
{
	feet = f;
}
void Distance::setInches(float i)
{
	inches=i;
}
int Distance::getFeet() 
{
	return feet;
}
float Distance::getInches() 
{
	return inches;
}
void Distance::addDistances(Distance distance1, Distance distance2)
{
	inches = distance1.inches + distance2.inches;
	if (inches >= 12)
	{
		inches -= 12;
		feet++;
		feet = distance1.feet + distance2.feet;

	}
}
int main()
{
	int f;
	float i;
	Distance distance1, distance2, distance3;
	cout << "enter feet of distance 1:" << endl;
	cin >> f;
	distance1.setFeet(f);
	cout << "enter inches of distance 1:" << endl;
	cin >> i;
	distance1.setInches(i);
	cout << "enter feet of distance 2:" << endl;
	cin >> f;
	distance2.setFeet(f);
	cout << "enter inches of distance 2:" << endl;
	cin >> i;
	distance2.setInches(i);
	distance3.addDistances(distance1, distance2);
	cout << "feet are" << distance3.getFeet() << endl;
	cout << "inches are" << distance3.getInches() << endl;
	return 0;
}
