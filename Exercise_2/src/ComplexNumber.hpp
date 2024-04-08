//HEADER GUARDS
#ifndef __COMPLEX_H //if complex symbol is not already defined
#define __COMPLEX_H //defines complex symbol

#include <iostream>

using namespace std;


struct Complex{
    //attributes
    double real;
    double imaginary;

    Complex() = default;



    Complex(double x, double y):
        real(x),
        imaginary(y)
    {
    }

    //object directly modified

    Complex toconiugate();
};


/// <<
///
ostream& operator<< (ostream& os, const Complex& c);

/// +
///
Complex operator+ (const Complex &c1, const Complex &c2);

/// ==
///
bool operator== (const Complex &c1, const Complex &c2);

#endif
