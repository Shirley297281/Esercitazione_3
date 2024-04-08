#include <iostream>
#include "ComplexNumber.hpp"

//struct is defined in hpp, here I write specifies for toconiugate
Complex Complex::toconiugate(){
    if (abs(imaginary-0) == 0){
        cout <<"(same)";
        return Complex(real,imaginary);
    }else{
        return Complex(real,-1*imaginary);
    }

}

ostream& operator<< (ostream& os, const Complex& z)
{
    os<<z.real;
    if (z.imaginary>= 0 ){
        os << "+"<< z.imaginary<<"i";
    }
    else{
        os <<z.imaginary<<"i";
    }


    /*
    /// Other version : I want to read less digits as possible,
    /// so if a number is indistinguishable for machine precision
    /// from its corresponding integer, then I display the conversion to an integer to remove the decimal digits

    if (abs(z.real-(int)z.real) < 1e-16){
        os << (int)z.real;
    }else{
        os<<z.real;
    }

    if (z.imaginary>=0){
        if (abs(z.imaginary-(int)z.imaginary) < 1e-16){
            os <<  " + "<< (int) z.imaginary<<"i";
        }else{
            os <<  " + "<< z.imaginary<<"i";
        }
    }else{
        if (abs(z.imaginary-(int)z.imaginary) < 1e-16){
           os << " - " << -1*(int) z.imaginary<<"i";
        }else{
            os <<" - "<< -1*z.imaginary<<"i";
        }
    }*/

    return os;
}


Complex operator+ (const Complex &c1, const Complex &c2){
    double reale = c1.real + c2.real;
    double immaginaria = c1.imaginary + c2.imaginary;
    Complex c(reale,immaginaria);
    return c;
}

bool operator== (const Complex &c1, const Complex &c2){
    // Calcoliamo la differenza tra le parti reali e immaginarie
    double realDiff = abs(c1.real - c2.real);
    double imagDiff = abs(c1.imaginary - c2.imaginary);

    // Verifichiamo se le differenze sono entrambe inferiori alla tolleranza
    return (realDiff < 1e-16) && (imagDiff < 1e-16);
}
