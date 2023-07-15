// Calculating monthly payment
#include <iostream>
#include <cmath>
#include <iomanip>

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

    double payment = 0.0;
    payment = principal *
              (monthInterest /
               (1 - (pow((double)1 + monthInterest,
                         (double)-monthsOfLoan))));

    cout << "Payment: " << setiosflags(ios::fixed) << setprecision(2) << payment << endl;
    /*
    1) setiosflags: The setiosflags function sets the flag bits in mask for a stream. In other words, it performs the equivalent of stream .setf(mask)
    2)setprecision(): The setprecision() method of iomanip library in C++ is used to set the ios library floating point precision based on the precision specified
    */

    return 0;
}
