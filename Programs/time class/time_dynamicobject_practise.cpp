 #include<iostream>
using namespace std;
class Time
{
private:
	unsigned int hour,min,sec;
public:
	Time();
	Time(unsigned int, unsigned int, unsigned int);
	void setHour(unsigned int);
	void setMin(unsigned int);
    void setSec(unsigned int);
	unsigned int getHour();
	unsigned int getMin();
	unsigned int getSec();

};
Time::Time()
{
	hour =0 ;
	min =0;
	sec =0 ;
}
Time::Time(unsigned int h, unsigned int m, unsigned int s)
{
	hour = h;
	min = m;
	sec = s;
}
void Time::setHour(unsigned int h)
{
	hour = h;
}
void Time::setMin(unsigned int m)
{
	min = m;
}
void Time::setSec(unsigned int s) {
	sec = s;
}
unsigned int Time::getHour()
{
	return hour;
}
unsigned int Time::getMin()
{
	return min;
}
unsigned int Time::getSec()
{
	return sec;
}


int main()
{
	
	Time* t1 = new Time(22,45,60);
	Time* t2 = new Time(23,50,60);
	cout << "first time is" << endl;
	cout <<"hour :"<< t1->getHour() << endl;
	cout <<"min :"<< t1->getMin() << endl;
	cout <<"sec :"<< t1->getSec() << endl;
	cout << "second time is" << endl;
	cout <<"hour :"<< t2->getHour() << endl;
	cout <<"min :"<< t2->getMin() << endl;
	cout <<"sec :"<< t2->getSec() << endl;
	
	

}