# include<iostream>
# include<string>
using namespace std;
struct Teacher
{
	string name, specilization;
	char gender;
	unsigned int employNo;

};

int main()
{
	Teacher teachers[2];
	for (int i = 0; i < 2; i++)
	{
		cout<< "enter name of teacher : " << i + 1 <<endl;
		getline(cin, teachers[i].name);
		cout<< "enter specilization of teacher : " << i + 1 <<endl;
		getline(cin, teachers[i].specilization);
		cout<< "enter teacher gender :" << i + 1 <<endl;
		cin>> teachers[i].gender;
		cout<< "enter teacher employNo :" <<endl;
		cin>> teachers[i].employNo;
	}

	for ( int i = 0; i < 2; i++)
	{
		cout << "name of teacher " << i + 1 << ":" << teachers[i].name << endl;
		cout<< "specilizatin of teacher" << i + 1 << ":" << teachers[i].specilization <<endl;
		cout<< "gender of teacher " << i + 1 << ":" << teachers[i].gender <<endl;
		cout<< "employNo of teacher" << i + 1 << ":" << teachers[i].employNo <<endl;

	}

	return 0;
}