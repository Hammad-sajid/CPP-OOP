#include<iostream>
#include<string>
using namespace std;
class Movie
{
	string title, directorName;
	unsigned int year;
public:
	void setTitle(string);
	void setdirectorName(string);
	void setYear(unsigned int);
	string getTitle();
	string getdirectorName();
	unsigned int getYear();
	void displayMovie(Movie, Movie);
	void checkMovie(Movie);
};

void Movie::setTitle(string t)
{
	title = t;
}
void Movie::setdirectorName(string n)
{
	directorName=n;
}
void Movie::setYear(unsigned int y)
{
	year=y;
}
string Movie::getTitle()
{
	return title;
}
string Movie::getdirectorName()
{
	return directorName;
}
unsigned int Movie::getYear()
{
	return year;
}
void Movie::displayMovie(Movie, Movie)
{
}
void displayMovie(Movie m1, Movie m2)
{
	cout <<"first movie title:"<< m1.getTitle() <<endl ;
	cout <<"first movie directorName:"<< m1.getdirectorName() <<endl ;
	cout <<"first movie year:"<< m1.getYear() <<endl ;
	cout <<"second movie title:"<< m2.getTitle() <<endl ;
	cout <<"second movie directorName:"<< m2.getdirectorName() <<endl ;
	cout <<"second movie year:"<< m2.getYear() <<endl ;
}
void Movie::checkMovie(Movie m2)
{
	if (directorName == m2.directorName && year == m2.year)
	{
		cout << "directorName and year are same" << endl;
	}
	if (directorName == m2.directorName)
	{
		cout << "directorName are same" << endl;

	}
	if (year == m2.year)
	{
		cout << "year are same" << endl;
	}
}

int main()
{
	string t, n;
	unsigned int y;
	Movie m1, m2;
	cout << "enter first movie title:" << endl;
	getline(cin, t);
	m1.setTitle(t);
	cout << "enter first movie directorName:" << endl;
	getline(cin, n);
	m1.setdirectorName(n);
	cout << "enter first movie year:" << endl;
	cin>> y;
	m1.setYear(y);	 
	cout << "enter second movie title:"<<endl ;
	getline(cin, t);
	m2.setTitle (t);
	cout << "enter second movie directorName:" << endl;
	getline(cin, n);
	m2.setdirectorName(n);
	cout << "enter second movie year:" << endl;
	cin>> y;
	m2.setYear(y);
	displayMovie(m1, m2);
	m1.checkMovie(m2);

	return 0;
}