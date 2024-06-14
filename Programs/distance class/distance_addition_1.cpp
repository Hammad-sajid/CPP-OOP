# include<iostream>
using namespace std;
class Distance {
private:
	unsigned int feet;
	float inches;
public:
	Distance();
	Distance(unsigned int,float);
	void setFeet(unsigned int);
	void setInches(float);
	unsigned int getFeet();
	float getInches();
	void addDistances(Distance, Distance);
	

};
Distance::Distance()
{
	feet = 0;
	inches = 0.0;
}
Distance::Distance(unsigned int f, float i) {
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
void Distance::addDistances(Distance distance1,Distance distance2) {
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
	Distance distance1(10,7.5), distance2(11,5.5), distance3;
	/*distance1.setFeet(10);
	distance1.setInches(7.5);
	distance2.setFeet(11);
	distance2.setInches(5.5);*/
	distance3.addDistances(distance1 , distance2);
	cout << "feet are" << distance3.getFeet()<<endl;
	cout << "inches are" << distance3.getInches()<<endl;
	return 0;
}