
#include<iostream>
#include<string>

using namespace std;


class bookType//class to store information about the book
{
       string title; //stories the title of an oject
       string Authors[4]; //stores the Authors names
       int n_Author; //stores number of Authors
       string publishr; //Stores the name of Publisher
       string ISBN;//store ISBN NUmber
       double price; //Stores the price
       int copies;
public:
       bookType(); //constructor
       void setTitle(string); //function declaration to set the title
       string r_title();   //function declaration to return the title
       void showTitle(); //function declaration to show the title

       void SetAuthors(int); //function declaration to set the Author(s)
       void ShowAuthors()const; //function declaration to show the Autho(s)

       void setPublishr(string); //function declaration to set the Publisher name
       void showPublishr();  //function declaration to show the Publisher name

       void setIBSN(string); //function declaration to set the IBSN No.
       string r_IBSN();  //function declaration to return the IBSN No.
       void showIBSN();   //function declaration to show the IBSN No.

       void setPrice(double); //function declaration to set the price
       double R_price();  //function declaration to return the price
       void showPrice();    //function declaration to show the price

       void setCopies(int); //function declaration to set the No.of Copies
       int r_copies();  //function declaration to return the No.of Copies
       void showCopies();  //function declaration to show the No.of Copies
       void u_Copies(int); //function declaration to update the No.of Copies

       void print(); //function declaration to print the all data about the book
       void search();
};
bookType A[3];
void bookType::setTitle(string t) //Functon to set the title
{
    title = t;
}
string bookType::r_title() //Functon to return the title
{
    return title;
}
void bookType::showTitle() //Functon to show the title
{
    cout << "\tTitle : " << r_title() << endl;
}

void bookType::SetAuthors(int n) //Functon to set the names of author(s)
{
    cin.ignore();
    for (int i = 0; i < n; i++)
    {
        cout << "\tAuthor #" << i + 1 << " : ";
        getline(cin, Authors[i]);
    }

}
void bookType::ShowAuthors() const//Functon to display the names of Authors
{
    cout << "\tAuthor(s)";
    if (Authors[0] != "")
        cout << Authors[0];
    if (Authors[1] != "")
        cout << ", " << Authors[1];
    if (Authors[2] != "")
        cout << ", " << Authors[2];
    if (Authors[3] != "")
        cout << ", " << Authors[3];
    cout << endl;
}
void bookType::setPublishr(string p) //Functon to set the name of publisher
{
    publishr = p;
}
void bookType::showPublishr() //Functon to show the name of publisher
{
    cout << "\tPublisher : " << publishr << endl;
}
void bookType::setIBSN(string i) //Functon to set ISBN no.
{
    ISBN = i;
}
string bookType::r_IBSN() //Functon to return ISBN no.
{
    return ISBN;
}
void bookType::showIBSN() //Functon to return ISBN no.
{
    cout << "\tISBN : " << r_IBSN() << endl;
}
void bookType::setPrice(double p)  //Functon to set the price of a book
{
    price = p;
}
double  bookType::R_price() //Functon to return the price of a book
{
    return price;
}
void bookType::showPrice() //Functon to show the price of a book
{
    cout << "\tPrice : " << R_price() << endl;
}
void bookType::setCopies(int n) //Functon to set the no. of copies of a book
{
    copies = n;
}
int bookType::r_copies() //Functon to return the no. of copies of a book
{
    return copies;
}
void bookType::u_Copies(int u) //Functon to update the no. of copies of a book
{
    copies = u;
}
void bookType::showCopies()
{
    cout << "\tCopies in Stock : " << r_copies() << endl;
}
void bookType::print() ////Functon to print the book information
{
    showTitle();
    ShowAuthors();
    showPublishr();
    showIBSN();
    showPrice();
    showCopies();
}
bookType::bookType() //constructor definition
{
    title = "";
    Authors[0] = "";
    Authors[1] = "";
    Authors[2] = "";
    Authors[3] = "";
    n_Author = 0;
    ISBN = "0-00000-00";
    price = 0.00;
    copies = 0;
}
void search() //function to serach the book by ISBN no. or by title
{
    int ch, c = 1, n;
    char co;
    string ti;
    cout << "Enter 1 for to Search by 'Title' and '2' for to search by IBSN No. : ";
    cin >> ch; //takes the choice
    switch (ch)
    {
    case 1: //executes if user enters 1
    {
        cin.ignore();
        cout << "Enter the title :";
        getline(cin, ti);
        for (int i = 0; i < 3; i++)
        {
            string t = A[i].r_title();
            if (ti == t)
            {
                c = 0;
                A[i].print();
                cout << "Did you want of modify the no of copies (y/n) :";
                cin >> co;
                switch (co)
                {
                case'y':
                {
                    cout << "Enter the nmuber of Copies :";
                    cin >> n;
                    A[i].u_Copies(n);
                    cout << endl << "Modified DATA " << endl << endl;
                    A[i].print();
                    break;
                }
                case'n':
                    break;
                default:
                    cout << "Invliad Choice" << endl;
                }
            }
            if (c == 1 && i == 2)
                cout << "Not found a book with this title" << endl;
        }
        break;
    }
    case 2: //executes if user enters 2
    {
        cin.ignore();
        cout << "Enter the IBSN :";
        getline(cin, ti);
        for (int i = 0; i < 3; i++)
        {
            string t = A[i].r_IBSN();
            if (t == ti)
            {
                c = 1;
                A[i].print();
                cout << "Did you want of modify the no of copies (y/n) :";
                cin >> ch;
                switch (ch)
                {
                case'y':
                {
                    cout << "Enter the nmuber of Copies :";
                    cin >> n;
                    A[i].u_Copies(n);
                    cout << endl << "Modified DATA " << endl << endl;
                    A[i].print();
                    break;
                }
                case'n':
                    break;
                default:
                    cout << "Invliad Choice" << endl;
                }
            }
            if (c = 1 && c == 2)
                cout << "Not found a book with this ISBN NO." << endl;
        }
        break;
    }
    default: //exectes if user enter invalid choice
        cout << "Invliad choice" << endl;
    }

}


 //creating object using Aray


