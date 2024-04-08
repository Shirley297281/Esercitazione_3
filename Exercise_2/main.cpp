#include "ComplexNumber.hpp"
#include <iostream>
#include <iomanip>

int main()
{
    //Examples
    Complex z(1,2);
    cout<<"First complex number example: "<<z<<endl;

    Complex zc = z.toconiugate();
    cout << "-> coniugate complex number: "<<zc<<endl;

    Complex c(1,0);
    cout<<"Second complex number example: "<<c<<endl;

    Complex cc = c.toconiugate();
    cout << "-> coniugate complex number: "<<cc<<endl;



    // two complex numbers
    Complex z1(3, -4);
    Complex z2(3, 4);

    //
    if (z1 == z2) {
        cout << "Two complex numbers ["<<z1<< ", "<<z2<<"] are equal." << endl;
    } else {
        cout << "Two complex numbers ["<<z1<< ", "<<z2<<"] are different." << endl;
    }

    Complex sum(0,0) ;
    sum = z1+z2;

    cout <<scientific<<setprecision(16)<<"Their sum: "<<sum<<endl;


    /*something interesting happens with this two numbers :
    [3.0000000000002e+00 - 4.0000000000000e+00i, 3.0000000000006e+00 - 4.0000000000000e+00i]
    (approximation errors)
     * 3.0000000000002 + 3.0000000000006 = 6.0000000000008 = 6 + 8e-13
     * setprecision(13) --> 6.0000000000008e+00
     * setprecision(14) --> 6.00000000000080e+00
     * setprecision(15) --> 6.000000000000799e+00
     * setprecision(16) --> 6.0000000000007994e+00, error (sum - intsum) = 7.9936057773011271e-13
    */

    return 0;
}
