#include<iostream>
#include<string>
using namespace std;

class Books
{
	unsigned int ISBN;
	string title, publisher;
	string author[4];
	double price;
    unsigned int copies;
public:
	Books();
	Books(unsigned int, string, string, unsigned int, unsigned int);

};
Books::Books()
{

}


class Member
{
	unsigned int ID;
	string name;
	unsigned int bookBrought,amountSpent;
public:
	Member();
	Member(unsigned int, string, unsigned int, unsigned int, unsigned int);


};
class bookStore 
{
	Books book[2];
	Member member[3];

public:
	void setData();
	void showData();

};
void bookStore::setData()
{

}

