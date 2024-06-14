#include<iostream>
using namespace std;
class Distance {
private:
	unsigned int feet;
	float inches;
public:
	Distance();
	Distance(unsigned int, float);
	void setFeet(unsigned int);
	void setInches(float);
	unsigned int getFeet();
	float getInches();
	Distance addDistances(Distance);
};
Distance::Distance()
{
	feet = 0;
	inches = 0;
}

Distance::Distance(unsigned int f, float i)
{
	feet = f;
	inches = i;
}
void Distance::setFeet(unsigned int f)
{
	feet = f;
}
void Distance::setInches(float i)
{
	inches = i;
}
unsigned int Distance::getFeet()
{
	return feet;
}
float Distance::getInches()
{
	return inches;
}
Distance Distance::addDistances( Distance distance2)
{
	Distance temp;
	temp.inches = inches + distance2.inches;
	temp.feet = 0;
	if (temp.inches >= 12)
	{
		temp.inches -= 12;
		temp.feet++;
		temp.feet += feet + distance2.feet;
		return temp;
	}
}
int main()
{
	Distance distance1(11,6.25), distance2(17,5.75), distance3;
	distance3 = distance1.addDistances(distance2);
	cout << "feet are :"<<distance3.getFeet()<<endl;
	cout << "inches are :" << distance3.getInches() << endl;
	return 0;
}