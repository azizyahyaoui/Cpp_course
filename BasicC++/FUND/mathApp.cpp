#include <iostream>
// include math lib
#include <math.h>
/*
    Trigonometric functions: sin(), cos(), tan(), asin(), acos(), atan()
    Exponential and logarithmic functions: exp(), log(), log10()
    Power functions: pow(), sqrt(), cbrt()
    Rounding and remainder functions: ceil(), floor(), fmod()
    Miscellaneous functions: abs(), fabs(), rand(), srand()
*/

using namespace std;

int main(int argc, char const *argv[])
{
    double base, exponent, result;
    cout << "==========================================================" << endl;

    cout << "Enter the base number : \n";
    cin >> base;
    cout << "Enter the exponent value : \n";
    cin >> exponent;

    result = pow(base, exponent);
    cout << base << " raised to the power of " << exponent << " is " << result << endl;
    cout << "==========================================================" << endl;
    system("pause>0");
    return 0;
}
