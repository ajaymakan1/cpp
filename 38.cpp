/*Print the sum, difference and product of two complex numbers by creating a class named 'Complex'
with separate functions for each operation whose real and imaginary parts are entered by the user.*/

#include <iostream>
#include <string>
using namespace std;

class Complex
{

    int a, b, c, d;

public:
    Complex(void);

    void sum(void)
    {
        cout << "Sum of the complex number is :" << a + c << "+" << b + d << "i" << endl;
    }
    void diff(void)
    {
        cout << "Difference of the complex number is :" << a - c << "+" << b - d << "i" << endl;
    }
    void product(void)
    {
        cout << "Product of the complex number is :" << a * c - b * d << "+" << c*b + a*d << "i" << endl;
    }
};

Complex ::Complex(void)
{
    cin >> a >> b >> c >> d;
}
int main()
{
    Complex cx;
    cx.sum();
    cx.diff();
    cx.product();
    return 0;
}