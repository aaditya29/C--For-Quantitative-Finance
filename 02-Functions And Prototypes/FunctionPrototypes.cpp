#include <iostream>

using namespace std;

double divisor(double numerator, double denominator)
{
    // This function divides two numbers
    // and returns the result.

    return numerator / denominator;
}

double multiplier(double firstNum, double secondNum)
{
    // This function multiplies two numbers
    // and returns the result.

    return firstNum * secondNum;
}

int main()
{
    const int monthsInYear = 12;
    const int percentDenominator = 100;

    double principal = 0.0;

    cout << "Enter the amount of principal(in rupees): \n";
    cin >> principal;

    double humanInterest = 0.0;

    cout << "Enter the interest rate(in percentage): " << endl;
    cin >> humanInterest;

    double interest = divisor(humanInterest, percentDenominator);

    int yearsOfLoan = 0;

    cout << "Enter the number of years for loan: " << endl;
    cin >> yearsOfLoan;

    double monthInterest = divisor(interest, monthsInYear);
    long monthsOfLoan = multiplier(yearsOfLoan, monthsInYear);

    cout << "The principal is: " << principal << " " << endl
         << "The interest rate is(in percentage): " << interest << " " << endl
         << "The number of years for loan is: " << yearsOfLoan << " " << endl
         << "The months of interest is: " << monthInterest << " " << endl
         << "The number of months for loan is: " << monthsOfLoan << endl;

    return 0;
}
