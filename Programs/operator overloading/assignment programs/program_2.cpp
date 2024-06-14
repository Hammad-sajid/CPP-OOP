#include<iostream>
#include<string>
using namespace std;
class membertype{
private:
       string name;
       int Id;
       int no_of_books;
       double amunt_spnt;
public:
       void set_name(string); //function declaration for set name
       string get_name();    //function declaration for get name
       void set_Id(int);     //function declaration for set id
       int get_Id();        //function declaration for get id
       void set_no_of_books(int); //function declaration for set no. of books
       int get_no_of_books();     //function declaration for get no. of books
       void set_amunt_spnt(double);  //function declaration for set amount spent
       double get_amunt_spnt();      //function declaration for get amount spent
       void set_modify_no_of_books(int);   //function declaration for set modified no. of books
       void set_modify_amunt_spnt(double);  //function declaration for set modified amount spent
       void print();         //function declaration to print
};
void membertype::set_name(string d) //function definition for set name
{
    name = d;
}
string membertype::get_name() 
{ //function definition for get name
    return name;
}
void membertype::set_Id(int n) 
{ //function definition for set id
    Id = n;
}
int membertype::get_Id()
{  //function definition for get id
    return Id;
}
void membertype::set_no_of_books(int m)
{ //function definition for set no. of books
    no_of_books = m;
}
int membertype::get_no_of_books()
{   //function definition for get no. of books
    return no_of_books;
}
void membertype::set_amunt_spnt(double a)
{  //function definition for set amuont spent
    amunt_spnt = a;
}
double membertype::get_amunt_spnt()
{ //function definition for get amuont spent
    return amunt_spnt;
}

void membertype::print() 
{ //function definition for print
    cout << "Name  is: " << name << endl;
    cout << "Id is: " << Id << endl;
    cout << "Number of books is: " << get_no_of_books() << endl;
    cout << "amount spent is: " << get_amunt_spnt() << endl;
}
void membertype::set_modify_no_of_books(int m) 
{
    no_of_books = m;
}

void membertype::set_modify_amunt_spnt(double a)
{
    amunt_spnt = a;
}
int main()
{


    membertype m;   // creating object
    string n;      //
    int i, b, y;
    double s;
    cout << "Name is :";
    getline(cin, n);    //taking name from user
    m.set_name(n);
    cout << "id is :";
    while (!(cin >> i) || i < 0) 
    { //taking id from user and validation checking validation of ID
        cin.clear();
        cin.ignore(999, '\n');
        cout << "Invalid data type! \nPlease Enter the ID again :";
    }

    m.set_Id(i);
    cout << "Number of books is :";
    while (!(cin >> b) || b < 0) { //taking no. of books from user and validation checking validation of it
        cin.clear();
        cin.ignore(999, '\n');
        cout << "Invalid data type! \nPlease Enter the Numbers of BOOKS again :";
    }
    m.set_no_of_books(b);
    cout << "Amount spent is :";
    while (!(cin >> s) || s < 0) { //taking the Amount spent from user and validation checking validation of it
        cin.clear();
        cin.ignore(999, '\n');
        cout << "Invalid data type! \nPlease Enter the Amount spent again :";
    }
    m.set_amunt_spnt(s);
    cout << endl;
    cout << endl;
    m.print();  //printing all information before modifying
    cout << endl;
    cout << endl;
    cout << "Press 1 to modify number of books " << endl;
    cout << "press 2  to modify amount spent" << endl;
    cout << "Enter your choice" << endl;
    cin >> y;
    cout << endl;
    switch (y)
    {
    case 1:
    {
        cout << "Enter Updated number of books: ";
        while (!(cin >> b) || b < 0) { //taking updated no od books and validation checking validation of it
            cin.clear();
            cin.ignore(999, '\n');
            cout << "Invalid data type! \nPlease Enter Updated number of books again:";
        }

        m.set_modify_no_of_books(b);
        break;
    }
    case 2:
    {
        cout << "Enter Updated amount spent: ";
        while (!(cin >> s) || s < 0) { //taking updated Amount  and validation checking validation of it
            cin.clear();
            cin.ignore(999, '\n');
            cout << "Invalid data type! \nPlease Enter the Updated amount spent :";
        }
        m.set_modify_amunt_spnt(s);
        break;
    }
    default:
        cout << "invalid input";
    }
    m.print();  //printing all information after modifying
    cout << endl;
    system("pause");
    return 0;
}