 
#include <iostream>  
using namespace std;

class Complex{

private:
    int real;
    int imaginary;
public:
    Complex();
    void setReal(int);
    void setImginary(int);
    int getReal();
    int getImginary();
    Complex addNumber(Complex, Complex);
};



Complex::Complex()
{
        real = 0;
        imaginary = 0;
}
void Complex::setReal(int r)
{
    real = r;
}
void Complex::setImginary(int i)
{
    imaginary = i;
}
int Complex::getReal()
{
    return real;
}
int Complex::getImginary()
{
    return imaginary;
}
Complex Complex::addNumber(Complex c1, Complex  c2)
{
    {

        Complex temp;
        temp.real = c1.real + c2.real;
        temp.imaginary = c1.imaginary + c2.imaginary;
        return temp;
    }
}


int main()
{

    Complex c1, c2,c3;
    c1.setReal(5);
    c1.setImginary(8);
    c2.setReal(9);
    c2.setImginary(4);
    cout << "first complex no is:" << c1.getReal() << "+" << c1.getImginary()<< "i" << endl;
    cout << "second complex no is :" << c2.getReal() << "+" << c2.getImginary()<< "i" << endl;
   c3=c3.addNumber(c1, c2);
   cout << "sum of complex number are:" << c3.getReal() << "+"  << c3.getImginary()<< "i" << endl;

   return 0;
       

    

}