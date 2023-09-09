#include <iostream>
using namespace std;
int calculateGCD(int a, int b)
{
    if (b == 0)
        return a;
    return calculateGCD(b, a % b);
}

int main()
{
    int num1, num2;

    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    int gcd = calculateGCD(num1, num2);

    cout << "The GCD of " << num1 << " and " << num2 << " is " << gcd << endl;

    return 0;
}
