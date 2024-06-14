#include<iostream>
using namespace std;
class Time
{
	int hour, min, sec;
public:
	Time();
	void setHour(unsigned int);
	void setMin(unsigned int);
	void setSec(unsigned int);
	unsigned int getHour();
	unsigned int getMin();
	unsigned int getSec();
	Time addTime(Time);
	Time  subTime(Time);
	bool compareTime(Time);
};
Time::Time() 
{
	hour = 0;
    min = 0;
    sec = 0;
}
void Time::setHour(unsigned int h)
{
	hour = h;
}
void Time::setMin(unsigned int m)
{
	min=m;
}

void Time::setSec(unsigned int s) 
{
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
Time  Time::addTime(Time t2)
{
	Time temp;
	temp.sec = sec + t2.sec;
	temp.min = min + t2.min;
	temp.hour = hour +t2.hour;
	if (temp.sec > 60)
	{
		temp.sec = temp.sec % 60;
		temp.min +temp.sec / 60;
	}
	if (temp.min > 60)
	{
		temp.min = temp.min % 60;
		temp.hour + temp.min / 60;
	}
	if (temp.hour > 24)
	{
		temp.hour = temp.hour % 24;
	}
	return temp;
}

Time  Time::subTime( Time t2) 
{
	Time temp;
	if (hour & min & sec > t2.hour&t2.min&t2.sec)
	{
		temp.sec = sec - t2.sec;
		temp.min = min - t2.min;
		temp.hour = hour - t2.hour;
	}
	else
	{
		temp.sec = t2.sec - sec;
		temp.min = t2.min - min;
		temp.hour = t2.hour - hour;
		return temp;
	}
	/*
	if (min > t2.min)
	{
		temp.min = min - t2.min;
	}
	else
		temp.min = t2.min - min;
	if (hour > t2.hour)
	{
		temp.hour = hour - t2.hour;
	}
	else
		temp.hour = t2.hour - hour;
	return temp;*/
}

bool Time::compareTime(Time t2)
{
	if (hour == t2.hour && min == t2.min && sec == t2.sec)
	{
		return  true;
	}
	else
		return  false;
}


int main()
{
	unsigned int h, m, s;
	Time t1, t2,t3;
	cout << "enter first time hours between 0 to 24" << endl;
	cin >> h;
	if (h > 24) 
	{
		cout << "enter hour again";
		cin >> h;
	}
	t1.setHour(h);
	cout << "enter first time min between 0 to 60" << endl;
	cin >> m;
	if (m > 60)
	{
		cout << "enter min again";
		cin >> m;
	}
	t1.setMin(m);
	cout << "enter firet time sec between 0 to 60" << endl;
	cin >> s;
	if (s > 60)
	{
		cout << "enter sec again";
		cin >> s;
	}
	t1.setSec(s);
	cout << "enter second time hours between 0 to 24" << endl;
	cin >> h;
	if (h > 24)
	{
		cout << "enter hour again";
		cin >> h;
	}
	
	t2.setHour(h);
	cout << "enter second time min between 0 to 60" << endl;
	cin >> m;
	if (m > 60)
	{
		cout << "enter min again";
		cin >> m;
	}
	
	t2.setMin(m);
	cout << "enter second time sec between 0 to 60" << endl;
	cin >> s;
	if (s > 60)
	{
		cout << "enter sec again";
		cin >> s;
	}
	
	t2.setSec(s);
	cout << "First time is :" << t1.getHour() << ":" << t1.getMin() << ":" << t1.getSec() << " " << endl;
	cout << "Second time is :" << t2.getHour() << ":" << t2.getMin() << ":" << t2.getSec() << " " << endl;
	t3=t1.addTime(t2);
	cout <<"addition of times are :" <<t3.getHour()<<":" << t3.getMin()<<":" << t3.getSec() << endl;
    t3=t1.subTime(t2);
	cout <<"subtraction of times are:"<< t3.getHour()<<":" << t3.getMin()<<":" << t3.getSec() << endl;
	if (t1.compareTime(t2))
	{
		cout << "times are equal" << endl;

	}
	else
		cout << "times are not equal"<<endl;
	
      return 0;
}


