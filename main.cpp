#include <iostream>

using namespace std;

int main()
{
    cout << "Enter A and B: ";
    double a, b;
    cin >> a >> b;
    cout << "A + B = " << a + b << '\n'
         << "A - B = " << a - b << '\n'
         << "A * B = " << a * b << '\n'
         << "A / B = " << a / b << '\n'
         << "Max(a,b) = " << (a > b ? a : b) << '\n'
         << "Min(a,b) = " << (a < b ? a : b) << '\n';
    return 0;
}
