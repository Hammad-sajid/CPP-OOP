#include<iostream>
#include<string>
using namespace std;

void menu(); 

class dayType
{
       string Wdays[7];
       int i;
       string day;
       string preDay;
       string NxtDay;
       string AddDays;
public:
       dayType(string);
       string setday(); 
       string preday(); 
       void Nextday(); 
       string add(int n); 
       void print(); 

};
dayType::dayType(string i) :day(i)
{ 
    Wdays[0] = "mon";
    Wdays[1] = "tue";
    Wdays[2] = "wed";
    Wdays[3] = "thur";
    Wdays[4] = "fri";
    Wdays[5] = "sat";
    Wdays[6] = "sun";
}

string dayType::setday() 
{
    if (day == Wdays[0])
    {
        i = 0;
    }
    else if(day == Wdays[1])
    {
        i = 1;
    }
    else if(day == Wdays[2])
    {
        i = 2;
    }
    else if(day == Wdays[3])
    {
        i = 3;
    }
    else if(day == Wdays[4])
    {
        i = 4;
    }
    else if(day == Wdays[5])
    {
        i = 5;
    }
    else if(day == Wdays[6])
        i = 6;
    else
    {
        day = "Invalid Input";
        i = 7;
    }
    return day;
}
string dayType::preday() 
{
    if (i == 0)
        preDay = Wdays[6];
    else if(i == 7)
        preDay = "Invalid Input";
    else
        preDay = Wdays[i - 1];
    return preDay;
}
void dayType::Nextday() 
{
    if (i == 6)
        NxtDay = Wdays[0];
    else if(i == 7)
        preDay = "Invalid Input";
    else
        NxtDay = Wdays[i + 1];

}
string  dayType::add(int n)
{
    n = n + i;
    while (n >= 7)
    {
        n = n - 7;
    }
    if (i == 7)
        Wdays[n] = "Invalid Input ";
    return AddDays = Wdays[n];
}
void dayType::print()
{
    cout << endl << "\tDay=" << day << "day" << endl;
    cout << "\tPrevious day :" << preDay << "day" << endl;
    cout << "\tNext day :" << NxtDay << "day" << endl;
    cout << "\tAfter Adding Days :" << AddDays << "day" << endl;
}
void menu() //Function to display menu
{
    cout << "******************MENU********************" << endl;
    cout << "\tEnter 'sun' for 'Sunday'" << endl;
    cout << "\tEnter 'mon' for 'Monday'" << endl;
    cout << "\tEnter 'tue' for 'Tuesday'" << endl;
    cout << "\tEnter 'wed' for 'Wednesday'" << endl;
    cout << "\tEnter 'thur' for 'Thursday'" << endl;
    cout << "\tEnter 'fri' for 'Friday'" << endl;
    cout << "\tEnter 'sat' for 'Saturday'" << endl;
}

int main()
{
    int n;

    string d;
    menu(); 
    cout << "Enter the day :";
    getline(cin, d); 
    dayType Da(d); 
    Da.setday();
    Da.preday();
    Da.Nextday();

    cout << "Enter the No. of days to add :";
    while (!(cin >> n) || n < 0) { //validation checking
        cin.clear();
        cin.ignore(999, '\n');
        cout << "Invalid data type! \nPlease enter No. of daysto add again :";

    }
    Da.add(n);
    Da.print();
    system("pause");
    return 0;

}