int main()
{
    string ti;
    int n, c = 1;
    double p;
    char co;
    for (int i = 0; i < 3; i++) //loop to take the data of  multiple books
    {
        cout << "BOOK No." << i + 1 << endl;
        cout << "Enter the Title :";
        getline(cin, ti); //Takes the title from the user
        A[i].setTitle(ti); //set the title in private member of a class
        cout << "Enter the Numbers of Authors : ";
        while (!(cin >> n) || n < 0) { //validation checking of number of authors
            cin.clear();
            cin.ignore(999, '\n');
            cout << "Invalid data type! \nPlease Enter the Numbers of Authors again :";
        }
        if (n > 4 || n <= 0)
        {
            cout << "Enter the Numbers of Authors in the range of 1~4 :";
            cin >> n;
        }
        A[i].SetAuthors(n); //set the Authors NAme

        cout << "Enter the Name of Publisher :";
        getline(cin, ti); //Takes the Nmae of the publisher from the user
        A[i].setPublishr(ti); //sets the publisher name
        cout << "Enter the ISBN no : ";
        getline(cin, ti); //Takes the ISBN no. from the user
        A[i].setIBSN(ti); //ststhe ISBN name
        cout << "Enter the price : ";
        while (!(cin >> p) || p < 0) { //validation checking of price entered by the user
            cin.clear();
            cin.ignore(999, '\n');
            cout << "Invalid data type! \nPlease Enter the Price again :";
        }
        A[i].setPrice(p); //sets the price of the book
        cout << "Enter the number of copies :";
        while (!(cin >> n) || n < 0) { //validation checking of no of copies entered by the user
            cin.clear();
            cin.ignore(999, '\n');
            cout << "Invalid data type! \nPlease Enter the  number of copies again :";
        }
        A[i].setCopies(n); //set the no. of copies
        cout << endl;
        cin.ignore();
    }
    for (int i = 0; i < 3; i++) //loop to diplay the data of multiple books
    {
        A[i].print();
        cout << endl;
    }
    search(); //calling of search function
    
    return 0;
}
